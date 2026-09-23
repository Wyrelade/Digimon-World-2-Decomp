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
    u8 _pad1C[0x0C];
    /* 0x28 */ s32 field_28;
    /* 0x2C */ s16 field_2C;
    u8 _pad2E[0x02];
    /* 0x30 */ s16 field_30;
    u8 _pad32[0x06];
    /* 0x38 */ s16 field_38;
    u8 _pad3A[0x02];
    /* 0x3C */ s16 field_3C;
    u8 _pad3E[0x02];
    /* 0x40 */ s32 field_40;
    u8 _pad44[0x20];
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
    u8 _pad00[0x08];
    /* 0x08 */ void (*fn_8)(s32, s32, s32, s32);
    u8 _pad0C[0x04];
    /* 0x10 */ void (*fn_10)(s32);
    /* 0x14 */ void (*fn_14)(u8 *, s32);
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
    /* 0x20 */ s32 field_20;
    u8 _pad24[0x14];
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
    u8 _pad00[0x34];
    /* 0x34 */ s32 field_34;
    u8 _pad38[0x04];
    /* 0x3C */ s32 field_3C;
    u8 _pad40[0x20];
    /* 0x60 */ Blk20 field_60;
    u8 _pad80[0x04];
} DstElem; /* size 0x84 */

/* Object reached through Actor at 0x38 (overlaps the u8 field_38); func_8001EC10
 * writes three words at 0x30/0x34/0x38. */
typedef struct {
    u8 _pad00[0x30];
    /* 0x30 */ s32 field_30;
    /* 0x34 */ s32 field_34;
    /* 0x38 */ s32 field_38;
} ObjEC10;

/* Three-word vector copied field-to-field by value in func_80020920. */
typedef struct {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
} Vec3;

/* Larger object reached through Actor at 0x38 (same slot as ObjEC10, used by
 * func_80020920): two Vec3s at 0x20/0x30 plus scalar state at 0x40..0x60. */
typedef struct {
    u8 _pad00[0x20];
    /* 0x20 */ Vec3 field_20;
    u8 _pad2C[0x04];
    /* 0x30 */ Vec3 field_30;
    u8 _pad3C[0x04];
    /* 0x40 */ s32 field_40;
    u8 _pad44[0x04];
    /* 0x48 */ s32 field_48;
    /* 0x4C */ s32 field_4C;
    /* 0x50 */ s32 field_50;
    u8 _pad54[0x04];
    /* 0x58 */ s32 field_58;
    /* 0x5C */ s32 field_5C;
    /* 0x60 */ s32 field_60;
} Obj209;

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

/* Sub-object reached through the Act125C container at 0x3C; func_8001125C frees
   the four owned pointers at 0x6C..0x78. */
typedef struct {
    u8 _pad00[0x6C];
    /* 0x6C */ ActorWork *field_6C;
    /* 0x70 */ ActorWork *field_70;
    /* 0x74 */ ActorWork *field_74;
    /* 0x78 */ ActorWork *field_78;
} Obj125C;

/* Container torn down by func_8001125C: a func_80010ED4 array at 0x34 with count
   at 0x30, plus owned pointers freed via func_80022D84. */
typedef struct {
    u8 _pad00[0x2C];
    /* 0x2C */ ActorWork *field_2C;
    /* 0x30 */ s32 field_30;
    /* 0x34 */ s32 *field_34;
    /* 0x38 */ ActorWork *field_38;
    /* 0x3C */ Obj125C *field_3C;
} Act125C;

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
    /* 0x38 read as a byte (field_38) or as an ObjEC10* (ptr38) by func_8001EC10. */
    union {
        /* 0x38 */ u8 field_38;
        ObjEC10 *ptr38;
    } u38;
    /* 0x3C */ Sub3C *field_3C;
    u8 _pad40[0x08];
    /* 0x48 */ ActorSub5C field_48[2];
} Actor;

/* Entry returned by the func_8001D8C4 table lookup (0x12 stride); accessed
 * fields only. */
typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ u8 field_2;
    /* 0x03 */ u8 field_3;
    union {
        /* 0x04 */ u8 field_4;
        /* 0x04 */ u16 field_4h;
    } u4;
    u8 _pad06[0x02];
    /* 0x08 */ u8 field_8[5];
    /* 0x0D */ u8 field_D[4];
    u8 _pad11;
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
    /* 0x22 */ s16 field_22;
    /* 0x24 */ s16 field_24;
    /* 0x26 */ s16 field_26;
} EntE6A8;

/* Packed record returned by the func_8001ED40 lookup. Several 32-bit words hold
 * bitfields read at multiple widths, so overlapping offsets use unions. */
typedef struct {
    union {
        /* 0x00 */ u32 field_0;
        /* 0x00 */ s16 id;
        struct {
            u8 _b0[2];
            /* 0x02 */ u16 field_2;
        } h0;
        struct {
            u8 _b0[3];
            /* 0x03 */ u8 field_3;
        } b0;
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
    u8 _pad2C[0x18];    /* -> size 0x44 (table stride) */
} EntED40;

/* Record returned by the func_8001DFF4 lookup; two 32-bit words read at both
 * word and byte widths. */
typedef struct {
    union {
        /* 0x00 */ u32 field_0;
        /* 0x00 */ s16 field_0h;
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

/* 6-byte record copied wholesale by func_8001E7E4 from a stride-6 table (base is
 * the func_800239A0 lookup, index is EntE6A8.field_22/24/26). 2-byte alignment
 * makes the copy an unaligned lwl/lwr word plus an lh half. */
typedef struct {
    /* 0x0 */ s16 data[3];
} Row6;
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
s32 func_8001EE34();

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
    u8 _padC[0x10 - 0xC];
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
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

/* Read view of the Arg1BC24 block used by func_8001BC24: same layout, but the
   0x8/0xA halfwords are read unsigned and 0x24/0x28 are read as words. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ u16 field_8;
    /* 0x0A */ u16 field_A;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
    /* 0x20 */ s32 field_20;
    /* 0x24 */ s32 field_24;
    /* 0x28 */ s32 field_28;
} SrcBC24;

/* Stride-0x34 record built by func_8001BC24 into the func_80011510 array. */
typedef struct {
    /* 0x00 */ u8 field_0;
    /* 0x01 */ u8 field_1;
    /* 0x02 */ u8 field_2;
    /* 0x03 */ u8 field_3;
    /* 0x04 */ u8 field_4;
    u8 _pad5;
    /* 0x06 */ s16 field_6;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s16 field_1C;
    /* 0x1E */ s16 field_1E;
    /* 0x20 */ u8 field_20;
    /* 0x21 */ u8 field_21;
    /* 0x22 */ u8 field_22;
    /* 0x23 */ u8 field_23;
    /* 0x24 */ u8 field_24;
    /* 0x25 */ u8 field_25;
    /* 0x26 */ u8 field_26;
    /* 0x27 */ u8 field_27;
    /* 0x28 */ u8 field_28;
    /* 0x29 */ u8 field_29;
    /* 0x2A */ u8 field_2A;
    /* 0x2B */ u8 field_2B;
    /* 0x2C */ u8 field_2C;
    /* 0x2D */ u8 field_2D;
    /* 0x2E */ u8 field_2E;
    /* 0x2F */ u8 field_2F;
    /* 0x30 */ u8 field_30;
    /* 0x31 */ u8 field_31;
    u8 _pad32[2];
} Rec34;

/* Returned by func_80011440/func_80011510: the stride-0x34 record array at 0x2C. */
typedef struct {
    u8 _pad00[0x2C];
    /* 0x2C */ Rec34 *field_2C;
} Ent11440;

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

/* Per-channel bucket built by func_800194C8: a count at +0, then a count-indexed
   array of s16 slots. Stride 0x1A; four channels live at Actor194C8.records. */
typedef struct {
    /* 0x00 */ s16 count;
    /* 0x02 */ s16 arr[12];
} Rec1A;

/* s16 held in a 4-byte stride slot (Actor194C8.slot54). */
typedef struct {
    /* 0x00 */ s16 v;
    /* 0x02 */ s16 pad;
} Slot4;

/* View of the Actor block touched by func_800194C8. */
typedef struct {
    u8 _pad00[0x54];
    /* 0x54 */ Slot4 slot54[4];
    /* 0x64 */ Blk12 block64[4]; /* the channel count is re-stored at +2 */
    /* 0x94 */ s32 field_94[4];
    u8 _padA4[0xAC - 0xA4];
    /* 0xAC */ Rec1A records[4];
    u8 _pad114[0x118 - 0x114];
    /* 0x118 */ u8 *field_118;
} Actor194C8;

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
    /* 0x0000 */ s32 field_0;
    u8 _pad4[0x402C];
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

/* arg1 of func_8002C0E4: a GTE-style MATRIX. func_8002C774 fills m[3][3] (a Z
 * rotation scaled to 0x1000) + the field_14/18/1C translation; &field_14 is
 * handed to func_8002CF74. */
typedef struct {
    /* 0x00 */ s16 m[3][3];
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
    /* 0x00 */ u32 field_0;
    u8 _pad04[0x20];
    /* 0x24 */ s32 field_24;
    u8 _pad28[0x04];
    /* 0x2C */ s32 field_2C;
    /* 0x30 */ s32 field_30;
    /* 0x34 */ s32 field_34;
} Buf111D4;

/* Object type descriptor from the D_80040D50[id >> 8][id & 0xFF] table
   (func_8001107C): optional init callback and the two buffer sizes. */
typedef struct {
    /* 0x00 */ void (*init)(Buf111D4 *, s32);
    u8 _pad04[0x0C];
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
} ObjDesc;

/* Accumulate-and-clamp record used by func_80020CE8: field_0 += field_4, then
 * clamped against field_8. */
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ s32 field_4;
    /* 0x8 */ s32 field_8;
} Obj20CE8;

/* Argument to func_80025FBC (byte/half fields deep in a large record). */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    u8 _pad0C[0x8];
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    u8 _pad1C[0x2A];
    /* 0x46 */ u8 field_46;
    /* 0x47 */ u8 field_47;
    u8 _pad48[0x1];
    /* 0x49 */ u8 field_49;
    u8 _pad4A[0x13];
    /* 0x5D */ u8 field_5D[6];
    u8 _pad63[0x80];
    /* 0xE3 */ u8 field_E3;
    /* 0xE4 */ u8 field_E4;
    u8 _padE5[0x1];
    /* 0xE6 */ u16 field_E6;
    u8 _padE8[0x1];
    /* 0xE9 */ u8 field_E9;
    /* 0xEA */ u8 field_EA;
    u8 _padEB[0x1];
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

/* func_8002329C source record (stride 0x18): field_0/field_4 feed func_80023270
 * bit tests, field_10 is copied out, field_C is cleared on the disabled path. */
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ s32 field_4;
    u8 _pad8[0x4];
    /* 0xC */ s32 field_C;
    /* 0x10 */ s32 field_10;
    u8 _pad14[0x4];
} Elm678; /* size 0x18 */

