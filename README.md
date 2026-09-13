# Digimon World 2 (PS1, USA) — matching decompilation

A work-in-progress matching decompilation of **Digimon World 2** (`SLUS-01193`).
The goal is C source that recompiles to a byte-identical retail executable
(`SLUS_011.93`), then a moddable full-source tree.

**This repository contains no ROMs, disc images, or copyrighted game assets.** Everything
under `rom/ assets/ asm/ linkers/ build/` is regenerated from *your own* disc and is
gitignored. You must supply your own Digimon World 2 (SLUS-01193) disc.

## Status

Bootstrapping (Phase 0). Toolchain, matching workflow, and the GCC-codegen knowledge base
are ported from the Parasite Eve 2 decomp. The DW2 split, build, and symbol map are not
built yet. See `PLAN.md` and `DW2_NOTES.md`.

## Layout

| Path | What |
|------|------|
| `CLAUDE.md` | workflow + code standards for Claude Code / contributors |
| `PLAN.md` / `PROGRESS.md` | roadmap and per-unit tracker |
| `DW2_NOTES.md` | disc facts, boot exe, compiler notes, external references |
| `DECOMPILATION_LEARNINGS.md` | project journal — GCC 2.x codegen findings (grows per match) |
| `CODEGEN_MODEL.md` / `COMPILER_ANALYSIS.md` | compiler model + how it was pinned |
| `tools/` | gcc-psx, maspsx, m2c, decomp-permuter, asm-differ, mkpsxiso, match scripts |
| `configs/` | splat config + symbol maps (Phase 0) |

## Quick start (once Phase 0 is done)

```
python3 -m venv venv && source venv/bin/activate   # (venv/ on Windows)
pip install -r requirements.txt
python3 ninja_config.py         # split + generate build
./tools/build-and-verify.sh     # expect: build/USA/out/SLUS_011.93: OK
```

## Credits

Workflow, toolchain, and codegen knowledge base derived from the Parasite Eve 2 decomp.
DW2 file-format documentation by RmBeastbow (see `DW2_NOTES.md`).
