#include "common.h"
#include "main/156C.h"

extern Ent23A78 D_8005F8C8[0x50];
extern Ent54C48 D_80054C48[3];
extern s32 func_80024220();
extern void func_80023D68();
extern s32 D_8005F774;
extern u8 D_80048F12;
extern u8 D_8004E6E5;
extern u16 D_8004EAFA;
extern s32 D_800506B8;
extern S5D560 D_8005D560;
extern s32 D_8005F780;
extern s32 D_80062F80;
extern u8 D_8005F6A8[];
extern u8 D_800416FC[];
extern Obj48F08 *D_80048F08;
extern void (*D_80048F0C)(void *, void *);
extern u8 D_800102C0;
extern u8 D_80048F20[];
extern u8 D_80048F7C[];
extern Blk50938 D_80050938;
extern s32 D_80043794[];
extern Actor D_8005F770;
extern ActorWork *D_80041670[];
extern Elem20 D_8005CD60[];
extern Obj80041564 D_80041564;
extern u16 D_80041704[];
extern s32 D_80043794[];
extern u16 D_80047100[];
extern s32 *D_80049018;
extern s32 *D_8004901C;
extern s32 *D_80049020;
extern s32 *D_80049024;
extern u16 *D_8004FB88;
extern s32 D_80062FC4;
extern s32 D_8004FE5C;
extern s32 D_8004FBA0[];
extern Stack54CD0 D_80054CD0;
extern List50798 D_80050798;
extern Blk54CF8 D_80054CF8[];
extern void func_8002796C(Blk54CF8 *, s32);
extern s32 func_80026FC4(void);
extern void func_80026FD4(void);
extern s32 func_8003D9E4(void);
extern void func_80030CC4(s32);
extern s32 func_8001CDA8(void);
extern s32 func_80022E90(s32, s32);
extern void func_80023BB0(void);
extern void func_8001BB88(s32 *);
extern void func_80022D84(ActorWork *);
extern s32 D_8005F79C;
extern void func_8001FDBC(Actor *, s32);
extern void func_80020920(Actor *);
extern void func_800200D0(Actor *);
extern void func_80020510(Actor *, s32);
extern Obj48DB8 D_80048DB8;
extern u8 D_8005FDC8[];
extern s32 func_8002DD64(void *);
extern s32 func_80030914(void *, s32);
extern void func_8001F320(Actor *);
extern Blk16 D_800416CC[];
extern void func_8002B564(s32, Blk16 *);
extern void func_8002BB54(s32, s32, s32);
extern void func_8002BAD4(s32);
extern s32 func_8001E134(void);
extern u8 *func_80011F5C(void *);
extern s32 D_80040FD0[];
extern void func_8001D550(void *, s32, s32);
extern void func_8001D884(s32);
extern void func_8001BC24(void *, Arg1BC24 *);
extern void func_800221C4(s32, s32);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80010D6C);

void func_80010D74(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80010D7C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80010E38);

s32 func_80010EA4(void *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_80010F24(arg0);
}

void func_80010ED4(s32 *arg0) {
    if (*arg0 != 0) {
        func_800115C0(*arg0, 3);
        do {
            *arg0 = func_80010EA4(*arg0);
        } while (*arg0 != 0);
        *arg0 = 0;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80010F24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001107C);

void func_80011140(void) {
    func_80011544();
}

void func_80011160(void) {
}

void func_80011168(void) {
}

void func_80011170(Actor *arg0) {
    func_8001125C();
}

void func_80011190(void) {
    s16 i;
    for (i = 0; i < 100; i++) {
        D_80050798.entries[i] = 0;
    }
    D_80050798.count = 0;
}

Buf111D4 *func_800111D4(void) {
    Buf111D4 *s0 = (Buf111D4 *)func_80022F3C(0x40, 2);
    s32 i;
    func_80022F8C(s0, 0x40);
    for (i = 0; i < 0x64; i++) {
        if (D_80050798.entries[i] == 0) {
            D_80050798.entries[i] = (s32)s0;
            break;
        }
    }
    if (D_80050798.count < i + 1) {
        D_80050798.count = i + 1;
    }
    return s0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001125C);

Buf111D4 *func_800113B8(s32 a0, s32 a1) {
    Buf111D4 *s0 = func_800111D4();
    if (a0 != 0) {
        s32 x = func_80022F3C(a0, 2);
        s0->field_2C = x;
        func_80022F8C((void *)x, a0);
    }
    if (a1 != 0) {
        s32 y = func_80022F3C(a1, 2);
        s0->field_34 = y;
        func_80022F8C((void *)y, a1);
        s0->field_30 = a1 >> 2;
    }
    return s0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80011440);

void func_80011510(s32 arg0, s32 arg1, s32 arg2) {
    D_80050938.field_0 = arg0;
    D_80050938.field_4 = arg1;
    D_80050938.field_8 = arg2;
    D_80050938.field_C = 0;
    func_80011440();
}

void func_80011544(Actor *arg0) {
    arg0->field_20 = 0;
    arg0->field_1C = 0;
    arg0->field_18 = 0;
    arg0->field_14 = 0;
    arg0->field_10++;
}

void func_80011564(Actor *arg0) {
    arg0->field_20 = 0;
    arg0->field_1C = 0;
    arg0->field_18 = 0;
    arg0->field_14++;
}

void func_80011580(Actor *arg0) {
    arg0->field_20 = 0;
    arg0->field_1C = 0;
    arg0->field_18++;
}

void func_80011598(Actor *arg0) {
    arg0->field_20 = 0;
    arg0->field_1C++;
}

void func_800115AC(Actor *arg0) {
    arg0->field_20++;
}

void func_800115C0(Actor *arg0, u32 arg1) {
    arg0->field_10 = arg1 & 0xFF;
    arg0->field_20 = 0;
    arg0->field_1C = 0;
    arg0->field_18 = 0;
    arg0->field_14 = 0;
}

void func_800115DC(Actor *arg0, u32 arg1) {
    arg0->field_14 = arg1 & 0xFF;
    arg0->field_20 = 0;
    arg0->field_1C = 0;
    arg0->field_18 = 0;
}

void func_800115F4(Actor *arg0, u32 arg1, u32 arg2) {
    arg0->field_10 = arg1 & 0xFF;
    arg0->field_14 = arg2 & 0xFF;
    arg0->field_20 = 0;
    arg0->field_1C = 0;
    arg0->field_18 = 0;
}

void func_80011614(Actor *arg0, u32 arg1) {
    arg0->field_18 = arg1 & 0xFF;
    arg0->field_20 = 0;
    arg0->field_1C = 0;
}

void func_80011628(Actor *arg0, u32 arg1) {
    arg0->field_1C = arg1 & 0xFF;
    arg0->field_20 = 0;
}

void func_80011638(Actor *arg0, u32 arg1) {
    arg0->field_20 = arg1 & 0xFF;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80011644);

void func_800116A8(void) {
}

void func_800116B0(Actor *arg0, s32 *arg1) {
    ActorWork *w = arg0->work;
    w->field_0 = arg1[0];
    w->field_4 = arg1[1];
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800116CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80011854);

void func_80011B58(Actor *arg0, s32 arg1) {
    arg0->work->field_0 = arg1;
}

void func_80011B64(Actor *arg0) {
    ActorWork *w = arg0->work;
    if (arg0->field_10 == 0) {
        w->field_0 = func_8001CDA8();
        func_80011544(arg0);
    }
}

void func_80011BB0(Actor *arg0) {
    func_8001CE80(arg0->work->field_0);
    func_80011170(arg0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80011BEC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80011F04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80011F5C);

s32 func_80011FE4(void *arg0) {
    s32 r = 0;
    if (func_8001E134() != 0) {
        u8 *p = func_80011F5C(arg0);
        if (p != 0) {
            u8 b = *p;
            if (b != 0) {
                if (b < 5) {
                    r = 1;
                } else {
                    r = 2;
                }
            }
        }
    }
    return r;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001204C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001236C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80012490);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80012640);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80012778);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001287C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001291C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80012974);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001309C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013308);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013378);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013384);

