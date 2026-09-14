#ifndef MAIN_156C_H
#define MAIN_156C_H

#include "common.h"

/* The struct reached through Actor.work (offset 0x2C). Field names are by byte
 * offset until the layout is understood; pads keep the known fields aligned.
 * Extend as more accessors are matched. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    u8 _pad0C[0x08];
    /* 0x14 */ u16 field_14;
    u8 _pad16[0x02];
    /* 0x18 */ s32 field_18;
    u8 _pad1C[0x14];
    /* 0x30 */ s16 field_30;
    u8 _pad32[0x06];
    /* 0x38 */ s16 field_38;
    u8 _pad3A[0x02];
    /* 0x3C */ s16 field_3C;
    u8 _pad3E[0x26];
    /* 0x64 */ s16 field_64;
    u8 _pad66[0x06];
    /* 0x6C */ s16 field_6C;
    u8 _pad6E[0x36];
    /* 0xA4 */ s16 field_A4;
} ActorWork;

/* Global struct D_80041564; only field_0 and field_8 are known so far. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
} Obj80041564;

/* Global object pointer D_80048F08 with method pointers at 0x38 / 0x3C. */
typedef struct {
    u8 _pad00[0x38];
    /* 0x38 */ s32 (*fn)(void);
    /* 0x3C */ void (*fn_3C)(void *);
} Obj48F08;

/* Record returned by the func_80023AE8 lookup; cleared by func_80023BB0. */
typedef struct {
    /* 0x00 */ u16 field_0;
    /* 0x02 */ u16 field_2;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
} Ent23AE8;

Ent23AE8 *func_80023AE8();

/* Global struct D_8005D560; field_0 is an id, 4/8/C hold results (func_8001E480). */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
} S5D560;

/* Record cleared by func_800230DC. */
typedef struct {
    u8 _pad00[0x04];
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ u8 field_14;
    /* 0x15 */ u8 field_15;
} Rec230DC;

/* Global struct D_80050938 populated by func_80011510. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
} Blk50938;

/* Element of the D_8005CD60 array (stride 0x20), indexed by func_8001CA28 and
   initialized by func_8001CA3C. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s16 field_10;
    u8 _pad12[2];
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
} Elem20;

/* A 0x1C-byte (7 word) block copied wholesale into ActorWork by func_80024310. */
typedef struct {
    s32 words[7];
} Block1C;

/* A 12-byte element in the array at offset 0x6C of the buffer that Ctx38.buf
 * points to; func_80020EE8 zeroes one. */
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ s32 field_4;
    /* 0x8 */ s32 field_8;
} Elem12;

/* The buffer reached through Ctx38.buf (offset 0x38): an Elem12 array at 0x6C. */
typedef struct {
    u8 _pad00[0x6C];
    /* 0x6C */ Elem12 elems[1];
} Buf38;

/* Container whose field at 0x38 points to a Buf38. Distinct from Actor (whose
 * 0x38 is a byte), so kept as its own type. */
typedef struct {
    u8 _pad00[0x38];
    /* 0x38 */ Buf38 *buf;
} Ctx38;

/* View of Actor.work used by func_800176D8: a s16 counter at 0x19E indexing a
 * s16 array at 0x1A0, plus a stride-8 element array reached at offset 0x6C. */
typedef struct {
    u8 _pad0[0x02];
    /* 0x2 */ u8 field_2;
    u8 _pad3[0x05];
} WorkElem8; /* size 0x8 */

typedef struct {
    u8 _pad00[0x19E];
    /* 0x19E */ s16 field_19E;
    /* 0x1A0 */ s16 field_1A0[16];
} Work176D8;

/* A 0x20 block copied verbatim from the const table D_80043714. */
typedef struct {
    s32 w[8];
} Blk20; /* size 0x20 */

/* Stride-0x84 destination element func_8001F5E8 fills; the copied block lands
 * at offset 0x60. */
typedef struct {
    u8 _pad00[0x60];
    /* 0x60 */ Blk20 field_60;
    u8 _pad80[0x04];
} DstElem; /* size 0x84 */

/* The struct reached through Actor at offset 0x3C. Only the fields written by
 * func_8001F24C / func_8001F5E8 are known so far: field_8 is a signed count and
 * field_78 an array of DstElem. */
typedef struct {
    u8 _pad00[0x8];
    /* 0x08 */ s32 field_8;
    u8 _pad0C[0x30];
    /* 0x3C */ s32 field_3C;
    u8 _pad40[0x08];
    /* 0x48 */ s32 field_48;
    /* 0x4C */ s32 field_4C;
    /* 0x50 */ s32 field_50;
    /* 0x54 */ s32 field_54;
    /* 0x58 */ s32 field_58;
    /* 0x5C */ s32 field_5C;
    /* 0x60 */ s32 field_60;
    u8 _pad64[0x14];
    /* 0x78 */ DstElem *field_78;
} Sub3C;