/* func_8002329C destination record (stride 0x40): 14 word slots filled from
 * func_80023270, three s16 copies at 0x38/0x3A/0x3C, and a flag at 0x3E. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 field_1C;
    /* 0x20 */ s32 field_20;
    /* 0x24 */ s32 field_24;
    /* 0x28 */ s32 field_28;
    /* 0x2C */ s32 field_2C;
    /* 0x30 */ s32 field_30;
    /* 0x34 */ s32 field_34;
    /* 0x38 */ s16 field_38;
    /* 0x3A */ s16 field_3A;
    /* 0x3C */ s16 field_3C;
    /* 0x3E */ s16 field_3E;
} Elm6F0; /* size 0x40 */

/* func_8002329C control record (stride 0x22): field_0 is an enable flag, the
 * high nibble of field_1 selects the active mode. */
typedef struct {
    /* 0x0 */ u8 field_0;
    /* 0x1 */ u8 field_1;
    u8 _pad2[0x20];
} Elm6A8; /* size 0x22 */

/* Command block D_80062C18 handed to func_8003B994: field_0 is the command
 * id, the remaining fields are its arguments. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s16 field_8;
    /* 0x0A */ s16 field_A;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
} Cmd62C18; /* size 0x14 */

void func_8003B994(Cmd62C18 *cmd);

