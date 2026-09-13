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
    u8 _pad32[0x32];
    /* 0x64 */ s16 field_64;
    u8 _pad66[0x06];
    /* 0x6C */ s16 field_6C;
    u8 _pad6E[0x36];
    /* 0xA4 */ s16 field_A4;
} ActorWork;

/* arg0 of the 0x2C accessor family: a container holding a pointer to its
 * ActorWork at offset 0x2C. */
typedef struct {
    u8 _pad00[0x2C];
    /* 0x2C */ ActorWork *work;
    u8 _pad30[0x06];
    /* 0x36 */ u8 field_36;
    /* 0x37 */ u8 field_37;
} Actor;

#endif /* MAIN_156C_H */
