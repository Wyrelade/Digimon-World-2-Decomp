# Digimon World 2 (PS1, USA): matching decompilation

A work-in-progress matching decompilation of **Digimon World 2** (`SLUS-01193`).
The goal is C source that recompiles to a byte-identical retail executable
(`SLUS_011.93`), then a moddable full-source tree.

**This repository contains no ROMs, disc images, or copyrighted game assets.** Everything
under `rom/ assets/ asm/ linkers/ build/` is regenerated from *your own* disc and is
gitignored. You must supply your own Digimon World 2 (SLUS-01193) disc.

## Status

Phase 0 build is green. The unmodified split relinks byte-identical to the retail executable
(`SLUS_011.93`, SHA-1 `e55ed5bf354def07f0cbf4e1fb7fb5f99204f220`) at 100% `INCLUDE_ASM`. DW2
is a single main exe with no overlays. Next up is boundary refinement and converting the text
subsegment to per-function C stubs so matching can begin. See `PLAN.md` and `PROGRESS.md`.

## Layout

| Path | What |
|------|------|
| `CLAUDE.md` | workflow and code standards for contributors |
| `PLAN.md` / `PROGRESS.md` | roadmap and per-unit tracker |
| `DW2_NOTES.md` | disc facts, boot exe, compiler notes, external references |
| `DECOMPILATION_LEARNINGS.md` | project journal, GCC 2.x codegen findings (grows per match) |
| `CODEGEN_MODEL.md` / `COMPILER_ANALYSIS.md` | compiler model and how it was pinned |
| `tools/` | gcc-psx, maspsx, m2c, decomp-permuter, asm-differ, mkpsxiso, match scripts |
| `configs/` | splat config + symbol maps (Phase 0) |

## Quick start

Supply your own Digimon World 2 (SLUS-01193) disc and extract `SLUS_011.93` to
`dumps/disc/`. Then:

```
python3 -m venv venv                               # venv\Scripts on Windows
pip install -r requirements.txt
python3 -m splat split configs/USA/SLUS_011.93.yaml # regenerate asm/ and linkers/
python3 tools/build_dw2.py                          # expect: build/USA/out/SLUS_011.93: OK
```

`tools/build_dw2.py` assembles the split, links it with the splat linker script plus the
auto-detected hardware and kernel symbols, then checks the SHA-1 against your disc's exe.

## Credits

Workflow, toolchain, and codegen knowledge base derived from the Parasite Eve 2 decomp.
DW2 file-format documentation by RmBeastbow (see `DW2_NOTES.md`).