void func_80013450(void) {
    func_8001125C();
}

void func_80013470(void *arg0, Src13470 *arg1) {
    Arg1BC24 local;
    local.field_14 = arg1->field_0;
    local.field_0 = arg1->field_10 >> 7;
    local.field_4 = arg1->field_11;
    local.field_8 = arg1->field_C;
    local.field_A = arg1->field_E;
    local.field_C = 0;
    local.field_10 = 0;
    local.field_18 = arg1->field_10 & 0x7F;
    local.field_1C = arg1->field_4;
    local.field_20 = arg1->field_8;
    func_8001BC24(arg0, &local);
}

void func_800134F8(void *arg0, s32 arg1, u32 arg2, Halves arg3) {
    Arg1BC24 local;
    local.field_0 = (arg2 >> 7) & 1;
    local.field_14 = arg1;
    local.field_4 = (arg2 >> 2) & 0xF;
    local.field_8 = arg3.lo;
    local.field_A = arg3.hi;
    local.field_C = 0;
    local.field_10 = 0;
    local.field_18 = arg2 & 3;
    func_8001BC24(arg0, &local);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013558);

void func_8001361C(s32 *a0, Halves *a1, s32 *a2, u32 a3) {
    while (*a2 != 0) {
        func_800134F8(a0, *a2, a3, *a1);
        a2++;
        a1++;
        a0++;
    }
}

s32 func_800136A4(void) {
    s32 result = func_8001BE08();
    if (result != 0) {
        result = func_80021E78(0x11) == 0 ? 1 : -1;
    }
    return result;
}

s32 func_800136E4(s32 arg0, s32 *arg1) {
    s32 v = *arg1 + 0x333;
    *arg1 = v;
    if (v >= 0x1000) {
        *arg1 = 0x1000;
        return 0;
    }
    return 1;
}

s32 func_80013714(s32 arg0, s32 *arg1) {
    s32 v = *arg1 - 0x333;
    *arg1 = v;
    if (v <= 0) {
        *arg1 = 0;
        return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001373C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800137B8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800137FC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013854);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800138C0);

void func_80013A10(s32 arg0, s32 arg1) {
    func_800138C0(arg0, arg1, 0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013A30);

s32 func_80013A70(s16 *arg0, s16 *arg1) {
    return arg1[1] * arg0[0] + arg0[1];
}

s32 func_80013A90(s16 *arg0, s16 *arg1) {
    return arg1[0] * arg0[1] + arg0[0];
}

s32 func_80013AB0(s32 arg0, s32 arg1) {
    s32 *p = (s32 *)func_800239A0(arg0);
    s32 r = func_80023A08(arg0 >> 16);
    return p[arg1] + r;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013AFC);

void func_80013BF8(Actor *arg0, s16 arg1) {
    arg0->work->field_30 = arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013C04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800141D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800143CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80014400);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80014870);

void func_80014978(Actor *arg0, s16 arg1) {
    arg0->work->field_6C = arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80014984);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80014CBC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80014EA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80014F78);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80015298);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800153F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800154F0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80015668);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80015770);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001588C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80015914);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80015D30);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80015F68);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80016198);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80016394);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800164AC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800166FC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80016834);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800168F0);

void func_800169D0(Actor *arg0, s16 arg1) {
    arg0->work->field_64 = arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800169DC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80016FDC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80017214);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800174F8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80017594);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800176D8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001777C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80017884);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80017944);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800179EC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80017D84);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80017F6C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80018048);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800188BC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80018BF8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80018D78);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80019214);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800194C8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80019614);

void func_800197FC(Actor *arg0, s16 arg1) {
    arg0->work->field_A4 = arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80019808);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80019BF4);

void func_80019E40(Actor *arg0, s32 *arg1) {
    arg0->work->field_0 = *arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80019E50);

void func_80019EE0(Actor *arg0, s32 arg1) {
    arg0->field_8 = arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80019EE8);