/* Two of these live in Actor at 0x48 (stride 0x5C). func_8001C194 stamps the
 * four-byte header of each; field_0 is the pair earlier read as Actor.field_48
 * (element 0) and Actor.field_A4 (element 1). */
typedef struct {
    /* 0x0 */ u8 field_0;
    /* 0x1 */ u8 field_1;
    /* 0x2 */ u8 field_2;
    /* 0x3 */ u8 field_3;
    u8 _pad04[0x58];
} ActorSub5C; /* size 0x5C */

/* arg0 of the 0x2C accessor family: a container holding a pointer to its
 * ActorWork at offset 0x2C. */
typedef struct {
    /* 0x00 */ s32 field_0;
    u8 _pad04[0x04];
    /* 0x08 */ s32 field_8;
    u8 _pad0C[0x04];
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
    /* 0x20 */ s32 field_20;
    /* 0x24 */ u8 field_24;
    u8 _pad25[0x03];
    /* 0x28 */ s32 field_28;
    /* 0x2C */ ActorWork *work;
    u8 _pad30[0x04];
    /* 0x34 read as a word by func_8001A958, or as the two bytes 0x36/0x37 elsewhere. */
    union {
        /* 0x34 */ s32 field_34;
        struct {
            u8 _b34[0x02];
            /* 0x36 */ u8 field_36;
            /* 0x37 */ u8 field_37;
        } b;
    } u34;
    /* 0x38 */ u8 field_38;
    u8 _pad39[0x03];
    /* 0x3C */ Sub3C *field_3C;
    u8 _pad40[0x08];
    /* 0x48 */ ActorSub5C field_48[2];
} Actor;

/* Entry returned by the func_8001D8C4 table lookup (0x12 stride); accessed
 * fields only. */
typedef struct {
    u8 _pad00[0x02];
    /* 0x02 */ u8 field_2;
    /* 0x03 */ u8 field_3;
    union {
        /* 0x04 */ u8 field_4;
        /* 0x04 */ u16 field_4h;
    } u4;
} EntD8C4;

/* Record returned by func_8001DB18; func_8001DB68 unpacks it. field_0 is read as
   a word (nibble fields at bits 8-11 / 12-15) and as an s16 at 0x2; field_4 as a
   byte at 0x4, an s16 at 0x6, and a word (nibbles at bits 8-11 / 12-15). */
typedef struct {
    union {
        /* 0x00 */ s32 field_0;
        struct { u8 _b[2]; s16 field_2; } h;
    } u0;
    union {
        /* 0x04 */ u32 field_4;
        u8 field_4b;
        struct { u8 _b[2]; s16 field_6; } h;
    } u4;
    /* 0x08 */ u16 field_8;
    u8 _pad0A[0x8];
    /* 0x12 */ u8 field_12;
    u8 _pad13[0xB];
} Ent1DB18;

/* Stride-0x1E view of the Ent1DB18 array that func_8001DB68 walks (the record's
   s32 unions force C to size Ent1DB18 as 0x20, but the on-disc stride is 0x1E, so
   the copy loop indexes this 2-aligned row instead). */
typedef struct {
    u8 _pad00[0x08];
    /* 0x08 */ u16 field_8;
    u8 _pad0A[0x8];
    /* 0x12 */ u8 field_12;
    u8 _pad13[0xB];
} Row1DB18; /* 0x1E */

/* Record func_8001DB68 fills from an Ent1DB18. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ u16 field_1C[3];
    /* 0x22 */ u16 field_22[3];
} Out1DB68;

Ent1DB18 *func_8001DB18();

/* Entry returned by the func_8001E4CC table lookup (0x2C stride). */
typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ s16 field_2;
    /* 0x04 */ u8 field_4;
    u8 _pad05[0x0F];
    /* 0x14 */ s32 field_14[6];
} EntE4CC;

/* Entry returned by the func_8001E6A8 table lookup (0x28 stride). */
typedef struct {
    u8 _pad00[0x04];
    union {
        /* 0x04 */ u32 field_4;
        struct {
            u8 _b4[2];
            /* 0x06 */ s16 field_6;
        } h4;
    } u4;
    /* 0x08 */ s16 field8[11];
    /* 0x1E */ s16 field_1E;
    /* 0x20 */ s16 field_20;
} EntE6A8;

/* Packed record returned by the func_8001ED40 lookup. Several 32-bit words hold
 * bitfields read at multiple widths, so overlapping offsets use unions. */