/* By-value argument block of the func_80032954 handler table entries
 * (void handler(s16, s16, s16, HandlerArg)). It starts in $a3 and continues on
 * the caller's stack, so the callee homes $a3 to keep it contiguous. Only the
 * fields matched so far are named. */
typedef struct {
    /* 0x00 */ u8 field_0;
    u8 _pad01[0x05];
    /* 0x06 */ u8 field_6;
    /* 0x07 */ u8 field_7;
    u8 _pad08[0x01];
    /* 0x09 */ u8 field_9;
    /* 0x0A */ u8 field_A;
    u8 _pad0B[0x05];
    /* 0x10 */ u16 field_10;
    /* 0x12 */ u16 field_12;
    u8 _pad14[0x10];
    /* 0x24 */ s32 field_24;
} HandlerArg;

/* Element of the per-slot arrays D_80061C50[slot] (stride 0xB0), indexed
 * D_80061C50[a0][a1] by the func_80032954 handler table and func_800354F4. */
typedef struct {
    u8 *field_0;        /* 0x00 */
    u8 *volatile field_4; /* 0x04 */
    s32 field_8;        /* 0x08 */
    u8  _p0C[0x8];      /* 0x0C */
    u8  field_14;       /* 0x14 */
    u8  field_15;       /* 0x15 */
    u8  field_16;       /* 0x16 */
    u8  field_17;       /* 0x17 */
    u8  field_18;       /* 0x18 */
    u8  field_19;       /* 0x19 */
    u8  field_1A;       /* 0x1A */
    u8  field_1B;       /* 0x1B */
    u8  field_1C;       /* 0x1C */
    u8  field_1D;       /* 0x1D */
    u8  field_1E;       /* 0x1E */
    u8  field_1F;       /* 0x1F */
    u8  field_20;       /* 0x20 */
    u8  field_21;       /* 0x21 */
    u8  _p22[0x4];      /* 0x22 */
    u8  field_26;       /* 0x26 */
    u8  field_27[0x10]; /* 0x27 */
    u8  field_37[0x10]; /* 0x37 */
    u8  _p47[0xD];      /* 0x47 */
    s16 field_54;       /* 0x54 */
    s16 field_56;       /* 0x56 */
    u16 field_58;       /* 0x58 */
    u16 field_5A;       /* 0x5A */
    s16 field_5C;       /* 0x5C */
    s16 field_5E;       /* 0x5E */
    s16 field_60[0x10]; /* 0x60 */
    u8  _p80[0x4];      /* 0x80 */
    s32 field_84;       /* 0x84 */
    s32 field_88;       /* 0x88 */
    s32 field_8C;       /* 0x8C */
    s32 field_90;       /* 0x90 */
    s32 field_94;       /* 0x94 */
    s32 field_98;       /* 0x98 */
    u8  _p9C[0x14];     /* 0x9C -> size 0xB0 */
} Elm354F4;

/* Bit-flag block pointed to by D_8004FC68; D_8004FC70[] holds the masks
 * func_80035458 / func_80035488 set and clear in field_4. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
} Flags4FC68;

/* Callback table reached through D_8004FB80; the func_80030CD4..80030DF8
 * wrappers forward their arguments to one slot each. */
typedef struct {
    /* 0x00 */ void (*fn_0)();
    /* 0x04 */ void (*fn_4)();
    /* 0x08 */ void (*fn_8)();
    /* 0x0C */ void (*fn_C)();
    /* 0x10 */ void (*fn_10)();
    /* 0x14 */ void (*fn_14)();
    /* 0x18 */ void (*fn_18)();
} Vt4FB80;

/* Status block polled through D_80048E90 (func_80025C90 spins on bit 1 of
 * field_4). */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ volatile u16 field_4;
    u8 _pad06[0x4];
    /* 0x0A */ u16 field_A;
} Stat48E90;

/* Object reached through D_80050768; func_800143CC clears field_35C. */
typedef struct {
    u8 _pad000[0x108];
    /* 0x108 */ s16 field_108;
    /* 0x10A */ s16 field_10A;
    u8 _pad10C[0x250];
    /* 0x35C */ s16 field_35C;
} Obj50768;

/* Record initialised by func_8002AAB4 (four halfwords from the arguments, the
 * rest cleared). */
typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ s16 field_2;
    /* 0x04 */ s16 field_4;
    /* 0x06 */ s16 field_6;
    /* 0x08 */ s16 field_8;
    /* 0x0A */ s16 field_A;
    /* 0x0C */ s16 field_C;
    /* 0x0E */ s16 field_E;
    /* 0x10 */ u8 field_10;
    /* 0x11 */ u8 field_11;
    /* 0x12 */ u8 field_12;
    /* 0x13 */ u8 field_13;
} Rec2AAB4;

/* Element of D_800624E8[] (stride 0x38); func_800382D4 clears a slot. */
typedef struct {
    /* 0x00 */ s16 field_0;
    u8 _pad02[0x02];
    /* 0x04 */ s16 field_4;
    u8 _pad06[0x17];
    /* 0x1D */ u8 field_1D;
    u8 _pad1E[0x1A];
} Elm624E8; /* size 0x38 */

/* Hook pair at D_8004FC50; func_800352E4 calls the optional fn_4, then fn_0. */
typedef struct {
    /* 0x00 */ void (*fn_0)(void);
    /* 0x04 */ void (*fn_4)(void);
} Hooks4FC50;

/* Object passed to the D_80048E30 callback by func_800266D0; field_3C points at
 * a status byte cleared after the call. */
typedef struct {
    u8 _pad00[0x3C];
    /* 0x3C */ u8 *field_3C;
} Ent266D0;

/* Block reached through D_8005071C; func_80011F04 compacts the 12 slot bytes at
 * 0xBA9 (nonzero entries moved to the front, the rest cleared). */
typedef struct {
    u8 _pad000[0xBA9];
    /* 0xBA9 */ u8 field_BA9[12];
} Blk5071C;

/* Sound state block at D_80062D18 (splat splits it into small byte symbols);
 * func_80037BD0 indexes the D_80062D08 table with field_7 * 16 + field_C. */
typedef struct {
    u8 _pad0[0x7];
    /* 0x07 */ s8 field_7;
    u8 _pad8[0x4];
    /* 0x0C */ u8 field_C;
} Snd62D18;

/* 0x20-byte record in the table D_80062D08 points at. */
typedef struct {
    u8 _pad0[0x4];
    /* 0x04 */ u8 field_4;
    /* 0x05 */ u8 field_5;
    u8 _pad6[0x1A];
} Rec62D08;

/* Graphics-debug state at D_80048F10 (func_80027278 / func_80027388): debug
 * type 0x0, level 0x2, reverse 0x3, and the saved word at 0xC. */
typedef struct {
    /* 0x00 */ u8 field_0;
    /* 0x01 */ u8 field_1;
    /* 0x02 */ u8 field_2;
    /* 0x03 */ u8 field_3;
    /* 0x04 */ s16 field_4;
    /* 0x06 */ s16 field_6;
    u8 _pad08[0x4];
    /* 0x0C */ s32 field_C;
    /* 0x10 */ u8 field_10[0x5C];
    /* 0x6C */ u8 field_6C[0x14];
} Gpu48F10;

/* Two-word state func_8001291C copies into the head of an ActorWork. */
typedef struct {
    /* 0x0 */ s32 field_0;
    /* 0x4 */ s32 field_4;
} Pair1291C;

/* func_8002AB54 builds a GPU move-image packet (PsyQ SetDrawMove shape):
 * Rect2AB54 is the 16-bit source rectangle, DrMove2AB54 the tagged packet. */
typedef struct {
    /* 0x0 */ s16 x;
    /* 0x2 */ s16 y;
    /* 0x4 */ s16 w;
    /* 0x6 */ s16 h;
} Rect2AB54;
typedef struct {
    /* 0x00 */ u8 _pad00[3];
    /* 0x03 */ u8 len;
    /* 0x04 */ u32 code[5];
} DrMove2AB54;