void func_80019FB4(Actor *arg0) {
    ActorWork *w = arg0->work;
    void *e = func_800239A0(D_80040FD0[arg0->field_8]);
    func_8001D550(e, 0x1000, *(s16 *)w);
    func_8001D884((s32)e);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A01C);

s32 func_8001A300(void) {
    s32 found = 0;
    s32 i = 0;
    Ent54C48 *p = D_80054C48;
    for (; i < 3; i++, p++) {
        if (p->field_4 != 0) found = 1;
        if (found) break;
    }
    return found;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A340);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A410);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A4A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A5F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A68C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A75C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A8BC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A8D0);

void func_8001A8F4(s32 arg0) {
    D_80054CD0.data[D_80054CD0.count] = arg0;
    D_80054CD0.count = D_80054CD0.count + 1;
}

s32 func_8001A920(void) {
    if (D_80054CD0.count == 0) {
        return 0;
    }
    D_80054CD0.count = D_80054CD0.count - 1;
    return D_80054CD0.data[D_80054CD0.count];
}

extern void func_8001CB80(s32);
extern void func_8001107C(s32, s32, s32);
extern s32 D_8005F788;

void func_8001A958(Actor *a0) {
    if (a0->field_10 != 0) {
        return;
    }
    func_8001CB80(0x13A0000);
    if ((D_8005F788 & 0xF00) != 0x500) {
        func_8001CB80(0x1100000);
        func_8001107C(0xA, a0->u34.field_34, 0);
    }
    func_80011544(a0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001A9C8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BB88);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BC24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BE08);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BE74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BEE8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BF58);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BFC8);

void func_8001C038(void *arg0, s32 arg1) {
    Arg1BC24 local;
    local.field_0 = 1;
    local.field_4 = 0;
    local.field_8 = 0;
    local.field_A = 0;
    local.field_C = 0;
    local.field_10 = 0;
    local.field_14 = arg1;
    local.field_18 = 1;
    func_8001BC24(arg0, &local);
    func_800221C4(0x10, 0);
}

void func_8001C088(s32 *arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        *arg0++ = -1;
    }
}

void func_8001C0B0(s32 *arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        func_8001BB88(arg0);
        arg0++;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001C104);

void func_8001C194(s32 a0, s32 a1, s32 a2) {
    s32 i;
    for (i = 0; i < 2; i++) {
        D_8005F770.field_48[i].field_0 = 1;
        D_8005F770.field_48[i].field_1 = a0;
        D_8005F770.field_48[i].field_2 = a1;
        D_8005F770.field_48[i].field_3 = a2;
    }
}

void func_8001C1CC(void) {
    D_8005F770.field_48[0].field_0 = 0;
    D_8005F770.field_48[1].field_0 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001C1E0);

void func_8001C4C8(s32 arg0) {
    D_80041564.field_8 = 0;
    D_80041564.field_0 = 2;
    D_80041564.field_4 = arg0;
    D_8005F780 = arg0 + 0xFF;
}

void func_8001C4F0(s32 arg0) {
    D_80041564.field_8 = 0;
    D_80041564.field_0 = 3;
    D_80041564.field_4 = arg0;
}

void func_8001C50C(s32 arg0) {
    D_80041564.field_8 = 1;
    D_80041564.field_0 = 2;
    D_80041564.field_4 = arg0;
    D_8005F780 = arg0 + 0xFF;
}

void func_8001C538(s32 arg0) {
    D_80041564.field_8 = 1;
    D_80041564.field_0 = 3;
    D_80041564.field_4 = arg0;
}

void func_8001C558(void) {
    D_80041564.field_8 = 0;
    D_80041564.field_0 = 0;
}

void func_8001C56C(void) {
    D_80041564.field_8 = 0;
    D_80041564.field_0 = 1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001C584);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001C760);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001C800);

void func_8001C818(s32 arg0) {
    func_8002796C(&D_80054CF8[arg0], 0x100C);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001C858);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001C898);

s32 func_8001C92C(void) {
    return 0;
}

void func_8001C934(void) {
    if (D_80041670[0] != 0) {
        func_80022D84(D_80041670[0]);
        D_80041670[0] = 0;
        func_80022D84(D_80041670[1]);
        D_80041670[1] = 0;
    }
    D_8005F79C = 0;
}

void func_8001C988(void) {
    D_8005F770.work = D_80041670[D_8005F770.field_28];
}

extern s32 func_80022F3C(s32, s32);

void func_8001C9B0(s32 a0) {
    D_80041670[2] = (ActorWork *)a0;
    D_80041670[0] = (ActorWork *)func_80022F3C(a0, 2);
    D_80041670[1] = (ActorWork *)func_80022F3C(a0, 2);
    D_8005F770.work = D_80041670[D_8005F770.field_28];
}

Elem20 *func_8001CA28(s32 arg0) {
    return &D_8005CD60[arg0];
}

void func_8001CA3C(void) {
    s32 i;
    for (i = 0; i < 0x40; i++) {
        D_8005CD60[i].field_18 = 0x3E0 - (i / 2) * 32;
        D_8005CD60[i].field_14 = i;
        D_8005CD60[i].field_1C = (i & 1) << 8;
        D_8005CD60[i].field_0 = 0;
        D_8005CD60[i].field_4 = 0;
        D_8005CD60[i].field_8 = 0;
        D_8005CD60[i].field_C = 0;
        D_8005CD60[i].field_10 = 0;
    }
}

s32 func_8001CAA0(void) {
    return func_800239A0()->field_4 & 7;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001CAC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001CB80);

void func_8001CD2C(s32 arg0) {
    s32 i;
    for (i = 0; i < 0x40; i++) {
        Elem20 *p = func_8001CA28(i);
        if (i >= arg0) {
            p->field_0 = -1;
        } else {
            if (p->field_0 == -1) p->field_0 = 0;
        }
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001CDA8);

void func_8001CE80(s32 *arg0) {
    if (*arg0 == -2) {
        *arg0 = 0;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001CE9C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D104);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D504);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D550);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D5B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D6B4);

