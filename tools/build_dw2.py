#!/usr/bin/env python3
"""Build and verify the DW2 USA executable (SLUS_011.93).

Single-exe relink. Two kinds of translation unit:

  * asm data/rodata/header (asm/USA/**/*.s outside nonmatchings/) -> assembled
    straight with mips-linux-gnu-as.
  * C source (src/**/*.c) -> preprocess (mingw gcc -E) -> PSY-Q cc1 -> maspsx ->
    mips-linux-gnu-as. A c file's INCLUDE_ASM stubs pull the per-function
    nonmatchings .s in through the assembler, so nonmatchings/ is never
    assembled on its own.

Then link with the splat linker script plus the auto symbol file, objcopy to a
raw image, and check the SHA-1 against the retail target. Prints
"build/USA/out/SLUS_011.93: OK" on success.

DW2 has no overlay model, so this replaces the PE2 ninja pipeline for now.
"""
import argparse
import hashlib
import os
import platform
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

CONFIG = {
    "target": "dumps/disc/SLUS_011.93",
    "target_sha1": "e55ed5bf354def07f0cbf4e1fb7fb5f99204f220",
    "asm_dir": "asm/USA",
    "src_dir": "src",
    "ld_script": "linkers/USA/main.ld",
    "sym_script": "linkers/USA/undefined_syms_auto.main.txt",
    "build_dir": "build/USA",
    "elf": "build/USA/main.elf",
    "out": "build/USA/out/SLUS_011.93",
    "include": "include",
}

# Flags for hand-written asm TUs (data/rodata/header). These are already final
# machine asm; -O0 keeps as from reordering.
AS_FLAGS = [
    "-EL", "-march=r3000", "-mtune=r3000",
    "-no-pad-sections", "-O0", "-G0",
]

# Flags for the C pipeline, minus the scratch-only -DNON_MATCHING / -DSKIP_ASM
# (we want the INCLUDE_ASM stubs to actually pull their nonmatchings in) and the
# scoring-only -fverbose-asm / -dp comment annotations.
CPP_FLAGS = [
    "-E", "-P", "-undef", "-nostdinc",
    "-D_LANGUAGE_C", "-DVER_USA",
    "-I", "include", "-I", "build/USA",
]
CC1_FLAGS = [
    "-O2", "-mips1", "-mcpu=3000", "-w",
    "-funsigned-char", "-fpeephole", "-ffunction-cse",
    "-fpcc-struct-return", "-fcommon",
    "-msoft-float", "-mgas", "-fgnu-linker",
    "-gcoff", "-G0", "-quiet",
]
MASPSX_FLAGS = ["--aspsx-version=2.77", "--run-assembler", "--expand-div"]
# as flags maspsx forwards to the assembler when it runs it.
MASPSX_AS_FLAGS = [
    "-EL", "-march=r3000", "-mtune=r3000",
    "-no-pad-sections", "-G0", "-I", "include",
]


def binutils_dir():
    env = os.environ.get("DW2_BINUTILS")
    if env:
        return env
    system = platform.system()
    if system == "Windows":
        return os.path.join(ROOT, "tools", "windows", "binutils")
    if system == "Darwin":
        return os.path.join(ROOT, "tools", "macos", "binutils")
    return os.path.join(ROOT, "tools", "linux", "binutils")


def tool(name):
    d = binutils_dir()
    exe = os.path.join(d, "mips-linux-gnu-%s.exe" % name)
    if not os.path.exists(exe):
        exe = os.path.join(d, "mips-linux-gnu-%s" % name)
    return exe


def cpp_bin():
    env = os.environ.get("DW2_CPP")
    if env:
        return env
    if platform.system() == "Windows":
        return os.path.join(ROOT, "tools", "windows", "gcc-win", "bin", "gcc.exe")
    return "cpp"


def cc1_bin():
    env = os.environ.get("DW2_CC1")
    if env:
        return env
    if platform.system() == "Windows":
        return os.path.join(ROOT, "tools", "windows", "gcc-psx", "CC1PSX.EXE")
    return os.path.join(ROOT, "tools", "linux", "gcc-2.8.1-psx", "cc1")


def maspsx_py():
    return os.path.join(ROOT, "tools", "maspsx", "maspsx.py")


def run(cmd, stdin_devnull=False):
    kwargs = dict(cwd=ROOT, capture_output=True, text=True)
    if stdin_devnull:
        kwargs["stdin"] = subprocess.DEVNULL
    r = subprocess.run(cmd, **kwargs)
    if r.returncode != 0:
        sys.stderr.write(" ".join(cmd) + "\n")
        sys.stderr.write(r.stdout)
        sys.stderr.write(r.stderr)
    return r.returncode


def sha1(path):
    h = hashlib.sha1()
    with open(path, "rb") as f:
        for block in iter(lambda: f.read(1 << 16), b""):
            h.update(block)
    return h.hexdigest()


def obj_for(src):
    """build/USA/<relpath of src under ROOT>.o"""
    rel = os.path.relpath(src, ROOT)
    obj = os.path.join(ROOT, CONFIG["build_dir"], rel + ".o")
    os.makedirs(os.path.dirname(obj), exist_ok=True)
    return obj


def assemble_asm(as_bin):
    """Assemble every .s under asm/USA except the per-function nonmatchings/
    (those are pulled in by the C files' INCLUDE_ASM stubs)."""
    asm_root = os.path.join(ROOT, CONFIG["asm_dir"])
    count = 0
    for dirpath, _dirs, files in os.walk(asm_root):
        if "nonmatchings" in dirpath.replace("\\", "/").split("/"):
            continue
        for name in files:
            if not name.endswith(".s"):
                continue
            src = os.path.join(dirpath, name)
            obj = obj_for(src)
            cmd = [as_bin] + AS_FLAGS + ["-I", CONFIG["include"], "-o", obj, src]
            if run(cmd) != 0:
                print("BUILD FAILED: assembling %s" % os.path.relpath(src, ROOT))
                return -1
            count += 1
    return count


