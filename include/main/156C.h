#ifndef MAIN_156C_H
#define MAIN_156C_H

#include "common.h"

/* The struct reached through Actor.work (offset 0x2C). Field names are by byte
 * offset until the layout is understood; pads keep the known fields aligned.
 * Extend as more accessors are matched. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    u8 _pad08[0x28];
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

/* Global object pointer D_80048F08 with a method pointer at 0x38. */
typedef struct {
    u8 _pad00[0x38];
    /* 0x38 */ s32 (*fn)(void);
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

/* Element of the D_8005CD60 array (stride 0x20), indexed by func_8001CA28. */
typedef struct {
    u8 data[0x20];
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

/* The struct reached through Actor at offset 0x3C. Only the fields written by
 * func_8001F24C are known so far. */
typedef struct {
    u8 _pad00[0x48];
    /* 0x48 */ s32 field_48;
    /* 0x4C */ s32 field_4C;
    /* 0x50 */ s32 field_50;
    /* 0x54 */ s32 field_54;
    /* 0x58 */ s32 field_58;
    /* 0x5C */ s32 field_5C;
    /* 0x60 */ s32 field_60;
} Sub3C;

/* arg0 of the 0x2C accessor family: a container holding a pointer to its
 * ActorWork at offset 0x2C. */
typedef struct {
    u8 _pad00[0x03];
    /* 0x03 */ u8 field_3;
    u8 _pad04[0x03];
    /* 0x07 */ u8 field_7;
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
    u8 _pad30[0x06];
    /* 0x36 */ u8 field_36;
    /* 0x37 */ u8 field_37;
    /* 0x38 */ u8 field_38;
    u8 _pad39[0x03];
    /* 0x3C */ Sub3C *field_3C;
    u8 _pad40[0x08];
    /* 0x48 */ u8 field_48;
    u8 _pad49[0x5B];
    /* 0xA4 */ u8 field_A4;
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

/* Entry returned by the func_8001E4CC table lookup (0x2C stride). */
typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ s16 field_2;
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
} Pt8228C;

/* Integer stack: [0] is the count, entries follow. func_8001A8F4 pushes,
   func_8001A920 pops. */
typedef struct {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 data[1];
} Stack54CD0;

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

/* Table cleared by func_80011190: a count word followed by 100 entries. */
typedef struct {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 entries[100];
} List50798;

/* Argument to func_80025FBC (byte/half fields deep in a large record). */
typedef struct {
    u8 _pad0[0xE3];
    /* 0xE3 */ u8 field_E3;
    u8 _pad1[0x5];
    /* 0xE9 */ u8 field_E9;
    u8 _pad2[0x2];
    /* 0xEC */ u16 field_EC;
} Obj25FBC;

#endif /* MAIN_156C_H */