void func_8001D884(s32 arg0) {
    func_8001D6B4(arg0, 1);
}

void func_8001D8A4(s32 arg0) {
    func_8001D6B4(arg0, 0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D8C4);

u8 func_8001D910(void) {
    return func_8001D8C4()->field_3;
}

u8 func_8001D934(void) {
    return func_8001D8C4()->u4.field_4 & 0xF;
}

s32 func_8001D958(void) {
    return (func_8001D8C4()->u4.field_4h >> 4) & 0xF;
}

s32 func_8001D980(void) {
    return (func_8001D8C4()->u4.field_4h >> 8) & 0xF;
}

u8 func_8001D9A8(void) {
    return func_8001D8C4()->field_2;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D9CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DA80);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DB18);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DB68);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DC24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DDA8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DFF4);

s32 func_8001E048(s32 arg0) {
    s32 base = func_80023A08(0x45E);
    return func_8001DFF4(arg0)->field_8 + base;
}

s32 func_8001E084(s32 arg0) {
    s32 base = func_80023A08(0x45E);
    return func_8001DFF4(arg0)->field_C + base;
}

u8 func_8001E0C0(void) {
    return func_8001DFF4()->u0.b0.field_2;
}

s32 func_8001E0E4(void) {
    return func_8001DFF4()->u0.b0.field_3 & 0xF;
}

s32 func_8001E108(void) {
    return func_8001DFF4() != 0 ? 0 : -1;
}

s32 func_8001E134(void) {
    return func_8001DFF4()->u0.field_0 >> 30;
}

s32 func_8001E158(void) {
    return (func_8001DFF4()->u0.field_0 >> 28) & 3;
}

s32 func_8001E180(void) {
    return func_8001DFF4()->u4.field_4 & 0xFFFFFF;
}

u8 func_8001E1AC(void) {
    return func_8001DFF4()->u4.b4.field_7;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E1D0);

s32 func_8001E22C(s32 a0) {
    s16 *p = (s16 *)func_800239A0(0x45E0000);
    s32 i;
    s32 r;
    for (i = 0; i < a0; i++) {
        if (*p == 0) break;
        p = (s16 *)((u8 *)p + 0x10);
    }
    r = 0;
    if (i == a0) {
        r = *p;
    }
    return r;
}

void func_8001E28C(s32 arg0) {
    D_8005D560.field_0 = arg0;
}

Blk18 *func_8001E298(ArgE298 *arg0) {
    Blk18 *base = (Blk18 *)func_800239A0((D_8005D560.field_0 << 16) | 2);
    return &base[arg0->field_5];
}

Blk18 *func_8001E2E0(ArgE298 *arg0, s32 arg1) {
    Blk18 *base = (Blk18 *)func_800239A0((D_8005D560.field_0 << 16) | 2);
    return &base[((ArgE298 *)((u8 *)arg0 + arg1))->field_6];
}

Blk18 *func_8001E338(ArgE298 *arg0, s32 arg1) {
    Blk18 *base = (Blk18 *)func_800239A0((D_8005D560.field_0 << 16) | 2);
    return &base[((ArgE298 *)((u8 *)arg0 + arg1))->field_C];
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E390);

void func_8001E480(void) {
    D_8005D560.field_4 = func_80023A08(D_8005D560.field_0);
    D_8005D560.field_C = func_800239A0(D_8005D560.field_0 << 16);
    D_8005D560.field_8 = 0;
    func_8001E390();
}

EntE4CC *func_8001E4CC(arg0)
s32 arg0;
{
    EntE4CC *base = (EntE4CC *)func_800239A0(D_8005D560.field_0 << 16);
    return &base[arg0];
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E514);

s32 func_8001E5C0(void) {
    return func_80023A08(D_8005D560.field_0);
}

Blk12 *func_8001E5E8(void) {
    EntE4CC *e = func_8001E4CC();
    Blk12 *base = (Blk12 *)func_800239A0((D_8005D560.field_0 << 16) | 1);
    return &base[e->field_4];
}

s16 func_8001E634(void) {
    return func_8001E4CC()->field_0;
}

s16 func_8001E658(void) {
    return func_8001E4CC()->field_2;
}

s32 func_8001E67C(s32 arg0) {
    if (arg0 < 0x12C) {
        return 0xCB9;
    }
    if ((u32)(arg0 - 0x190) < 0x65) {
        return 0xCBB;
    }
    return 0xCBA;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E6A8);

s16 func_8001E704(void) {
    return func_8001E6A8()->u4.h4.field_6;
}

s16 func_8001E728(s32 arg0, s32 arg1) {
    return func_8001E6A8(arg0)->field8[arg1];
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E758);

s16 func_8001E79C(void) {
    return func_8001E6A8()->field_1E;
}

s16 func_8001E7C0(void) {
    return func_8001E6A8()->field_20;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E7E4);

s32 func_8001E8D0(void) {
    return func_8001E6A8()->u4.field_4 & 1;
}

u16 func_8001E8F4(s32 idx) {
    EntA0 *p = func_800239A0(0x1F80000) + idx;
    return (p->field_4 >> 1) & 0x7FFF;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E938);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E984);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EB58);

void func_8001EC00(Actor *arg0, s32 *arg1) {
    arg0->work->field_0 = *arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EC10);

void func_8001ECE4(Actor *arg0) {
    if (arg0->work->field_4 != 0) {
        func_8001FDBC(arg0, 0x5B);
        func_80020920(arg0);
        func_800200D0(arg0);
        func_80020510(arg0, 1);
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001ED40);

s32 func_8001ED84(s32 arg0) {
    s32 base = func_80023A08(0x25B);
    EntED40 *p = func_8001ED40(arg0);
    if (p != 0) {
        return p->field_24 + base;
    }
    return 0;
}

s32 func_8001EDD4(s32 arg0) {
    s32 base = func_80023A08(0x25B);
    return func_8001ED40(arg0)->field_28 + base;
}

s32 func_8001EE10(void) {
    return func_8001ED40()->u0.h0.field_2 & 3;
}

s32 func_8001EE34(void) {
    return (func_8001ED40()->u0.field_0 >> 18) & 3;
}

s32 func_8001EE5C(void) {
    return func_8001ED40()->field_C;
}

u8 func_8001EE80(void) {
    return func_8001ED40()->field_4;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EEA4);

s32 func_8001EF3C(void) {
    return (func_8001ED40()->u0.field_0 >> 20) & 0xF;
}

s16 func_8001EF64(void) {
    return func_8001ED40()->field_8;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EF88);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EFF0);