typedef struct {
    union {
        /* 0x00 */ u32 field_0;
        struct {
            u8 _b0[2];
            /* 0x02 */ u16 field_2;
        } h0;
    } u0;
    /* 0x04 */ u8 field_4;
    u8 _pad05[0x03];
    /* 0x08 */ s16 field_8;
    u8 _pad0A[0x02];
    /* 0x0C */ s32 field_C;
    union {
        /* 0x10 */ u32 field_10;
        /* 0x10 */ u8 field_10b;
    } u10;
    /* 0x14 */ u32 field_14;
    /* 0x18 */ u32 field_18;
    /* 0x1C */ u32 field_1C;
    /* 0x20 */ u32 field_20;
    /* 0x24 */ u32 field_24;
    /* 0x28 */ u32 field_28;
} EntED40;

/* Record returned by the func_8001DFF4 lookup; two 32-bit words read at both
 * word and byte widths. */
typedef struct {
    union {
        /* 0x00 */ u32 field_0;
        struct {
            u8 _b0[2];
            /* 0x02 */ u8 field_2;
            /* 0x03 */ u8 field_3;
        } b0;
    } u0;
    union {
        /* 0x04 */ u32 field_4;
        struct {
            u8 _b4[3];
            /* 0x07 */ u8 field_7;
        } b4;
    } u4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
} EntDFF4;

EntD8C4 *func_8001D8C4();
EntE4CC *func_8001E4CC();
EntE6A8 *func_8001E6A8();
EntED40 *func_8001ED40();
EntDFF4 *func_8001DFF4();

/* Base record returned by the func_800239A0 lookup. Stride 0x28 when indexed. */
typedef struct {
    u8 _pad00[0x04];
    /* 0x04 */ u32 field_4;
    u8 _pad08[0x20];
} EntA0;

EntA0 *func_800239A0();
s32 func_80023A08();

/* Record returned by the func_80023A78 lookup. */
typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ s16 field_2;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
} Ent23A78;

Ent23A78 *func_80023A78();

/* 3-entry table at D_80054C48, stride 0x2C, searched by func_8001A300. */
typedef struct {
    u8 _pad0[4];
    /* 0x04 */ s32 field_4;
    u8 _pad8[0x24];
} Ent54C48; /* 0x2C */

/* Args to func_8002828C: a record it stamps (field_3/field_4/field_8) and a
   two-halfword source read for the func_80028884 call. */
typedef struct {
    u8 _pad0[3];
    /* 0x03 */ u8 field_3;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
} Obj8228C;

typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ s16 field_2;
    /* 0x04 */ u16 field_4;
    /* 0x06 */ u16 field_6;
} Pt8228C;

/* Integer stack: [0] is the count, entries follow. func_8001A8F4 pushes,
   func_8001A920 pops. */
typedef struct {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 data[1];
} Stack54CD0;

/* Global struct D_80048DB8: field_0 is a small state (func_80024220), field_4 a
   countdown and field_8 an advancing buffer pointer (func_8002405C; note the
   symbol D_80048DBC aliases field_4), field_1C a counter compared/bumped by
   func_80023FFC. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    u8 _padC[0x1C - 0xC];
    /* 0x1C */ s32 field_1C;
} Obj48DB8;

/* Source record read by func_80013470 to fill an Arg1BC24. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ u16 field_C;
    /* 0x0E */ u16 field_E;
    /* 0x10 */ u8 field_10;
    /* 0x11 */ u8 field_11;
} Src13470;

/* A pair of 16-bit values passed by value in one register (func_800134F8). */
typedef struct {
    /* 0x0 */ u16 lo;
    /* 0x2 */ u16 hi;
} Halves;

/* 0x2C-byte parameter block built on the stack and passed to func_8001BC24
   (only the leading fields are written; the tail is left uninitialized). */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s16 field_8;
    /* 0x0A */ s16 field_A;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
    /* 0x20 */ s32 field_20;
    u8 _pad24[0x8];
} Arg1BC24;

/* 0x10-stride record; D_800416CC array, per-slot init by func_8001F90C. */
typedef struct {
    u8 data[0x10];
} Blk16;

/* 0xC-stride record returned by the func_8001E5E8 getter (base is the
   func_800239A0((D_8005D560.field_0<<16)|1) lookup, index is EntE4CC.field_4). */
typedef struct {
    u8 data[0xC];
} Blk12;

/* 0x18-stride record; the func_8001E298 getter family returns &base[index] where
   base is the func_800239A0((D_8005D560.field_0<<16)|2) lookup result. */
typedef struct {
    u8 data[0x18];
} Blk18;

