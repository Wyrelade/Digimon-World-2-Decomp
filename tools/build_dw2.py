#!/usr/bin/env python3
"""Build and verify the DW2 USA executable (SLUS_011.93).

Single-exe relink: assemble every asm/USA/**/*.s, link with the splat linker
script plus the auto symbol file, objcopy to a raw image, and check the SHA-1
against the retail target. Prints "build/USA/out/SLUS_011.93: OK" on success.

DW2 has no overlay model, so this replaces the PE2 ninja pipeline for now.
"""
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
    "ld_script": "linkers/USA/main.ld",
    "sym_script": "linkers/USA/undefined_syms_auto.main.txt",
    "build_dir": "build/USA",
    "elf": "build/USA/main.elf",
    "out": "build/USA/out/SLUS_011.93",
    "include": "include",
}

AS_FLAGS = [
    "-EL", "-march=r3000", "-mtune=r3000",
    "-no-pad-sections", "-O0", "-G0",
]


def binutils_dir():
    # Explicit override wins (set DW2_BINUTILS to a dir holding
    # mips-linux-gnu-as/ld/objcopy). Otherwise fall back to the per-platform
    # vendored dir used by the local dev tree.
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


def run(cmd):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
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


def main():
    as_bin = tool("as")
    ld_bin = tool("ld")
    objcopy_bin = tool("objcopy")

    for name, path in (("as", as_bin), ("ld", ld_bin), ("objcopy", objcopy_bin)):
        if not os.path.exists(path):
            print("BUILD FAILED: mips-linux-gnu-%s not found at %s" % (name, path))
            print("Set DW2_BINUTILS to a directory holding the mips binutils.")
            return 1

    # Assemble every .s under asm/USA to build/USA/<relpath>.s.o.
    asm_root = os.path.join(ROOT, CONFIG["asm_dir"])
    count = 0
    for dirpath, _dirs, files in os.walk(asm_root):
        for name in files:
            if not name.endswith(".s"):
                continue
            src = os.path.join(dirpath, name)
            rel = os.path.relpath(src, ROOT)
            obj = os.path.join(ROOT, CONFIG["build_dir"], rel + ".o")
            os.makedirs(os.path.dirname(obj), exist_ok=True)
            cmd = [as_bin] + AS_FLAGS + ["-I", CONFIG["include"], "-o", obj, src]
            if run(cmd) != 0:
                print("BUILD FAILED: assembling %s" % rel)
                return 1
            count += 1
    if count == 0:
        print("BUILD FAILED: no .s files found under %s" % CONFIG["asm_dir"])
        return 1

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