u8 func_8001F020(void) {
    return func_8001ED40()->u10.field_10b;
}

s32 func_8001F044(void) {
    return func_8001ED40()->field_20 & 0xF;
}

s32 func_8001F068(void) {
    return func_8001ED40()->field_18 & 0x3FFFFFF;
}

s32 func_8001F094(void) {
    return func_8001ED40()->field_1C & 0x3FFFF;
}

s32 func_8001F0C0(void) {
    return func_8001ED40()->u0.field_0 >> 28;
}

s32 func_8001F0E4(void) {
    return (func_8001ED40()->u10.field_10 >> 8) & 0x7FFF;
}

s32 func_8001F10C(void) {
    return func_8001ED40()->field_14 & 0x3FF;
}

s32 func_8001F130(void) {
    return (func_8001ED40()->field_14 >> 10) & 0x1FFF;
}

s32 func_8001F158(void) {
    return (func_8001ED40()->field_1C >> 18) & 0x1F;
}

s32 func_8001F180(void) {
    return (func_8001ED40()->field_1C >> 23) & 0xFF;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001F1A8);

void func_8001F24C(Actor *arg0, s32 arg1, s32 arg2) {
    Sub3C *p = arg0->field_3C;
    p->field_54 = arg1;
    p->field_58 = 0;
    p->field_50 = 0;
    p->field_48 = arg2;
    p->field_4C = 0;
    p->field_5C = 1;
    p->field_60 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001F274);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001F320);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001F5E8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001F668);

void func_8001F90C(void) {
    s32 i;
    for (i = 0; i < 3; i++) {
        func_8002B564(i, &D_800416CC[i]);
    }
    func_8002BB54(0x4CC, 0x4CC, 0x4CC);
    func_8002BAD4(0);
}

s32 func_8001F970(s32 arg0) {
    if (arg0 == 0x64 || arg0 == 0xA || arg0 == 0x14) {
        return 0;
    }
    if (arg0 == 0x15) {
        return 0;
    }
    return arg0 != 0x16;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001F9AC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001FDBC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800200D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80020510);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80020768);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80020920);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800209F8);

void func_80020C14(s32 arg0) {
    func_80020920(arg0);
    func_800209F8(arg0);
}

extern void func_80022F8C(void *, s32);

void func_80020C40(ContC40 *a0, s32 *a1, s16 a2) {
    AllocC40 *p;
    if (a0->field_38 == 0) {
        a0->field_38 = (AllocC40 *)func_80022F3C(0x90, 2);
    }
    func_80022F8C(a0->field_38, 0x90);
    p = a0->field_38;
    p->field_60 = 0x1000;
    p->field_5C = 0x1000;
    p->field_58 = 0x1000;
    if (a1 != 0) {
        p->field_30 = a1[0];
        p->field_34 = a1[1];
        p->field_38 = a1[2];
    }
    p->field_42 = a2;
    func_80020C14((s32)a0);
}

void func_80020CE8(Obj20CE8 *a0, s32 a1) {
    s32 v = a0->field_0 + a0->field_4;
    a0->field_0 = v;
    if (v > 0) {
        if (v >= a0->field_8) {
            a0->field_0 = a0->field_8;
        }
    } else if (a1 == 0) {
        a0->field_8 = 0;
        a0->field_4 = 0;
        a0->field_0 = 0;
    } else {
        if (v >= a0->field_8) {
            a0->field_0 = -a0->field_8;
        }
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80020D54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80020E00);

void func_80020EB0(Ctx38 *arg0, s32 arg1, Elem12 *arg2) {
    Elem12 *e = &arg0->buf->elems[arg1];
    e->field_0 = arg2->field_0;
    e->field_4 = arg2->field_4;
    e->field_8 = arg2->field_8;
}

void func_80020EE8(Ctx38 *arg0, s32 arg1) {
    Elem12 *e = &arg0->buf->elems[arg1];
    e->field_8 = 0;
    e->field_4 = 0;
    e->field_0 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80020F10);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80020FD0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002130C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800216E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80021838);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800218CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80021ABC);

void func_80021D50(void) {
}

void func_80021D58(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80021D60);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80021DC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80021E54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80021E78);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022038);

void func_800220D0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 idx = arg1 >> 3;
    s32 mask = 1 << (arg1 & 7);
    if (arg2 != 0) {
        arg0[idx] |= mask;
    } else {
        arg0[idx] &= ~mask;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022118);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800221C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022388);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800223EC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022430);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022468);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800224EC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022518);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002254C);

u8 func_80022578(void) {
    u8 result = 0;
    s32 v = func_80022518(2) - 0x2F;
    if ((u32)v < 6) {
        result = D_800416FC[v];
    }
    return result;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800225C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022628);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800226AC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800227A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800227F0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002281C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002284C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022910);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800229F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022AE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022D84);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022DEC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022E60);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022E90);

s32 func_80022F3C(s32 arg0, s32 arg1) {
    s32 r;
    while ((r = func_80022E90(arg0, arg1)) == 0) {
        func_80023BB0();
    }
    return r;
}

