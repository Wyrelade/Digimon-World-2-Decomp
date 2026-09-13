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
    /* 0x04 */ u8 field_4;
} EntD8C4;

/* Entry returned by the func_8001E4CC table lookup (0x2C stride). */
typedef struct {
    /* 0x00 */ s16 field_0;
    /* 0x02 */ s16 field_2;
} EntE4CC;

/* Entry returned by the func_8001E6A8 table lookup (0x28 stride). */
typedef struct {
    u8 _pad00[0x06];
    /* 0x06 */ s16 field_6;
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
} EntDFF4;

EntD8C4 *func_8001D8C4();
EntE4CC *func_8001E4CC();
EntE6A8 *func_8001E6A8();
EntED40 *func_8001ED40();
EntDFF4 *func_8001DFF4();

#endif /* MAIN_156C_H */