/* Status words behind D_80048E8C; func_80025144 checks bit 0 of both. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
} Regs48E8C;

/* State block at D_80062F80 armed by func_8003E134 (field_0 = 2, arg in
 * field_10) before it pushes func_8003E19C as a state handler. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
} State62F80;

/* Stack command block passed to func_8003D124 (built by func_80034F64 /
 * 80035024 / 800356D4): field_0 is a command/flag word. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s16 field_4;
    /* 0x06 */ s16 field_6;
    u8 _pad08[0x0C];
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    u8 _pad1C[0x04];
    /* 0x20 */ s32 field_20;
    /* 0x24 */ s32 field_24;
} Cmd3D124;
void func_8003D124(Cmd3D124 *);

/* Record handed to func_80027A18: a count byte at 0x3 and the data it counts
 * from 0x4 (passed to D_80048F08->fn_14). */
typedef struct {
    u8 _pad00[0x03];
    /* 0x03 */ u8 field_3;
    /* 0x04 */ u8 field_4[1];
} Ent27A18;

/* Two-word header func_8003AD44 fills and publishes through D_8004FE90. */
typedef struct {
    /* 0x0 */ u32 field_0;
    /* 0x4 */ s32 field_4;
} Hdr3AD44;

/* (id, arg) pair; func_80022388 walks six of them, -1 id = unused slot. */
typedef struct {
    /* 0x0 */ s16 field_0;
    /* 0x2 */ s16 field_2;
} Pair22388;

/* State blocks reset by func_8002ADE4. */
typedef struct {
    /* 0x0 */ s16 field_0;
    /* 0x2 */ u8 field_2;
    /* 0x3 */ u8 field_3;
    /* 0x4 */ u8 field_4;
} St6191C;

typedef struct {
    /* 0x0 */ s16 field_0;
    /* 0x2 */ s16 field_2;
    u8 _pad04[0x08];
    /* 0xC */ u8 field_C;
    /* 0xD */ u8 field_D;
} St6196C;

/* Object whose handle array (count at 0x30, array at 0x34) func_80010E38
 * walks through func_80010F24. */
typedef struct {
    u8 _pad00[0x30];
    /* 0x30 */ s32 field_30;
    /* 0x34 */ s32 *field_34;
} Obj10E38;

/* 16-byte slot record in the D_80062CFC array. */
typedef struct {
    /* 0x0 */ u8 field_0;
    /* 0x1 */ u8 field_1;
    u8 _pad02[0x0E];
} Ent62CFC;

/* s16 pair at D_80061900 filled by func_8002B4C4 and handed to func_8002B1A4. */
typedef struct {
    /* 0x0 */ s16 field_0;
    /* 0x2 */ s16 field_2;
} Pair61900;

/* 16-bit rectangle func_800288A0 packs into a texture-window command. */
typedef struct {
    /* 0x0 */ s16 x;
    /* 0x2 */ s16 y;
    /* 0x4 */ s16 w;
    /* 0x6 */ s16 h;
} Rect288A0;

/* Grid menu: cursor at 0x54, dimensions at 0x58, 6-byte cells from 0x72
   (cell index = func_80013A70(cursor, dims)). */
typedef struct {
    /* 0x00 */ u16 field_0;
    u8 _pad02[0x04];
} GridCell;

typedef struct {
    u8 _pad00[0x54];
    /* 0x54 */ s16 field_54[2];
    /* 0x58 */ s16 field_58[2];
    u8 _pad5C[0x16];
    /* 0x72 */ GridCell field_72[16];
} GridMenu;

/* GPU drawing environment (libgpu DRAWENV layout, 0x1C head); filled by
   func_8002A9F4. */
typedef struct {
    /* 0x00 */ s16 clip_x;
    /* 0x02 */ s16 clip_y;
    /* 0x04 */ s16 clip_w;
    /* 0x06 */ s16 clip_h;
    /* 0x08 */ s16 ofs[2];
    /* 0x0C */ s16 tw_x;
    /* 0x0E */ s16 tw_y;
    /* 0x10 */ s16 tw_w;
    /* 0x12 */ s16 tw_h;
    /* 0x14 */ u16 tpage;
    /* 0x16 */ u8 dtd;
    /* 0x17 */ u8 dfe;
    /* 0x18 */ u8 isbg;
    /* 0x19 */ u8 r0;
    /* 0x1A */ u8 g0;
    /* 0x1B */ u8 b0;
    /* 0x1C */ u32 dr_env[16];
} DrawEnv;

#endif /* MAIN_156C_H */