void func_80022F8C(void *a0, s32 a1) {
    s32 i;
    if (a1 & 3) {
        u8 *b = (u8 *)a0;
        for (i = 0; i < a1; i++) b[i] = 0;
    } else {
        s32 *w = (s32 *)a0;
        a1 >>= 2;
        for (i = 0; i < a1; i++) *w++ = 0;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80022FE8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023044);

void func_800230AC(void) {
    func_80024654(D_8005F6A8, D_8005F6A8 + 0x22);
    func_80024544();
}

void func_800230DC(Rec230DC *arg0) {
    arg0->field_C = 0;
    arg0->field_15 = 0;
    arg0->field_14 = 0;
    arg0->field_10 = 0;
    arg0->field_8 = 0;
    arg0->field_4 = 0;
    arg0->field_8 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800230FC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800231AC);

s32 func_80023270(s32 arg0, s32 arg1, s32 arg2) {
    s32 r = 0;
    if (arg0 & arg2) {
        r = 1;
    } else if (arg1 & arg2) {
        r = -1;
    }
    return r;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002329C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023484);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023550);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800238E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800238F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023910);

u16 func_80023944(u32 arg0) {
    return D_80041704[arg0 & 0xFFF];
}

void func_80023964(void) {
    D_8005F774 = 0;
}

void func_80023970(void) {
    D_8005F774 = 2;
}

void func_80023980(void) {
    D_8005F774 = 3;
}

void func_80023990(void) {
    D_8005F774 = 4;
}

EntA0 *func_800239A0(u32 arg0) {
    u32 index;
    u8 *base;
    if (arg0 == 0) {
        return 0;
    }
    index = arg0 & 0xFFFF;
    base = (u8 *)func_80023DB0(arg0 >> 16);
    return (EntA0 *)(((u32 *)base)[index] + (u32)base);
}

s32 func_800239E4(s32 arg0, s32 *arg1) {
    if (arg0 == 0) {
        return 0;
    }
    return arg1[(u16)arg0] + (s32)arg1;
}

s32 func_80023A08(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_80023DB0(arg0);
}

void func_80023A38(void) {
    s32 i;
    Ent23A78 *p = D_8005F8C8;
    for (i = 0; i < 0x50; i++, p++) {
        p->field_4 = 0;
        p->field_C = 0;
        p->field_0 = 0;
        p->field_2 = 0;
        p->field_8 = 0;
    }
}

Ent23A78 *func_80023A78(arg0)
s32 arg0;
{
    s32 i;
    Ent23A78 *p = D_8005F8C8;
    for (i = 0; i < 0x50; i++, p++) {
        if (p->field_4 == arg0) return p;
    }
    return NULL;
}

Ent23A78 *func_80023AB0(void) {
    s32 i;
    Ent23A78 *p = D_8005F8C8;
    for (i = 0; i < 0x50; i++, p++) {
        if (p->field_4 == 0) return p;
    }
    return NULL;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023AE8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023B70);

void func_80023BB0(void) {
    Ent23AE8 *p = func_80023AE8();
    func_80022D84(p->field_C);
    p->field_4 = 0;
    p->field_C = 0;
    p->field_8 = 0;
    p->field_0 = 0;
    p->field_2 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023BF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023C74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80023D68);

s32 func_80023DB0(s32 arg0) {
    Ent23A78 *p = func_80023A78(arg0);
    if (p != 0 && p->field_0 == 3) {
        p->field_8 = D_8005F770.field_0;
    } else {
        while (func_80024220() != 0) {
        }
        func_80023D68(arg0);
    }
    return func_80023A78(arg0)->field_C;
}

void func_80023E20(void) {
    Ent23A78 *p = func_80023A78();
    if (p != 0) {
        if (p->field_0 == 3) {
            func_80022D84(p->field_C);
            p->field_4 = 0;
            p->field_C = 0;
            p->field_8 = 0;
            p->field_0 = 0;
        }
    }
}

void func_80023E78(void) {
    Ent23A78 *p = func_80023A78();
    if (p != 0) {
        if (p->field_0 == 3) {
            p->field_2 = 1;
        }
    }
}

void func_80023EB8(void) {
    Ent23A78 *p = func_80023A78();
    if (p != 0) {
        if (p->field_0 == 3) {
            p->field_2 = 0;
        }
    }
}

void func_80023EF8(void) {
    s32 i;
    for (i = 0; i < 0x50; i++) {
        if (D_8005F8C8[i].field_4 != 0 && D_8005F8C8[i].field_2 == 0) {
            func_80022D84(D_8005F8C8[i].field_C);
            D_8005F8C8[i].field_4 = 0;
            D_8005F8C8[i].field_C = 0;
            D_8005F8C8[i].field_8 = 0;
            D_8005F8C8[i].field_0 = 0;
        }
    }
}

s32 func_80023F74(s32 arg0) {
    return D_80043794[arg0] != 0;
}

u16 func_80023F90(s32 arg0) {
    return D_80047100[arg0];
}

s32 func_80023FAC(s32 arg0) {
    return D_80043794[arg0];
}

void func_80023FC8(s32 arg0) {
    func_80030394(D_80043794[arg0]);
}

s32 func_80023FFC(void) {
    s32 x;
    func_80030914(D_8005FDC8, 3);
    x = func_8002DD64(D_8005FDC8);
    if (x == D_80048DB8.field_1C) {
        D_80048DB8.field_1C = x + 1;
        return 0;
    }
    return -1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002405C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800240E8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024220);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024260);

void func_80024310(Actor *arg0, Block1C *arg1) {
    *(Block1C *)arg0->work = *arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024350);

void func_80024410(Actor *arg0) {
    ActorWork *w = arg0->work;
    if (arg0->field_10 == 1) {
        func_8001FDBC(arg0, w->field_0);
        func_8001F320(arg0);
        func_80020920(arg0);
        func_800200D0(arg0);
        func_80020510(arg0, 0);
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024474);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024544);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024610);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024654);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024704);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800247F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002485C);

s32 func_80024950(Actor *arg0) {
    s32 tmp = arg0->u34.b.field_37;
    arg0->u34.b.field_37 = 0;
    arg0->field_38 = tmp;
    return tmp;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024960);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024A1C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024C98);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024CB8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024DC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025034);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025114);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025144);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800251AC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002533C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025670);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025760);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025984);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025C00);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025C90);

