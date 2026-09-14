#!/usr/bin/env python3
"""Generate objdiff.json for the DW2 decomp.dev progress report.

Pairs each TARGET object under expected/USA/src (full build, INCLUDE_ASM pulled,
byte-identical to retail) with its BASE object under build/USA/src (built with
--skip-asm, so only the hand-decompiled C functions are present). objdiff-cli
diffs them per function symbol: matched functions are identical in both, the
rest exist only in the target and count as not-yet-decompiled.

Both objects are pre-built by the workflow, so build_base/build_target are false.
"""
import json
import os

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
EXPECTED = os.path.join(ROOT, "expected", "USA", "src")
BUILD = os.path.join(ROOT, "build", "USA", "src")

CATEGORY = {"id": "main", "name": "Main Executable (SLUS_011.93)"}


def main():
    units = []
    for dirpath, _dirs, files in os.walk(EXPECTED):
        for name in sorted(files):
            if not name.endswith(".c.o"):
                continue
            target = os.path.join(dirpath, name)
            rel = os.path.relpath(target, EXPECTED).replace("\\", "/")  # main/156C.c.o
            base = os.path.join(BUILD, rel)
            unit_name = rel[:-4]          # main/156C
            source_path = "src/" + rel[:-2]  # src/main/156C.c
            units.append({
                "name": unit_name,
                "target_path": os.path.relpath(target, ROOT).replace("\\", "/"),
                "base_path": os.path.relpath(base, ROOT).replace("\\", "/"),
                "metadata": {
                    "progress_categories": [CATEGORY["id"]],
                    "source_path": source_path,
                },
            })
    if not units:
        raise SystemExit("no target objects under expected/USA/src (build target first)")
    config = {
        "build_target": False,
        "build_base": False,
        "units": units,
        "progress_categories": [CATEGORY],
    }
    out = os.path.join(ROOT, "objdiff.json")
    with open(out, "w") as f:
        json.dump(config, f, indent=2)
    print("wrote %s (%d unit(s))" % (out, len(units)))


if __name__ == "__main__":
    main()