/* Argument to the func_8001E298 getter family: a byte index lives at one of several
   offsets (0x5/0x6/0xC) and selects a Blk18. */
typedef struct {
    u8 _pad0[5];
    /* 0x5 */ u8 field_5;
    /* 0x6 */ u8 field_6;
    u8 _pad7[5];
    /* 0xC */ u8 field_C;
} ArgE298;

/* Destination record for func_80033B24's bitfield unpack (all s16 fields). */
typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ s16 field_2;
    /* 0x04 */ s16 field_4;
    /* 0x06 */ s16 field_6;
    /* 0x08 */ s16 field_8;
    /* 0x0A */ s16 field_A;
    /* 0x0C */ s16 field_C;
    /* 0x0E */ s16 field_E;
    /* 0x10 */ s16 field_10;
} Out33B24;

/* Fixed-stride block indexed by func_8001C818 (element size 0x4030). */
typedef struct {
    u8 data[0x4030];
} Blk54CF8;

/* Element of the D_8005E620.elems[] array (stride 0x5C); only the leading
   status byte is touched by func_80022118. */
typedef struct {
    /* 0x00 */ u8 field_0;
    u8 _pad01[0x5B];
} ElmE620; /* size 0x5C */

/* Global at D_8005E620: a 0xE4-byte header followed by an array of 0x24
   ElmE620 slots (func_80022118 scans and updates their status bytes). */
typedef struct {
    u8 _pad00[0xE4];
    /* 0xE4 */ ElmE620 elems[0x24];
} EntE620;

/* Table cleared by func_80011190: a count word followed by 100 entries. */
typedef struct {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 entries[100];
} List50798;

/* Doubly-linked node reached at (arg0 - 0xC) by func_80022D84; field_0 is the
   sibling pointer, field_4 links to a neighbour whose field_0 points back. */
typedef struct Node22D84 {
    /* 0x00 */ struct Node22D84 *field_0;
    /* 0x04 */ struct Node22D84 *field_4;
    /* 0x08 */ s32 field_8;
} Node22D84;

/* arg0 of func_8002C0E4: three s32 accumulators at 0x14/0x18/0x1C. */
typedef struct {
    u8 _pad00[0x14];
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
} ObjC0E4;

/* arg1 of func_8002C0E4: &field_14 is handed to func_8002CF74. */
typedef struct {
    u8 _pad00[0x14];
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
} ArgC0E4;

/* Buffer allocated into a container's field_38 by func_80020C40 (0x90 bytes via
 * func_80022F3C); only the fields it stamps are known. */
typedef struct {
    u8 _pad00[0x30];
    /* 0x30 */ s32 field_30;
    /* 0x34 */ s32 field_34;
    /* 0x38 */ s32 field_38;
    u8 _pad3C[0x06];
    /* 0x42 */ s16 field_42;
    u8 _pad44[0x14];
    /* 0x58 */ s32 field_58;
    /* 0x5C */ s32 field_5C;
    /* 0x60 */ s32 field_60;
} AllocC40;

/* Container whose field_38 holds an AllocC40* (func_80020C40's arg0). */
typedef struct {
    u8 _pad00[0x38];
    /* 0x38 */ AllocC40 *field_38;
} ContC40;

/* Buffer allocated + registered by func_800111D4 (in the D_80050798 list) and
 * populated by func_800113B8; only the pointer/count fields it writes are known. */
typedef struct {
    u8 _pad00[0x2C];
    /* 0x2C */ s32 field_2C;
    /* 0x30 */ s32 field_30;
    /* 0x34 */ s32 field_34;
} Buf111D4;

/* Accumulate-and-clamp record used by func_80020CE8: field_0 += field_4, then
 * clamped against field_8. */
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ s32 field_4;
    /* 0x8 */ s32 field_8;
} Obj20CE8;

/* Argument to func_80025FBC (byte/half fields deep in a large record). */
typedef struct {
    u8 _pad0[0xE3];
    /* 0xE3 */ u8 field_E3;
    u8 _pad1[0x5];
    /* 0xE9 */ u8 field_E9;
    u8 _pad2[0x2];
    /* 0xEC */ u16 field_EC;
} Obj25FBC;

/* Stride-0x28 array element written by func_8001D550: a flag byte at 0xE plus
 * two words at 0x10/0x14; field_0 is the loop guard (zero terminates). */
typedef struct {
    /* 0x00 */ s32 field_0;
    u8 _pad04[0xE - 0x4];
    /* 0x0E */ s8 field_E;
    u8 _pad0F[0x1];
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    u8 _pad18[0x28 - 0x18];
} Ent1D550;

#endif /* MAIN_156C_H */