void func_80025CB8(Actor *arg0, u8 arg1, ActorWork *arg2, u8 arg3) {
    arg0->u34.b.field_37 = arg1;
    arg0->work = arg2;
    arg0->u34.b.field_36 = arg3;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025CC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025D4C);

s32 func_80025FBC(Obj25FBC *arg0) {
    s32 a = ((arg0->field_E3 + 1) >> 1) << 2;
    s32 b = ((arg0->field_E9 * 5 + 3) & 0xFFC) + 4;
    return a + b + arg0->field_EC;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025FF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800260C8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026170);

void func_80026568(Actor *arg0, u8 arg1) {
    arg0->u34.b.field_37 = 0x43;
    arg0->work = (ActorWork *)&arg0->field_24;
    arg0->field_24 = arg1;
    arg0->u34.b.field_36 = 1;
}

void func_80026588(Actor *arg0) {
    arg0->u34.b.field_37 = 0x45;
    arg0->work = NULL;
    arg0->u34.b.field_36 = 0;
}

void func_8002659C(Actor *arg0, u8 arg1) {
    arg0->u34.b.field_37 = 0x4C;
    arg0->work = (ActorWork *)&arg0->field_24;
    arg0->field_24 = arg1;
    arg0->u34.b.field_36 = 1;
}

void func_800265BC(Actor *arg0, u8 arg1) {
    arg0->u34.b.field_37 = 0x46;
    arg0->work = (ActorWork *)&arg0->field_24;
    arg0->field_24 = arg1;
    arg0->u34.b.field_36 = 1;
}

void func_800265DC(Actor *arg0, u8 arg1) {
    arg0->u34.b.field_37 = 0x47;
    arg0->work = (ActorWork *)&arg0->field_24;
    arg0->field_24 = arg1;
    arg0->u34.b.field_36 = 1;
}

void func_800265FC(Actor *arg0) {
    arg0->u34.b.field_37 = 0x4B;
    arg0->work = NULL;
    arg0->u34.b.field_36 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026610);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026630);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800266D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026718);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800267F0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002689C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800269B8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026FB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026FC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026FD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026FE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026FF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027004);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027014);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027044);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027084);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800270B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027104);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027278);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800272D4);

u8 func_80027378(void) {
    return D_80048F12;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027388);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800273E8);

void func_80027480(void *a0) {
    if (D_80048F12 >= 2) {
        D_80048F0C(&D_800102C0, a0);
    }
    D_80048F08->fn_3C(a0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800274E8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027604);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027694);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002772C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002778C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800277EC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800278A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002796C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027A18);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027A74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027AE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027BA4);

s32 func_80027C7C(s32 arg0) {
    func_80027044(arg0, D_80048F20, 0x5C);
    return arg0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80027CB0);

s32 func_800281A8(s32 arg0) {
    func_80027044(arg0, D_80048F7C, 0x14);
    return arg0;
}

u32 func_800281DC(void) {
    return (u32)D_80048F08->fn() >> 31;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002820C);

void func_8002828C(Obj8228C *arg0, Pt8228C *arg1) {
    arg0->field_3 = 2;
    arg0->field_4 = func_80028884(arg1->field_0, arg1->field_2);
    arg0->field_8 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800282CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800284C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028734);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028754);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800287EC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028884);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800288A0);

s32 func_80028920(void) {
    return *D_80049018;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028938);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028A18);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028C48);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028E84);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029104);

void func_80029118(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029120);

void func_80029160(s32 arg0) {
    *D_80049018 = 0x4000002;
    *D_8004901C = arg0;
    *D_80049020 = 0;
    *D_80049024 = 0x1000401;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800291A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800291D8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800291FC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800294AC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002970C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029848);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029984);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800299B8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029AFC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029B9C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029C88);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029D74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029EB8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029FB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029FDC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A004);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A014);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A054);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A6F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A840);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A87C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A9A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A9B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A9F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002AAB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002AAF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002AB34);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002AB54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002ABB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002AC54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002ACC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002ADE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002AE4C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B06C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B1A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B2B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B334);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B424);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B494);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B4C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B544);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B564);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BA1C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BA80);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BAD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BB54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BB84);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BBD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BCC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BD94);

extern void func_8002CF74(ObjC0E4 *, s32 *, s32 *);
extern void func_8002D224(ObjC0E4 *, ArgC0E4 *);
extern void func_8002D334(ObjC0E4 *, ArgC0E4 *);

void func_8002C064(ObjC0E4 *a0, ArgC0E4 *a1) {
    s32 tmp[3];
    func_8002CF74(a0, &a1->field_14, tmp);
    func_8002D334(a0, a1);
    a1->field_14 = tmp[0] + a0->field_14;
    a1->field_18 = tmp[1] + a0->field_18;
    a1->field_1C = tmp[2] + a0->field_1C;
}

void func_8002C0E4(ObjC0E4 *a0, ArgC0E4 *a1) {
    s32 tmp[3];
    func_8002CF74(a0, &a1->field_14, tmp);
    func_8002D224(a0, a1);
    a0->field_14 = tmp[0] + a0->field_14;
    a0->field_18 = tmp[1] + a0->field_18;
    a0->field_1C = tmp[2] + a0->field_1C;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002C164);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002C774);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002C834);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CAF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CB30);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CBC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CC64);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CDB8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CE54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CE5C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CEE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CF74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D0D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D178);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D224);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D334);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D444);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D4A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D5E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D614);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D644);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D664);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D684);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D6A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D6C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D6D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D704);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002D944);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DAC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DB70);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DBA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DBB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DBD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DC04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DC94);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DCD0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DCF8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DD20);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DD54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DD64);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DDE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DE68);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DE94);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DEF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DF74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E000);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E064);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E0F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E1A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E1E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E2A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E2C4);

void func_8002EBE0(s32 *dst, s32 *src, u32 count) {
    u32 i;
    for (i = 0; i < count; i++) {
        *dst++ = *src++;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002EC0C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002EDB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002F318);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002F598);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002F860);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FC6C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FCF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FDC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FEB8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FF04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800300E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003024C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030258);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030334);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030394);