def compile_c(cpp, cc1, as_bin, skip_asm=False):
    """Preprocess + cc1 + maspsx(->as) every .c under src/.

    skip_asm defines SKIP_ASM so INCLUDE_ASM stubs expand to nothing (see
    include/include_asm.h): the object then holds only the hand-decompiled C
    functions -- this is the objdiff "current" object, whose matched functions
    are all that differ from the full "target" object built without it."""
    cpp_flags = CPP_FLAGS + (["-DSKIP_ASM"] if skip_asm else [])
    src_root = os.path.join(ROOT, CONFIG["src_dir"])
    if not os.path.isdir(src_root):
        return 0
    count = 0
    for dirpath, _dirs, files in os.walk(src_root):
        for name in files:
            if not name.endswith(".c"):
                continue
            src = os.path.join(dirpath, name)
            obj = obj_for(src)
            stem = obj[:-2]  # drop trailing ".o"
            i_file = stem + ".i"
            s_file = stem + ".s"

            if run([cpp] + cpp_flags + ["-o", i_file, src]) != 0:
                print("BUILD FAILED: preprocessing %s" % os.path.relpath(src, ROOT))
                return -1
            if run([cc1] + CC1_FLAGS + ["-o", s_file, i_file]) != 0:
                print("BUILD FAILED: cc1 %s" % os.path.relpath(src, ROOT))
                return -1
            cmd = [sys.executable, maspsx_py()] + MASPSX_FLAGS + [
                "--gnu-as-path=%s" % as_bin,
            ] + MASPSX_AS_FLAGS + ["-o", obj, s_file]
            if run(cmd, stdin_devnull=True) != 0:
                print("BUILD FAILED: maspsx/as %s" % os.path.relpath(src, ROOT))
                return -1
            count += 1
    return count


def main():
    ap = argparse.ArgumentParser(description="Build/verify DW2 SLUS_011.93.")
    ap.add_argument("--skip-asm", action="store_true",
                    help="define SKIP_ASM: drop INCLUDE_ASM stubs (objdiff base object)")
    ap.add_argument("--objects-only", action="store_true",
                    help="assemble/compile objects but do not link/objcopy/verify")
    ap.add_argument("--skip-verify", action="store_true",
                    help="link + objcopy but do not SHA-1 check against the retail exe "
                         "(the retail exe is not present in CI)")
    args = ap.parse_args()

    as_bin = tool("as")
    ld_bin = tool("ld")
    objcopy_bin = tool("objcopy")

    needed = [("as", as_bin)]
    if not args.objects_only:
        needed += [("ld", ld_bin), ("objcopy", objcopy_bin)]
    for name, path in needed:
        if not os.path.exists(path):
            print("BUILD FAILED: mips-linux-gnu-%s not found at %s" % (name, path))
            print("Set DW2_BINUTILS to a directory holding the mips binutils.")
            return 1

    cpp, cc1 = cpp_bin(), cc1_bin()
    for name, path in (("cpp", cpp), ("cc1", cc1)):
        if os.path.sep in path and not os.path.exists(path):
            print("BUILD FAILED: %s not found at %s" % (name, path))
            print("Set DW2_CPP / DW2_CC1 to override.")
            return 1

    # maspsx passes an absolute --gnu-as-path to subprocess.Popen; a relative
    # one fails to launch under Windows CreateProcess.
    as_abs = os.path.abspath(as_bin)

    n_asm = assemble_asm(as_bin)
    if n_asm < 0:
        return 1
    n_c = compile_c(cpp, cc1, as_abs, skip_asm=args.skip_asm)
    if n_c < 0:
        return 1
    if n_asm == 0 and n_c == 0:
        print("BUILD FAILED: no .s or .c sources found")
        return 1

    if args.objects_only:
        print("objects built (asm=%d, c=%d)" % (n_asm, n_c))
        return 0

    # Link: symbol script first so the auto hardware/kernel syms resolve.
    os.makedirs(os.path.join(ROOT, CONFIG["build_dir"]), exist_ok=True)
    cmd = [
        ld_bin, "-EL",
        "-T", CONFIG["sym_script"],
        "-T", CONFIG["ld_script"],
        "-Map", os.path.join(CONFIG["build_dir"], "main.map"),
        "-o", CONFIG["elf"],
        "--no-check-sections",
    ]
    if run(cmd) != 0:
        print("BUILD FAILED: linking")
        return 1

    # Objcopy to a raw image.
    os.makedirs(os.path.join(ROOT, os.path.dirname(CONFIG["out"])), exist_ok=True)
    if run([objcopy_bin, "-O", "binary", CONFIG["elf"], CONFIG["out"]]) != 0:
        print("BUILD FAILED: objcopy")
        return 1

    if args.skip_verify:
        print("%s: built (verify skipped)" % CONFIG["out"])
        return 0

    # Verify against the retail target.
    got = sha1(os.path.join(ROOT, CONFIG["out"]))
    want = CONFIG["target_sha1"]
    if got != want:
        target = os.path.join(ROOT, CONFIG["target"])
        target_sha = sha1(target) if os.path.exists(target) else "(target missing)"
        print("%s: MISMATCH" % CONFIG["out"])
        print("  built  %s" % got)
        print("  want   %s" % want)
        print("  target %s" % target_sha)
        return 1

    print("%s: OK" % CONFIG["out"])
    return 0


if __name__ == "__main__":
    sys.exit(main())