u8 func_800304A4(void) {
    return D_8004E6E5;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800304B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800304D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800304F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030514);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030534);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030554);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030690);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800307C4);

s32 func_80030914(void *arg0, s32 arg1) {
    return func_80030934() == 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030934);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030A34);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030A64);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030A84);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030AB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030C2C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030CC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030CD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030D04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030D34);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030D64);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030D98);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030DC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030DF8);

u16 func_80030E28(void) {
    return D_8004EAFA;
}

u16 func_80030E38(void) {
    return *D_8004FB88;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030E50);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030E68);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030F40);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031110);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031258);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800312F8);

void func_80031370(s32 *arg0, s32 arg1) {
    s32 i;
    for (i = arg1 - 1; i != -1; i--) {
        *arg0++ = 0;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031394);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003139C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800313B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800313C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800313D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800313E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031420);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031464);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800314BC);

void func_80031528(s32 arg0, s32 arg1) {
    if (arg1 != D_8004FBA0[arg0]) {
        D_8004FBA0[arg0] = arg1;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031554);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031584);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800315D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031750);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800317FC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031824);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031838);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031854);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031AC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031CD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031D74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031DA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031EA0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800320E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032494);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032544);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032644);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800326A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032820);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032844);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032874);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032914);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032954);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032C54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032CD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033054);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033124);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800331F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800332E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033394);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033424);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033524);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033664);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800336D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033804);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033894);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033954);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800339E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033A74);

void func_80033B24(u32 arg0, u32 arg1, Out33B24 *arg2) {
    arg2->field_A = arg0 & 0x8000;
    arg2->field_C = arg1 & 0x8000;
    arg2->field_10 = arg1 & 0x4000;
    arg2->field_E = arg1 & 0x20;
    arg2->field_0 = ((arg0 & 0xFFFF) >> 8) & 0x7F;
    arg2->field_2 = ((arg0 & 0xFFFF) >> 4) & 0xF;
    arg2->field_4 = arg0 & 0xF;
    arg2->field_6 = (arg1 >> 6) & 0x7F;
    arg2->field_8 = arg1 & 0x1F;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033B80);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033C24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033CE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033D94);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033E44);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033EF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033FB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034064);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034114);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800341F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034294);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034334);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034364);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034394);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800343C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800343F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034424);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800344D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034704);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800348D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800349B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034A24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034E04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034E44);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034F64);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035024);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035074);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800352A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800352C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800352E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035330);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035384);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035420);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035458);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035488);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800354BC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800354F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035674);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003569C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800356D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800357E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035A04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035B54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035BE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035C4C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035CE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035F04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036054);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036164);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800363A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800363E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036474);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036514);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036554);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036574);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036594);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036764);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036774);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036784);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036C54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036FA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800374C0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037620);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003770C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800379B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037B84);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037BD0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037C38);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037D64);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800382D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80038314);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800383D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800388A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80038A90);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80038B74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80038BE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039150);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800391B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039264);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039334);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800398D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039994);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039A44);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039A78);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039AE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039B18);

s32 func_80039B4C(s32 arg0, s32 arg1) {
    return arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039B54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039F44);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A004);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A034);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A054);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A13C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A1B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A1C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A1D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A454);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A614);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A6D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A778);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A9F8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AA7C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AAE0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AB24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003ABC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AC04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AC5C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AC84);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003ACAC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AD14);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AD44);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003ADA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B074);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B374);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B3F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B424);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B6E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B714);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B794);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B884);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B904);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B994);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003BE74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C344);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C374);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C3A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C544);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C554);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C714);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C774);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C7D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C804);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C8B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C8C4);

s32 func_8003C8EC(void) {
    return (D_8004FE5C ^ 1) != 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C904);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003CF04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003CFD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D104);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D124);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D4A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D4D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D4F4);

extern void func_80030AB4(s32);
extern s32 func_8003D610(void);
extern void func_8003D9D4(s32);
extern void func_8003DBE4(void);
extern void func_8003DAE0(void);
extern void func_8003DB74(void);
extern void func_8003DA04(void);

void func_8003D504(s32 a0) {
    s32 s0 = a0;
    s32 s1;
    func_80030CC4(0);
    func_80030AB4(0);
    s1 = func_80026FC4();
    if (func_8003D610() == 0) {
        s0 = 0;
    }
    func_8003D9D4(s0);
    func_8003DBE4();
    func_8003DAE0();
    func_8003DB74();
    func_8003DA04();
    if (s1 == 1) {
        func_80026FD4();
    }
}

s32 func_8003D594(void) {
    s32 s = func_80026FC4();
    func_8003D9E4();
    func_80030CC4(0);
    if (s == 1) {
        func_80026FD4();
        return 0;
    }
    return 0;
}

s32 func_8003D5DC(void) {
    func_8003D9F4();
    func_8003DC24();
    return 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D604);

s32 func_8003D610(void) {
    return D_800506B8;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D620);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D6B0);

s32 func_8003D740(void) {
    func_8003D8A4();
    func_80030CC4(0);
    func_8003D8C4();
    return 1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D770);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D7E8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D850);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D894);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D8A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D8B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D8C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D8EC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D964);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D9D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D9E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D9F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DA04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DA48);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DA74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DAB8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DAE0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DB74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DBE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DC24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DCA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DCCC);

s32 *func_8003DCF4(void) {
    return &D_80062F80;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DD00);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DD70);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DDB0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DE18);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E134);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E19C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E444);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E5CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E610);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E6C8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E878);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E930);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EADC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EBF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003ECFC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EE14);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EF1C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F178);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F18C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F2A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F3A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F418);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F46C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F518);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F574);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F584);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F594);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F5A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F5B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F5C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F760);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F864);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F874);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F924);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F994);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F9A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F9B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F9F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FA04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FA14);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FA24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FAA0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB0C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB38);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB4C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB60);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB88);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FB9C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FBB0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FBC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FBF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FDD0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FDF0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FEA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FFAC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80040084);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8004015C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80040198);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800401D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800401E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800405B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80040C74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80040CE4);
