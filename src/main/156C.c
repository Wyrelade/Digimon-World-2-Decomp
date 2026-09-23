#include "common.h"
#include "main/156C.h"

extern Ent23A78 D_8005F8C8[0x50];
extern Ent54C48 D_80054C48[3];
extern s32 func_80024220(void);
extern void func_80023D68(s32);
extern s32 D_8005F774;
extern u8 D_80048F12;
extern u8 D_8004E6E5;
extern u16 D_8004EAFA;
extern s32 D_800506B8;
extern u32 D_800506E8;
extern s32 D_8004FC00;
extern S5D560 D_8005D560;
extern s32 D_8005F780;
extern State62F80 D_80062F80;
extern u8 D_8005F6A8[];
extern Elm678 D_8005F678[];
extern Elm6F0 D_8005F6F0[];
extern u8 D_800416FC[];
extern Obj48F08 *D_80048F08;
extern void (*D_80048F0C)(void *, ...);
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
extern void (*D_8004FBA0[])(void);
extern Stack54CD0 D_80054CD0;
extern List50798 D_80050798;
extern Blk54CF8 D_80054CF8[];
extern Blk54CF8 D_80058D28[];
extern EntE620 D_8005E620;
extern s32 D_80062FD8;
extern void func_8001DC24(s32, s32, ElmE620 *);
extern void func_80022AE4(void);
extern void func_8002796C(Blk54CF8 *, s32);
extern void func_8001A68C(s32, s32);
extern s32 func_80027A74(void *);
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
extern Sub3C *func_8001FDBC(Actor *, s32);
extern void func_8001F5E8(Actor *);
extern s32 D_80043704[];
extern void func_80020920(Actor *);
extern void func_800200D0(Actor *);
extern void func_80020510(Actor *, s32);
extern Obj48DB8 D_80048DB8;
extern u8 D_8005FDC8[];
extern s32 func_8002DD64(void *);
extern s32 func_80030914(void *, s32);
extern s32 func_80030534(s32);
extern void func_80030690(s32, s32);
extern void *func_80030514(void *);
extern void func_800240E8();
extern void func_8001F320(Actor *);
extern Blk16 D_800416CC[];
extern void func_8002B564(s32, Blk16 *);
extern void func_8002BB54(s32, s32, s32);
extern void func_8002BAD4(s32);
extern s32 func_8001E134(void);
extern s32 *func_80011F5C(s32);
extern s32 D_80040FD0[];
extern void func_8001D550(Ent1D550 *, s32, s32);
extern void func_8001D884(s32);
extern void func_8001BC24(void *, Arg1BC24 *);
extern void func_800221C4(s32, s32);
extern void func_8001D5B4(void *, s32, s32, s32);
extern s32 func_8001E984(s32, s32, s32);
extern void func_8002D744(void *, Obj209 *);
extern void func_8002B544(s32);
extern void func_8001F1A8(Actor *, s32);
extern s32 D_8004E6D0;
extern s32 D_8004E6CC;
extern void *D_8004E6C8;
extern void func_800294AC();
extern void func_80030D34();
extern Cmd62C18 D_80062C18;
extern void func_80036514(s16);
extern void func_800363A4(s16);
extern Elm354F4 *D_80061C50[];
extern s32 func_80032494(s16, s16);
extern s32 D_80060050;
extern s32 D_8006004C;
extern Flags4FC68 *D_8004FC68;
extern s32 D_8004FC70[];
extern int func_8003F178(int);
extern Vt4FB80 *D_8004FB80;
extern u8 D_8005FDD8[];
extern s32 *D_80049014;
extern s32 D_8004904C;
extern s32 D_80049050;
extern s32 func_80030AB4(s32);
extern s32 D_80061B38;
extern s32 D_80061B3C;
extern void func_8002DE94();
extern s32 D_8004FDB8;
extern s32 D_8004FE44;
extern Stat48E90 *D_80048E90;
extern Obj50768 *D_80050768;
extern s32 func_8002CB30(s32);
extern s32 func_8002FF04();
extern s32 func_8002FDC8();
extern s32 func_80039B54();
extern s32 func_80039A78();
extern s32 func_80039B4C(s32, s32);
extern s32 D_80063080;
extern void func_80027004(s32, s32);
extern void func_80026FF4(s32, u8 *);
extern u8 D_80048E78[];
extern void func_8003A034(void);
extern void func_8003C3A4(s32);
extern void func_80032874();
extern Elm624E8 D_800624E8[];
extern s32 D_80049064;
extern u8 D_800618B0[];
extern void func_8002A9A4(s32, u8 *);
extern s32 D_8004E6D8;
extern s32 D_8004E6D4;
extern void func_80030258();
extern void func_80030CD4(void);
extern void func_80030D04(s32 arg0, void (*arg1)());
extern s32 D_8004FBD4[];
extern s32 *D_8004FBD0;
extern void func_800315D0();
extern void func_80031750();
extern void func_800317FC(s32 *arg0, u32 arg1);
extern u16 *D_8004FE28;
extern s32 D_8004FE50;
extern void func_80023BF4(s32);
extern Hooks4FC50 D_8004FC50;
extern s32 D_80062F94;
extern void func_8003F5A4(s32);
extern s32 (*D_80048E30)(Ent266D0 *);
extern s32 D_80048E98;
extern void func_80025760(Ent266D0 *, s32);
extern void func_80038BE4(s16, s32, s32, s32);
extern s32 D_80063010[4][4];
extern s32 (*D_80063050[4])(s32 *);
extern char D_80010D44[];
extern void func_8002A014(char *, ...);
extern void func_8003B794(s32);
extern void func_80030554(s32, u8 *, s32);
extern void func_8002DF74(void);
extern void func_8002CE5C(void);
extern void func_8002D684(s32, s32, s32);
extern void func_8002D6A4(s32, s32);
extern s16 D_8006197E;
extern s16 D_8006197C;
extern Blk5071C *D_8005071C;
extern char D_8001031C[];
extern void func_800274E8(char *, s32);
extern s8 D_80010974[];
extern void func_8002A744(s32);
extern s32 D_8004FE60;
extern void func_8003A9F8(s32, u32);
extern Snd62D18 D_80062D18;
extern Rec62D08 *D_80062D08;
extern s32 func_80037C38(s32, s32, s32, s32);
extern s32 D_8004FC5C;
extern Gpu48F10 D_80048F10;
extern char D_80010250[];
extern char D_80010290[];
extern s32 *D_8004FE38;
extern volatile u16 D_8004FE40;
extern s32 func_8003A778();
extern u16 func_8003AB24(s32, u32);
extern Regs48E8C *D_80048E8C;
extern void (*D_80048E40)(void);
extern s32 D_8004FBC0;
extern char D_80010B74[];
extern s32 func_8003E19C(s32 *);
extern void func_8003FA24(s32 (*)(s32 *));
extern void func_8002A014(char *, ...);
extern s16 D_8006198C;
extern void func_8002ACC8(u16, u16, u16, u16, u16);
extern void func_8002BB84(void);
extern void func_8002AE4C();
extern void func_8002B2B4(void);
extern void func_8002B1A4();
extern s32 D_8004FE18;
extern s32 D_8004FDB0;
extern void func_8003A614(void);
extern s32 func_8003A1B4(s32, s32, s32, s32);
extern void func_8003A1C4(s32);
extern char D_80010310[];
extern void func_800274E8(char *, s32);
extern s32 D_80061B24;
extern s32 D_80061B20;
extern s32 D_80061B1C;
extern s32 D_80061B14;
extern s32 D_80061B04;
extern s16 D_80061AFC;
extern s32 D_80061AF8;
extern void func_8002E1A4(s32, s32);
extern s32 D_8004FE88;
extern s32 D_8004FE8C;
extern Hdr3AD44 *D_8004FE90;
extern s32 func_80023910();
extern St6191C D_8006191C;
extern St6196C D_8006196C;
extern s16 D_8006198E;
extern void func_8002AE4C();
extern s32 func_80010F24(s32);
extern Ent62CFC *D_80062CFC;
extern s32 func_800398D4(s16, s16);
extern s32 D_8004E6E8;
extern u8 *D_8004E600;
extern u8 *D_8004E60C;
extern void func_80030A34(s32);
extern int func_80030A64(int);
extern void func_80030A84(s32);
extern void func_80026588(Actor *arg0);
extern void func_8002659C(Actor *arg0, u8 arg1);
extern void func_800265DC(Actor *arg0, u8 arg1);
extern s32 func_80026630(void);
extern s32 *D_8004FBC4;
extern Pair61900 D_80061900;
extern s32 D_80061990;
extern s32 D_80061994;
extern s32 D_80061998;
extern s32 D_8006199C;
extern s32 D_800619A0;

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80010D6C);

void func_80010D74(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80010D7C);

void func_80010E38(Obj10E38 *a0) {
    s32 n = a0->field_30;
    s32 *arr = a0->field_34;
    s32 i;

    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[i] = func_80010F24(arr[i]);
        }
    }
}

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

void func_8001125C(arg0)
Act125C *arg0;
{
    Obj125C *sub;
    s32 i;
    s32 *p;
    s32 j;

    if (arg0->field_30 != 0) {
        s32 *fp = arg0->field_34;
        i = 0;
        if (arg0->field_30 > 0) {
            p = fp;
            do {
                func_80010ED4(p);
                p++;
            } while (++i < arg0->field_30);
            fp = arg0->field_34;
        }
        func_80022D84((ActorWork *)fp);
    }

    if (arg0->field_2C != 0) {
        func_80022D84(arg0->field_2C);
    }
    if (arg0->field_38 != 0) {
        func_80022D84(arg0->field_38);
    }

    sub = arg0->field_3C;
    if (sub != 0) {
        if (sub->field_6C != 0) {
            func_80022D84(sub->field_6C);
        }
        if (sub->field_70 != 0) {
            func_80022D84(sub->field_70);
        }
        i = sub->field_74 != 0;
        if (i) {
            func_80022D84(sub->field_74);
        }
        if (sub->field_78 != 0) {
            func_80022D84(sub->field_78);
        }
        func_80022D84((ActorWork *)arg0->field_3C);
    }

    for (j = 0; j < 100; j++) {
        if (D_80050798.entries[j] == (s32)arg0) {
            D_80050798.entries[j] = 0;
            break;
        }
    }

    func_80022D84((ActorWork *)arg0);
}

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

extern Ent11440 *func_80011440(void);

Ent11440 *func_80011510(s32 arg0, s32 arg1, s32 arg2) {
    D_80050938.field_0 = arg0;
    D_80050938.field_4 = arg1;
    D_80050938.field_8 = arg2;
    D_80050938.field_C = 0;
    return func_80011440();
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

void func_80011F04(void) {
    s32 i;
    s32 j;
    s32 v;

    i = 0;
    j = i;
    do {
        v = D_8005071C->field_BA9[i];
        D_8005071C->field_BA9[i] = 0;
        if (v != 0) {
            D_8005071C->field_BA9[j++] = v;
        }
        i++;
    } while (i < 12);
}

s32 *func_80011F5C(s32 id) {
    s32 *base = 0;
    u32 i;
    s32 key;

    if ((i = id - 0x78) < 0x10) {
        key = 0x5130000;
    } else if ((i = id - 0xD0) < 0x1A) {
        key = 0x5130001;
    } else if ((i = id - 0x97) < 0xF) {
        key = 0x5130002;
    } else {
        goto end;
    }
    base = (s32 *)func_800239A0(key);
    id = i;
end:
    if (base != 0) {
        base = &base[id];
    }
    return base;
}

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

void func_8001291C(Actor *a, Pair1291C *v) {
    ActorWork *w = a->work;

    *(Pair1291C *)w = *v;
    switch (w->field_0) {
    case 0:
    default:
        w->field_8 = 0xD;
        break;
    case 1:
        w->field_8 = 5;
        break;
    case 2:
        w->field_8 = 7;
        break;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80012974);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001309C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013308);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013378);

extern s32 func_80013308();
extern void func_8001107C(s32, s32, s32);
extern s32 func_8001A300(void);
extern s32 D_8005F78C;

void func_80013384(Actor *a0) {
    s32 st = a0->field_10;
    s32 t = a0->u34.field_34;
    switch (st) {
    case 0:
    default:
        func_80013308((D_8005F770.field_18 >> 8) - 1);
        func_8001107C(D_8005F770.field_18 & 0xFF00, t, 0);
        func_80011544(a0);
        break;
    case 1:
        if (D_8005F78C != 0) {
            func_800115C0(a0, 2);
        }
        break;
    case 2:
        if (func_8001A300() == 0) {
            func_800115C0(a0, 3);
        }
        break;
    }
}

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

/* file-local views for func_800138C0 */
typedef struct {
    s16 field_0;
    s16 field_2;
} Coord138C0;

typedef struct {
    s16 h[2];
} Copy138C0;

/* view of Elm6F0 that reads the 0x3C flag word unsigned */
typedef struct {
    u8 _p[0x3C];
    u16 field_3C;
    u8 _p2[0x40 - 0x3E];
} ElmFlags138C0;

s32 func_800138C0(s32 a0, s32 a1, s32 a2) {
    Coord138C0 *p0 = (Coord138C0 *)a0;
    Coord138C0 *p1 = (Coord138C0 *)a1;
    Copy138C0 saved;
    s32 changed;

    changed = 0;
    saved = *(Copy138C0 *)p0;

    if (((ElmFlags138C0 *)D_8005F6F0)[a2].field_3C & 0x8000) {
        if (p0->field_0 > 0) {
            p0->field_0 = p0->field_0 - 1;
            goto tail;
        }
    }
    if (((ElmFlags138C0 *)D_8005F6F0)[a2].field_3C & 0x2000) {
        if (p0->field_0 < p1->field_0 - 1) {
            p0->field_0 = p0->field_0 + 1;
            goto tail;
        }
    }
    if (((ElmFlags138C0 *)D_8005F6F0)[a2].field_3C & 0x1000) {
        if (p0->field_2 > 0) {
            p0->field_2 = p0->field_2 - 1;
            goto tail;
        }
    }
    if (((ElmFlags138C0 *)D_8005F6F0)[a2].field_3C & 0x4000) {
        if (p0->field_2 < p1->field_2 - 1) {
            p0->field_2 = p0->field_2 + 1;
        }
    }

tail:
    if (saved.h[0] != p0->field_0 || saved.h[1] != p0->field_2) {
        changed = -1;
    }
    return changed;
}

void func_80013A10(s32 arg0, s32 arg1) {
    func_800138C0(arg0, arg1, 0);
}

s32 func_80013A30(s32 *arg0, s32 arg1, s32 arg2) {
    s32 old = *arg0;

    if (arg2 - 1 < arg1 - old) {
        *arg0 = arg1 - (arg2 - 1);
    } else if (arg1 < old) {
        *arg0 = arg1;
    }
    return *arg0 - old;
}

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

void func_80013AFC(u8 *out, s32 val, s32 width) {
    u8 buf[8];
    s32 sign = 0;
    s32 done = 0;
    s32 i;

    if (width < 0) {
        width = -width;
        sign = 1;
    }
    if (val > 99999999) {
        val = 99999999;
    }
    for (i = 0; i < width; i++) {
        u8 *p = &buf[i];
        if (!done) {
            *p = val % 10;
        } else {
            *p = 0xFD;
        }
        val = val / 10;
        done = (val == 0);
    }
    for (i = width - 1; i >= 0; i--) {
        if (sign && buf[i] == 0xFD) {
            continue;
        }
        *out++ = buf[i];
    }
    *out = 0xFF;
}

void func_80013BF8(Actor *arg0, s16 arg1) {
    arg0->work->field_30 = arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80013C04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800141D4);

void func_800143CC(Actor *arg0, s16 arg1) {
    ActorWork *w = arg0->work;

    w->field_38 = arg1;
    if (arg1 == 3) {
        D_80050768->field_35C = 0;
        w->field_3C = 0;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80014400);

extern void func_8001373C(void *, s32, s32 *, s16 *);
extern void func_800137B8(void *, s32, s32);
extern void func_8001D504(void *, s32);

void func_80014870(Actor *actor) {
    ActorWork *w = actor->work;
    s32 *p;
    s32 *list;
    void *obj;

    if (w->field_40 == 0) {
        return;
    }
    p = (s32 *)func_800239A0(0x5130009);
    if (*p == 0) {
        return;
    }
    list = p;
    do {
        obj = func_800239A0(*list);
        if (w->field_2C != 0 && w->field_3C == 0) {
            func_8001373C(obj, 2, &w->field_28, &w->field_2C);
            func_800137B8(obj, 2, (actor->field_28 >> 2) & 3);
            func_8001D504(obj, 0);
        } else {
            func_8001D504(obj, 2);
        }
        list++;
        func_8001D550(obj, 0x1000, w->field_40);
        func_8001D884((s32)obj);
    } while (*list != 0);
}

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

void func_800176D8(Actor *s0) {
    Work176D8 *w = (Work176D8 *)s0->work;
    s16 c = w->field_19E;
    if (c == 0) {
        func_8001A68C(0xB, 0);
        func_800115C0(s0, 2);
    } else {
        s16 idx = (u16)c - 1;
        s16 v;
        w->field_19E = idx;
        v = w->field_1A0[idx];
        ((WorkElem8 *)((u8 *)w + 0x6C))[v].field_2 = 2;
        w->field_1A0[w->field_19E] = 0;
        func_8001A68C(0xB, 0);
        func_800115DC(s0, 1);
    }
}

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

/* View of Actor.work used by func_80019214 (fields 0x80..0x14C). */
typedef struct {
    u8 _pad00[0x80];
    /* 0x80 */ s32 field_80;
    /* 0x84 */ s32 *field_84;
    u8 _pad88[0xB0 - 0x88];
    /* 0xB0 */ s32 field_B0;
    /* 0xB4 */ s32 field_B4;
    /* 0xB8 */ s32 field_B8;
    u8 _padBC[0xC0 - 0xBC];
    /* 0xC0 */ s32 field_C0;
    u8 _padC4[0xC8 - 0xC4];
    /* 0xC8 */ s32 field_C8;
    /* 0xCC */ s32 field_CC;
    /* 0xD0 */ s32 field_D0;
    /* 0xD4 */ s32 field_D4;
    /* 0xD8 */ s32 field_D8;
    /* 0xDC */ s32 field_DC;
    /* 0xE0 */ s32 field_E0;
    /* 0xE4 */ s32 field_E4;
    /* 0xE8 */ s32 field_E8;
    /* 0xEC */ s32 field_EC;
    u8 _padF0[0x100 - 0xF0];
    /* 0x100 */ s32 field_100;
    /* 0x104 */ s32 field_104;
    /* 0x108 */ s32 field_108;
    u8 _pad10C[0x138 - 0x10C];
    /* 0x138 */ s32 field_138;
    u8 _pad13C[0x148 - 0x13C];
    /* 0x148 */ s32 field_148;
    /* 0x14C */ s32 field_14C;
} Wk19214;

/* Record reached through Wk19214.field_84. */
typedef struct {
    u8 _pad00[0x0D];
    /* 0x0D */ u8 field_D;
    u8 _padE;
    /* 0x0F */ u8 field_F;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s16 field_14;
    /* 0x16 */ s16 field_16;
    /* 0x18 */ s16 field_18;
    /* 0x1A */ s16 field_1A;
    /* 0x1C */ s16 field_1C;
    /* 0x1E */ s16 field_1E;
    /* 0x20 */ s16 field_20;
} Rec19214;

/* Node reached through Actor.u38.ptr38. */
typedef struct {
    u8 _pad00[0x58];
    /* 0x58 */ s32 field_58;
    /* 0x5C */ s32 field_5C;
    /* 0x60 */ s32 field_60;
} Nd19214;

/* Stack context passed to func_8002C164. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
    /* 0x1C */ s32 *field_1C;
} Ctx19214;

extern void func_8002C164(Ctx19214 *);

void func_80019214(Actor *actor) {
    Wk19214 *work;
    Rec19214 *rec;
    s32 *list;
    s32 *p;
    void *obj;
    Nd19214 *node;
    Ctx19214 ls;

    work = (Wk19214 *)actor->work;
    if (work->field_80 == 0) {
        goto Ltail;
    }
    p = (s32 *)func_800239A0(0x5130021);
    rec = (Rec19214 *)work->field_84;
    if (*p == 0) {
        goto Ltail;
    }
    list = p;
    do {
        obj = func_800239A0(*list);
        list++;
        func_8001D5B4(obj, 0x2, 3, rec->field_14);
        func_8001D5B4(obj, 0x4, 3, rec->field_16);
        func_8001D5B4(obj, 0x8, 3, rec->field_18);
        func_8001D5B4(obj, 0x10, 3, rec->field_1A);
        func_8001D5B4(obj, 0x20, 2, rec->field_D);
        func_8001D5B4(obj, 0x40, 3, rec->field_1C);
        func_8001D5B4(obj, 0x80, 3, rec->field_1E);
        func_8001D5B4(obj, 0x100, 3, rec->field_20);
        func_8001D5B4(obj, 0x200, 8, rec->field_10);
        func_8001D5B4(obj, 0x400, 8, func_8001E984(rec->field_D, rec->field_F, rec->field_10));
        func_8001D550((Ent1D550 *)obj, 0x1000, work->field_80);
        func_8001D884((s32)obj);
    } while (*list != 0);

Ltail:
    work->field_148 = 0;
    func_8002D744(&work->field_138, &work->field_EC);
    work->field_100 = work->field_B0;
    work->field_104 = work->field_B4;
    work->field_108 = work->field_B8;
    work->field_E8 = 0;
    ls.field_0 = work->field_CC;
    ls.field_4 = work->field_D0;
    ls.field_8 = work->field_D4;
    ls.field_C = work->field_D8;
    ls.field_10 = work->field_DC;
    ls.field_14 = work->field_E0;
    ls.field_18 = 0;
    ls.field_1C = &work->field_E8;
    func_8002B544(work->field_E4);
    func_8002C164(&ls);
    if (work->field_C8 == 0) {
        return;
    }
    if (work->field_14C == 0) {
        return;
    }
    if (work->field_C8 == 1) {
        func_8001F1A8(actor, 0);
        work->field_C8 = work->field_C8 + 1;
    }
    node = (Nd19214 *)actor->u38.ptr38;
    node->field_58 = work->field_14C;
    node->field_5C = work->field_14C;
    node->field_60 = work->field_14C;
    func_8001FDBC(actor, work->field_C0);
    func_8001F320(actor);
    func_80020920(actor);
    func_800200D0(actor);
    func_80020510(actor, 0);
}

void func_800194C8(a)
Actor194C8 *a;
{
    u8 *tbl;
    s32 i;
    s32 r, c;
    u8 *q;
    void *base;

    tbl = a->field_118;

    for (i = 3; i >= 0; i--) {
        a->records[i].count = 0;
    }

    for (i = 0; i < 0xC; i++) {
        q = tbl + i;
        if (q[0x22] == 0) continue;
        r = func_8001EE34(q[0x22]);
        c = a->records[r].count;
        a->records[r].arr[c] = q[0x22];
        a->records[r].count = (u16)a->records[r].count + 1;
    }

    for (i = 0; i < 4; i++) {
        base = func_800239A0(0x5130022);
        a->block64[i] = *(Blk12 *)((u8 *)base + i * 0xC);
        a->field_94[i] = 0;
        a->slot54[i].v = 0;
        *(s16 *)((u8 *)&a->block64[i] + 2) = a->records[i].count;
    }
}

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

void func_80019EE8(Actor *a0) {
    s32 v1 = a0->field_10;
    u16 *a1 = (u16 *)&a0->work->field_0;
    switch (v1) {
    case 1:
        if (a0->field_14 == 0 || a0->field_14 != v1) {
            u16 nv = *a1 + 0x555;
            *a1 = nv;
            if ((s16)nv >= 0x1000) {
                *a1 = 0x1000;
                func_80011564(a0);
            }
        }
        break;
    case 0:
        func_80011544(a0);
        break;
    case 2: {
        s16 nv = *a1 - 0x555;
        *a1 = nv;
        if (nv <= 0) {
            *a1 = 0;
            func_80011544(a0);
        }
        break;
    }
    }
}

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

/* File-local view of an Ent54C48 element with the fields func_8001A75C stamps. */
typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s16 field_8;
    /* 0x0A */ s16 field_A;
    u8 _padC[0x28 - 0xC];
    /* 0x28 */ s32 field_28;
} Ew54C48; /* 0x2C */

typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s32 field_4;
    /* 0x08 */ s32 field_8;
} DProp411FC;

extern DProp411FC D_800411FC;
extern u8 D_80050A48;

extern void func_800357E4(void *, s32, s32);
extern void func_80035A04(s32);
extern void func_800352C4();
extern void func_80035024(s16, s16);
extern void func_80034F64(s32, s32, s32);
extern void func_800356D4(s32, s32, s32);
extern s16 func_80036474(s16);
extern void func_800363E4(s16, s16);
extern void func_80036574();
extern s32 func_80022F3C(s32, s32);
extern void func_8001A5F4(s32, s32);
extern void func_80023C74();

void func_8001A75C(void) {
    s32 v0;
    s32 i;
    Ew54C48 *e;

    func_800357E4(&D_80050A48, 6, 0x10);
    func_80035A04(0x1000);
    func_800352C4();
    func_80035024(0x7F, 0x7F);
    func_80034F64(0, 0, 1);
    func_800356D4(0, 0x7F, 0x7F);
    func_80036474(3);
    func_800363E4(0, 0);
    func_80036574();

    v0 = func_80022F3C(D_800411FC.field_0 + D_800411FC.field_4 + D_800411FC.field_8, 4);
    e = (Ew54C48 *)D_80054C48;
    e[0].field_28 = v0;
    v0 += D_800411FC.field_0;
    e[1].field_28 = v0;
    v0 += D_800411FC.field_4;
    e[2].field_28 = v0;
    for (i = 0; i < 3; i++) {
        e[i].field_4 = 0;
        e[i].field_0 = -1;
        e[i].field_A = 0;
        e[i].field_8 = -1;
    }

    func_8001A5F4(0, 1);
    do {
        func_8001A01C();
        func_80023C74();
    } while (D_80054C48[0].field_4 != 0);

    func_8001A5F4(1, 0xE);
    do {
        func_8001A01C();
        func_80023C74();
    } while (D_80054C48[1].field_4 != 0);
}

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

void func_8001BC24(void *arg0, Arg1BC24 *arg1) {
    SrcBC24 *src = (SrcBC24 *)arg1;
    Ent11440 *r;
    Rec34 *base;
    Rec34 *p;
    Rec34 *rec;
    s32 i;

    r = func_80011510(9, -1, -1);
    if (r == 0) {
        return;
    }
    i = 0;
    base = r->field_2C;
    func_8001BB88(arg0);

    for (p = base; i < 0x32; i++, p++) {
        if (p->field_0 == 0) {
            break;
        }
    }

    if (src->field_C == 0) {
        if (src->field_0 != 0) {
            src->field_C = 9;
        } else {
            src->field_C = 7;
        }
    }
    if (src->field_10 == 0) {
        if (src->field_0 != 0) {
            src->field_10 = 0xF;
        } else {
            src->field_10 = 0xA;
        }
    }

    rec = &base[i];
    rec->field_0 = 1;
    rec->field_1 = *(u8 *)&src->field_0;
    rec->field_2 = *(u8 *)&src->field_4;
    rec->field_8 = src->field_14;
    rec->field_1C = src->field_8 - 0xA0;
    rec->field_1E = src->field_A - 0x78;
    rec->field_3 = *(u8 *)&src->field_C;
    rec->field_4 = *(u8 *)&src->field_10;
    rec->field_6 = *(u16 *)&src->field_18;
    rec->field_C = src->field_1C;
    rec->field_10 = src->field_20;
    rec->field_14 = src->field_24;
    rec->field_18 = src->field_28;
    rec->field_20 = *(u8 *)&src->field_4;
    rec->field_21 = *(u8 *)&src->field_18;
    rec->field_22 = 0;
    rec->field_23 = 0;
    rec->field_24 = 0;
    rec->field_25 = 0;
    rec->field_27 = 0;
    rec->field_26 = 0;
    rec->field_28 = 0;
    rec->field_29 = 0;
    rec->field_2A = 0;
    rec->field_2B = 0;
    rec->field_2C = 0;
    rec->field_2D = 0;
    rec->field_2E = 0;
    rec->field_2F = 0;
    rec->field_30 = 0;
    rec->field_31 = 0;

    *(s32 *)arg0 = i;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BE08);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001BE74);

void func_8001BEE8(s32 a0, s32 a1) {
    Ent11440 *p = func_80011510(9, -1, -1);
    if (a0 != -1 && p != 0) {
        p->field_2C[a0].field_30 = a1;
    }
}

void func_8001BF58(s32 a0, s32 a1) {
    Ent11440 *p = func_80011510(9, -1, -1);
    if (a0 != -1 && p != 0) {
        p->field_2C[a0].field_31 = a1;
    }
}

void func_8001BFC8(void *a0, s32 a1, s32 a2, Halves a3) {
    Arg1BC24 local;
    local.field_14 = (s32)func_800239A0(a1 + 0x1FD0000);
    local.field_0 = 0;
    local.field_4 = a2;
    local.field_8 = a3.lo;
    local.field_A = a3.hi;
    local.field_C = 0;
    local.field_10 = 0;
    local.field_18 = 0;
    func_8001BC24(a0, &local);
}

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

void func_8001C800(s32 arg0) {
    D_80054CF8[2].field_0 = arg0;
}

void func_8001C818(s32 arg0) {
    func_8002796C(&D_80054CF8[arg0], 0x100C);
}

s32 func_8001C858(s32 arg0) {
    s32 *p = (s32 *)&D_80058D28[arg0];
    return func_80027A74(&p[-1]);
}

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

void func_8001D550(Ent1D550 *p, s32 a1, s32 a2) {
    if (p->field_0 == 0) {
        return;
    }
    do {
        if (a1 != 0x1000) {
            p->field_E = 0;
        } else {
            p->field_E = 1;
        }
        p->field_10 = a1;
        if (a2 != 0x1000) {
            p->field_E = 0;
        } else {
            p->field_E = 1;
        }
        p->field_14 = a2;
        p++;
    } while (p->field_0 != 0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001D5B4);

/* File-local record walked by func_8001D6B4 (stride 0x28). */
typedef struct {
    /* 0x00 */ s32 field_0;
    u8 _pad04[0xB - 4];
    /* 0x0B */ u8 field_B;
    u8 _pad0C[0xE - 0xC];
    /* 0x0E */ u8 field_E;
    /* 0x0F */ u8 field_F;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    u8 _pad18[0x20 - 0x18];
    /* 0x20 */ s16 field_20;
    /* 0x22 */ s16 field_22;
    /* 0x24 */ s16 field_24;
    /* 0x26 */ s16 field_26;
} Rec1D6B4; /* 0x28 */

/* View of D_8005F770 (=Actor) fields func_8001D6B4 reads. */
typedef struct {
    u8 _pad00[0x110];
    /* 0x110 */ s32 field_110;
    /* 0x114 */ s32 field_114;
    u8 _pad118[0x138 - 0x118];
    /* 0x138 */ s32 field_138[1];
} Wk1D6B4;

typedef struct {
    /* 0x00 */ s32 field_0;
    /* 0x04 */ s16 field_4;
    u8 _pad06[2];
    /* 0x08 */ s32 field_8;
    /* 0x0C */ s32 field_C;
    u8 _pad10[0x18 - 0x10];
    /* 0x18 */ s32 field_18;
} G4167C;

/* 2-byte-aligned aggregate forcing the lwl/lwr + swl/swr block copy. */
typedef struct {
    s16 h[4];
} Agg1D6B4;

extern G4167C D_8004167C;
extern u8 D_80041694;
extern void func_8001CE9C(void *, s32);
extern void func_8001D104(void *, void *, s32, s32);
extern void func_8002D4A4(Obj209 *, s32 *);

void func_8001D6B4(void *arg0, s32 arg1) {
    Rec1D6B4 *s2 = (Rec1D6B4 *)arg0;
    s32 s3 = 0;
    s32 s4;

    if (arg1 != 0) {
        s32 f114 = ((Wk1D6B4 *)&D_8005F770)->field_114;
        s3 = 0;
        s3 = (((Wk1D6B4 *)&D_8005F770)->field_110 ^ 0x140) == s3;
        if (f114 == 0xF0) {
            s3 |= 2;
        }
    }
    if (s2->field_0 == 0) {
        return;
    }
    do {
        s4 = ((Wk1D6B4 *)&D_8005F770)->field_138[s2->field_B];
        if (s2->field_F != 0) {
            if (s2->field_E != 0) {
                if (s3 != 0) {
                    s2->field_24 = 0;
                    s2->field_22 = 0;
                    s2->field_20 = 0;
                    s2->field_10 = 0x1000;
                    s2->field_14 = 0x1000;
                } else {
                    func_8001CE9C(s2, s4);
                    goto Ladv;
                }
            }
            if (D_8004167C.field_0 == *(s32 *)&s2->field_20 &&
                D_8004167C.field_4 == s2->field_24 &&
                D_8004167C.field_8 == s2->field_10 &&
                D_8004167C.field_C == s2->field_14) {
            } else {
                *(Agg1D6B4 *)&D_8004167C = *(Agg1D6B4 *)&s2->field_20;
                D_8004167C.field_8 = s2->field_10;
                D_8004167C.field_C = s2->field_14;
                func_8002D744(&D_8004167C, (Obj209 *)&D_8004167C.field_18);
                func_8002D4A4((Obj209 *)&D_8004167C.field_18, &D_8004167C.field_8);
            }
            func_8001D104(s2, &D_80041694, s4, s3);
        }
    Ladv:
        s2 = (Rec1D6B4 *)((u8 *)s2 + 0x28);
    } while (s2->field_0 != 0);
}

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

void func_8001DB68(void *a0, Out1DB68 *out) {
    Ent1DB18 *src = func_8001DB18(a0);
    Ent1DB18 *p;
    s32 i;
    out->field_0 = src->u0.h.field_2;
    out->field_4 = ((s32)src->u0.field_0 << 20) >> 28;
    out->field_8 = ((s32)src->u0.field_0 << 16) >> 28;
    out->field_C = src->u4.field_4b;
    out->field_10 = (src->u4.field_4 >> 8) & 0xF;
    out->field_14 = (src->u4.field_4 >> 12) & 0xF;
    p = src;
    out->field_18 = p->u4.h.field_6;
    {
        Row1DB18 *row = (Row1DB18 *)p;
        for (i = 0; i < 3; i++) {
            out->field_1C[i] = row[i].field_8;
            out->field_22[i] = row[i].field_12;
        }
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DC24);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001DDA8);

EntDFF4 *func_8001DFF4(arg0)
s32 arg0;
{
    s16 *p = (s16 *)func_800239A0(0x45E0000);
    while (*p != 0) {
        if (*p == arg0) {
            return (EntDFF4 *)p;
        }
        p = (s16 *)((u8 *)p + 0x10);
    }
    return 0;
}

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

s32 func_8001E1D0(s32 id) {
    EntDFF4 *p = (EntDFF4 *)func_800239A0(0x45E0000);
    s32 i = 0;

    while (p->u0.field_0h != 0) {
        if (p->u0.field_0h == id) {
            return i;
        }
        p++;
        i++;
    }
    return 0;
}

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

extern s32 func_80022038();
extern void func_80022388();

s32 func_8001E514(s32 arg0) {
    EntE4CC *base;
    s32 r;
    s32 i;
    r = func_80023A08(D_8005D560.field_0);
    base = func_8001E4CC(arg0);
    for (i = 0; i < 6; i++) {
        if (func_80022038(func_8001E2E0((ArgE298 *)base, i)) != 0) {
            break;
        }
    }
    if (i == 6) {
        i = 0;
    }
    func_80022388(func_8001E338((ArgE298 *)base, i));
    return base->field_14[i] + r;
}

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

EntE6A8 *func_8001E6A8(s32 id) {
    EntE6A8 *e = (EntE6A8 *)func_800239A0(func_8001E67C(id) << 16);
    s32 k;

    while (1) {
        k = (e->u4.field_4 >> 1) & 0x7FFF;
        if (k == 0) {
            break;
        }
        if (k == id) {
            return e;
        }
        e++;
    }
    return 0;
}

s16 func_8001E704(s32 id) {
    return func_8001E6A8(id)->u4.h4.field_6;
}

s16 func_8001E728(s32 arg0, s32 arg1) {
    return func_8001E6A8(arg0)->field8[arg1];
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E758);

s16 func_8001E79C(s32 id) {
    return func_8001E6A8(id)->field_1E;
}

s16 func_8001E7C0(s32 id) {
    return func_8001E6A8(id)->field_20;
}

void func_8001E7E4(s32 a0, void *a1) {
    u8 *base;
    EntE6A8 *e;
    base = (u8 *)func_800239A0((func_8001E67C(a0) << 16) | 1);
    e = func_8001E6A8(a0);
    *(Row6 *)((u8 *)a1 + 0) = *(Row6 *)(base + e->field_22 * 6);
    e = func_8001E6A8(a0);
    *(Row6 *)((u8 *)a1 + 6) = *(Row6 *)(base + e->field_24 * 6);
    e = func_8001E6A8(a0);
    *(Row6 *)((u8 *)a1 + 12) = *(Row6 *)(base + e->field_26 * 6);
}

s32 func_8001E8D0(s32 id) {
    return func_8001E6A8(id)->u4.field_4 & 1;
}

u16 func_8001E8F4(s32 idx) {
    EntA0 *p = func_800239A0(0x1F80000) + idx;
    return (p->field_4 >> 1) & 0x7FFF;
}

s32 func_8001E938(void) {
    EntA0 *p = func_800239A0(0x1F80000);
    s32 i = 0;
    while ((p->field_4 >> 1) & 0x7FFF) {
        p++;
        i++;
    }
    return i;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001E984);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EB58);

void func_8001EC00(Actor *arg0, s32 *arg1) {
    arg0->work->field_0 = *arg1;
}

void func_8001EC10(Actor *arg0) {
    s32 state = arg0->field_10;

    switch (state) {
    case 0:
        func_80020C40((ContC40 *)arg0, D_80043704, 0);
        func_8001FDBC(arg0, 0x5B)->field_3C = 4;
        func_8001F5E8(arg0);
        func_80011544(arg0);
        break;
    case 1: {
        ActorWork *w = arg0->work;
        Actor *v1 = (Actor *)w->field_0;
        w->field_4 = 0;
        if (v1 != 0) {
            s32 st = v1->field_10;
            if (st != 0 && st != 3) {
                DstElem *de = v1->field_3C->field_78;
                ObjEC10 *dst = arg0->u38.ptr38;
                s32 t = de->field_34;
                dst->field_34 = 0;
                dst->field_30 = t;
                dst->field_38 = de->field_3C;
                w->field_4 = state;
            }
        }
        break;
    }
    case 2:
        break;
    }
}

void func_8001ECE4(Actor *arg0) {
    if (arg0->work->field_4 != 0) {
        func_8001FDBC(arg0, 0x5B);
        func_80020920(arg0);
        func_800200D0(arg0);
        func_80020510(arg0, 1);
    }
}

EntED40 *func_8001ED40(s32 id) {
    EntED40 *p = (EntED40 *)func_800239A0(0x25B0000);

    do {
        if (p->u0.id == id) {
            return p;
        }
    } while ((p++)->u0.id != 0);
    return 0;
}

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

s32 func_8001EE10(s32 id) {
    return func_8001ED40(id)->u0.h0.field_2 & 3;
}

s32 func_8001EE34(s32 id) {
    return (func_8001ED40(id)->u0.field_0 >> 18) & 3;
}

s32 func_8001EE5C(s32 id) {
    return func_8001ED40(id)->field_C;
}

u8 func_8001EE80(s32 id) {
    return func_8001ED40(id)->field_4;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EEA4);

s32 func_8001EF3C(s32 id) {
    return (func_8001ED40(id)->u0.field_0 >> 20) & 0xF;
}

s16 func_8001EF64(s32 id) {
    return func_8001ED40(id)->field_8;
}

u16 func_8001EF88(s32 id) {
    u16 v = func_8001ED40(id)->u0.b0.field_3 & 0xF;

    if (v == 6) {
        return (u16)func_80023910() % 5;
    }
    return v;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8001EFF0);

u8 func_8001F020(s32 id) {
    return func_8001ED40(id)->u10.field_10b;
}

s32 func_8001F044(s32 id) {
    return func_8001ED40(id)->field_20 & 0xF;
}

s32 func_8001F068(s32 id) {
    return func_8001ED40(id)->field_18 & 0x3FFFFFF;
}

s32 func_8001F094(s32 id) {
    return func_8001ED40(id)->field_1C & 0x3FFFF;
}

s32 func_8001F0C0(s32 id) {
    return func_8001ED40(id)->u0.field_0 >> 28;
}

s32 func_8001F0E4(s32 id) {
    return (func_8001ED40(id)->u10.field_10 >> 8) & 0x7FFF;
}

s32 func_8001F10C(s32 id) {
    return func_8001ED40(id)->field_14 & 0x3FF;
}

s32 func_8001F130(s32 id) {
    return (func_8001ED40(id)->field_14 >> 10) & 0x1FFF;
}

s32 func_8001F158(s32 id) {
    return (func_8001ED40(id)->field_1C >> 18) & 0x1F;
}

s32 func_8001F180(s32 id) {
    return (func_8001ED40(id)->field_1C >> 23) & 0xFF;
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

extern Blk20 D_80043714;

void func_8001F5E8(Actor *a0) {
    Sub3C *sub = a0->field_3C;
    DstElem *p = sub->field_78;
    s32 i = 0;
    while (i < sub->field_8) {
        i++;
        p->field_60 = D_80043714;
        p++;
    }
}

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

extern void func_8002D744(void *, Obj209 *);
extern void func_8002D4A4(Obj209 *, s32 *);

void func_80020920(Actor *arg0) {
    Obj209 *obj = (Obj209 *)arg0->u38.ptr38;
    s32 local[3];

    obj->field_20 = obj->field_30;
    func_8002D744(&obj->field_40, obj);
    func_8002CF74((ObjC0E4 *)obj, &obj->field_48, local);
    obj->field_30.x += local[0];
    obj->field_30.y += local[1];
    obj->field_30.z += local[2];
    if (obj->field_58 == 0x1000 && obj->field_5C == obj->field_58 &&
        obj->field_60 == obj->field_5C) {
    } else {
        func_8002D4A4(obj, &obj->field_58);
    }
    obj->field_50 = 0;
    obj->field_4C = 0;
    obj->field_48 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800209F8);

void func_80020C14(s32 arg0) {
    func_80020920(arg0);
    func_800209F8(arg0);
}

extern void func_80022F8C(void *, s32);

void func_80020C40(ContC40 *a0, s32 *a1, u16 a2) {
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

s32 func_80021E54(u8 *arg0, s32 arg1) {
    s32 i = arg1 >> 3;
    s32 m = 1 << (arg1 & 7);

    return (arg0[i] & m) != 0;
}

/* file-local views over D_8005E620 for func_80021E78 */
typedef struct { u8 _p[0x66]; u16 a[1]; } V66_21E78;
typedef struct { u8 _p[0xDD4]; u16 a[1]; } VDD4_21E78;
typedef struct { u8 field_0; u8 field_1; u8 _p[0x5A]; } ElmV_21E78; /* 0x5C */
typedef struct { u8 _p[0xE4]; ElmV_21E78 elems[0x24]; } EntV_21E78;

extern s32 D_8005F624;
extern s32 D_8005F644;
extern s32 D_8005F64C;
extern s32 D_8005F654;
extern s32 D_8005F664;
extern s32 func_80021E54(u8 *, s32);
extern s32 func_80066B48(s32);

s32 func_80021E78(s32 arg0) {
    s32 i;

    if (arg0 < 0x258) {
        return func_80021E54(&D_8005F624, arg0);
    }
    if (arg0 < 0x2BC) {
        return func_80021E54(&D_8005F644, arg0 - 0x258);
    }
    if (arg0 < 0x320) {
        return func_80021E54(&D_8005F64C, arg0 - 0x2BC);
    }
    if (arg0 < 0x3E8) {
        return func_80021E54(&D_8005F654, arg0 - 0x320);
    }
    if (arg0 < 0x44C) {
        return D_8005F664 >= arg0 - 0x3E8;
    }
    if (arg0 < 0x640) {
        return D_8005F664 < arg0 - 0x5DC;
    }
    if (arg0 < 0x8BD) {
        for (i = 0; i < 0x30; i++) {
            if (((V66_21E78 *)&D_8005E620)->a[i] == arg0 - 0x7D0) {
                return 1;
            }
        }
        return 0;
    }
    if (arg0 < 0xBB8) {
        return ((VDD4_21E78 *)&D_8005E620)->a[arg0 - 0x7D0] != 0;
    }
    if (arg0 < 0xFA0) {
        s32 key = arg0 - 0xBB8;
        for (i = 0; i < 0x24; i++) {
            if (((EntV_21E78 *)&D_8005E620)->elems[i].field_1 == key) {
                if (((EntV_21E78 *)&D_8005E620)->elems[i].field_0 >= 2) {
                    return 1;
                }
            }
        }
        return 0;
    }
    if (func_80013378() == 2) {
        return func_80066B48(arg0);
    }
    return 0;
}

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

void func_80022118(s32 arg0) {
    s32 i;
    for (i = 0; i < 0x24; i++) {
        if (D_8005E620.elems[i].field_0 == 0) {
            break;
        }
    }
    func_8001DC24(arg0, 0, &D_8005E620.elems[i]);
    func_80022AE4();
    for (i = 0; i < 3; i++) {
        D_8005E620.elems[i].field_0 =
            (D_8005E620.elems[i].field_0 >= 2) ? (i + 3) : 0;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800221C4);

void func_80022388(Pair22388 *p) {
    s32 i;

    for (i = 0; i < 6; i++) {
        if (p[i].field_0 != -1) {
            func_800221C4(p[i].field_0, p[i].field_2);
        }
    }
}

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

void func_80022D84(ActorWork *arg0) {
    Node22D84 *n = (Node22D84 *)((u8 *)arg0 - 0xC);
    Node22D84 *m = n->field_0;
    Node22D84 *nx = n->field_4;
    n->field_8 = 0;
    if (nx->field_8 == 0) {
        n->field_4 = nx->field_4;
        nx->field_4->field_0 = n;
    }
    if (m->field_8 == 0) {
        m->field_4 = n->field_4;
        n->field_4->field_0 = m;
    }
}

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

void func_8002329C(void) {
    s32 i;
    Elm6A8 *a8 = (Elm6A8 *)D_8005F6A8;

    for (i = 0; i < 2; i++) {
        if (a8[i].field_0 != 0) {
            D_8005F678[i].field_C = 0;
            D_8005F678[i].field_4 = 0;
            D_8005F678[i].field_0 = 0;
            D_8005F678[i].field_10 = 0;
            D_8005F6F0[i].field_3E = 0;
        } else if ((a8[i].field_1 >> 4) == 4) {
            func_800231AC(&a8[i], i);
            D_8005F6F0[i].field_3E = 1;
        } else {
            D_8005F678[i].field_4 = 0;
            D_8005F678[i].field_0 = 0;
            D_8005F678[i].field_10 = 0;
            D_8005F6F0[i].field_3E = 0;
        }
        D_8005F6F0[i].field_8 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x1000);
        D_8005F6F0[i].field_C = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x4000);
        D_8005F6F0[i].field_0 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x2000);
        D_8005F6F0[i].field_4 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x8000);
        D_8005F6F0[i].field_10 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x20);
        D_8005F6F0[i].field_14 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x40);
        D_8005F6F0[i].field_1C = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x10);
        D_8005F6F0[i].field_18 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x80);
        D_8005F6F0[i].field_28 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x4);
        D_8005F6F0[i].field_2C = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x1);
        D_8005F6F0[i].field_20 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x8);
        D_8005F6F0[i].field_24 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x2);
        D_8005F6F0[i].field_30 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x100);
        D_8005F6F0[i].field_34 = func_80023270(D_8005F678[i].field_0, D_8005F678[i].field_4, 0x800);
        D_8005F6F0[i].field_38 = D_8005F678[i].field_4;
        D_8005F6F0[i].field_3A = D_8005F678[i].field_0;
        D_8005F6F0[i].field_3C = D_8005F678[i].field_10;
    }
}

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

Ent23AE8 *func_80023AE8(void) {
    s32 min = D_8005F770.field_0;
    Ent23A78 *p = D_8005F8C8;
    Ent23A78 *best = 0;
    s32 i;
    for (i = 0; i < 0x50; i++, p++) {
        if (p->field_4 == 0) continue;
        if (p->field_2 != 0) continue;
        if (p->field_0 != 3) continue;
        if (min < p->field_8) continue;
        min = p->field_8;
        best = p;
    }
    return (Ent23AE8 *)best;
}

s32 func_80023B70(s32 arg0) {
    Ent23A78 *e = func_80023A78(arg0);

    if (e != 0) {
        e->field_8 = D_8005F770.field_0;
        return e->field_0;
    }
    return 0;
}

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

void func_80023D68(s32 arg0) {
    func_80023BF4(arg0);
    do {
        func_80023C74();
    } while (func_80023B70(arg0) != 3);
}

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

s32 func_80023F90(s32 arg0) {
    return D_80047100[arg0];
}

s32 func_80023FAC(s32 arg0) {
    return D_80043794[arg0];
}

void func_80023FC8(s32 arg0, void *arg1) {
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

void func_8002405C(s32 a0) {
    if (a0 == 1 && func_80023FFC() == 0) {
        func_80030914((void *)D_80048DB8.field_8, 0x200);
        D_80048DB8.field_8 += 0x800;
        D_80048DB8.field_4 -= 1;
        if (D_80048DB8.field_4 != 0) {
            return;
        }
    } else {
        D_80048DB8.field_4 = -1;
    }
    func_80030534(0);
    func_80030690(9, 0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800240E8);

s32 func_80024220(void) {
    switch (D_80048DB8.field_0) {
    case 0:
        return 0;
    case 5:
        D_80048DB8.field_0 = 0;
        return 2;
    }
    return 1;
}

void func_80024260(s32 arg0, s32 arg1) {
    u8 sp10[8];
    s32 r;

    if (D_80048DB8.field_0 != 0) {
        while (func_80024220() != 0) {}
    }
    func_80023FC8(arg0, sp10);
    r = func_80023F90(arg0);
    D_80048DB8.field_4 = r;
    D_80048DB8.field_8 = arg1;
    D_80048DB8.field_10 = r;
    D_80048DB8.field_14 = arg0;
    D_80048DB8.field_18 = arg1;
    D_80048DB8.field_1C = func_80023FAC(arg0);
    D_80048DB8.field_0 += 1;
    func_80030514(func_800240E8);
    func_80030690(2, sp10);
}

void func_80024310(Actor *arg0, Block1C *arg1) {
    *(Block1C *)arg0->work = *arg1;
}

void func_80024350(Actor *arg0) {
    ActorWork *work = arg0->work;

    switch (arg0->field_10) {
    case 0:
        func_80020C40((ContC40 *)arg0, &work->field_8, work->field_14);
        func_8001FDBC(arg0, work->field_0)->field_3C = 3;
        func_8001F24C(arg0, 0, work->field_4);
        func_80011544(arg0);
        break;
    case 1: {
        Sub3C *s = arg0->field_3C;
        if (arg0->field_28 < work->field_18 && s->field_60 >= 0)
            break;
        func_800115C0(arg0, 3);
        break;
    }
    case 2:
        break;
    }
}

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

void func_80024610(void) {
    func_80026FC4();
    func_80027004(3, 1);
    func_80026FF4(2, D_80048E78);
    func_80026FD4();
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024654);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024704);

void func_800247F4(Obj25FBC *a0) {
    u8 *p;
    s32 k;
    u8 c;

    if (a0->field_49 != 0) {
        p = a0->field_5D;
        c = 0xFF;
        k = 5;
        a0->field_49 = 0;
        a0->field_46 = 0;
        a0->field_E6 = 0;
        a0->field_14 = 0;
        a0->field_18 = 0;
        a0->field_E3 = 0;
        a0->field_E4 = 0;
        a0->field_E6 = 0;
        a0->field_E9 = 0;
        a0->field_EA = 0;
        a0->field_0 = 0;
        a0->field_4 = 0;
        a0->field_8 = 0;
        do {
            *p = c;
            k--;
            p++;
        } while (k >= 0);
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002485C);

s32 func_80024950(Actor *arg0) {
    s32 tmp = arg0->u34.b.field_37;
    arg0->u34.b.field_37 = 0;
    arg0->u38.field_38 = tmp;
    return tmp;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024960);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024A1C);

u8 *func_80024C98(s32 arg0) {
    u8 *p = D_8005FDD8;

    if (arg0 & 0xF0) {
        p += 0xF0;
    }
    return p;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024CB8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80024DC8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025034);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025114);

s32 func_80025144(void) {
    if (!(D_80048E8C->field_4 & 1)) {
        return 0;
    }
    if (!(D_80048E8C->field_0 & 1)) {
        return 0;
    }
    if (D_80048E40 != 0) {
        D_80048E40();
    }
    return 1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800251AC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002533C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025670);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025760);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80025984);

s32 func_80025C00(void) {
    Regs48E8C *q = D_80048E8C;
    Stat48E90 *st = D_80048E90;

    q->field_0 = -0x81;
    if (st->field_4 & 0x80) {
        do {
            if (func_80026630() != 0) {
                return 0;
            }
        } while (D_80048E90->field_4 & 0x80);
    }
    D_80048E90->field_A |= 0x10;
    return 1;
}

void func_80025C90(void) {
    while (!(D_80048E90->field_4 & 2)) {
    }
}

void func_80025CB8(Actor *arg0, u8 arg1, ActorWork *arg2, u8 arg3) {
    arg0->u34.b.field_37 = arg1;
    arg0->work = arg2;
    arg0->u34.b.field_36 = arg3;
}

void func_80025CC8(Obj25FBC *a0) {
    switch (a0->field_46) {
    case 2:
        func_80026588((Actor *)a0);
        break;
    case 3:
        func_8002659C((Actor *)a0, a0->field_E4);
        break;
    case 4:
        func_800265DC((Actor *)a0, a0->field_47);
        break;
    }
}

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

void func_80026610(s32 arg0) {
    D_80060050 = arg0;
    D_8006004C = *(volatile u16 *)0x1F801120;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80026630);

void func_800266D0(Ent266D0 *a0) {
    D_80048E98 = D_80048E30(a0);
    *a0->field_3C = 0;
    func_80025760(a0, -2);
}

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

u8 func_80027278(u8 level) {
    s32 old = D_80048F10.field_2;

    D_80048F10.field_2 = level;
    if (level) {
        D_80048F0C(D_80010250, D_80048F10.field_2, D_80048F10.field_0, D_80048F10.field_3);
    }
    return old;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800272D4);

u8 func_80027378(void) {
    return D_80048F12;
}

s32 func_80027388(s32 a0) {
    s32 old;

    if (D_80048F10.field_2 >= 2) {
        D_80048F0C(D_80010290, a0);
    }
    old = D_80048F10.field_C;
    D_80048F10.field_C = a0;
    return old;
}

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

void func_8002772C(s32 a0, s32 a1) {
    func_800274E8(D_80010310, a0);
    D_80048F08->fn_8(D_80048F08->field_20, a0, 8, a1);
}

void func_8002778C(s32 a0, s32 a1) {
    func_800274E8(D_8001031C, a0);
    D_80048F08->fn_8(D_80048F08->field_1C, a0, 8, a1);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800277EC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800278A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002796C);

void func_80027A18(Ent27A18 *a0) {
    s32 n = a0->field_3;

    D_80048F08->fn_3C(0);
    D_80048F08->fn_14(a0->field_4, n);
}

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

extern s32 func_80028754(s16, s16);
extern s32 func_800287EC(s16, s16);

void func_8002820C(Obj8228C *a0, Pt8228C *a1) {
    a0->field_3 = 2;
    a0->field_4 = func_80028754(a1->field_0, a1->field_2);
    a0->field_8 = func_800287EC((s16)(a1->field_0 + a1->field_4 - 1),
                                (s16)(a1->field_2 + a1->field_6 - 1));
}

void func_8002828C(Obj8228C *arg0, Pt8228C *arg1) {
    arg0->field_3 = 2;
    arg0->field_4 = func_80028884(arg1->field_0, arg1->field_2);
    arg0->field_8 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800282CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800284C4);

int func_80028734(int a0, int a1, int a2) {
    int v1 = 0xE1000000;
    int v0;
    if (a1) v1 = 0xE1000200;
    v0 = a2 & 0x9FF;
    if (a0) v0 |= 0x400;
    return v0 | v1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028754);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800287EC);

s32 func_80028884(s32 arg0, s32 arg1) {
    return 0xE5000000 | ((arg1 & 0x7FF) << 11) | (arg0 & 0x7FF);
}

u32 func_800288A0(Rect288A0 *tw) {
    s32 t[4];

    if (tw != 0) {
        t[0] = (tw->x & 0xFF) >> 3;
        t[2] = (-tw->w & 0xFF) >> 3;
        t[1] = (tw->y & 0xFF) >> 3;
        t[3] = (-tw->h & 0xFF) >> 3;
        return 0xE2000000 | (t[1] << 15) | (t[0] << 10) | (t[3] << 5) | t[2];
    }
    return 0;
}

s32 func_80028920(void) {
    return *D_80049018;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028938);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028A18);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028C48);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80028E84);

void func_80029104(s32 arg0) {
    *D_80049018 = arg0;
}

void func_80029118(void) {
}

s32 func_80029120(s32 *arg0, u32 arg1) {
    *D_80049018 = 0x4000000;
    while (arg1-- != 0) {
        *D_80049014 = *arg0++;
    }
    return 0;
}

void func_80029160(s32 arg0) {
    *D_80049018 = 0x4000002;
    *D_8004901C = arg0;
    *D_80049020 = 0;
    *D_80049024 = 0x1000401;
}

s32 func_800291A8(s32 arg0) {
    *D_80049018 = arg0 | 0x10000000;
    return *D_80049014 & 0xFFFFFF;
}

void func_800291D8(s32 arg0, s32 arg1, s32 arg2) { func_800291FC(arg0, arg1, 0, arg2); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800291FC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800294AC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002970C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029848);

void func_80029984(void) {
    D_8004904C = func_80030AB4(-1) + 0xF0;
    D_80049050 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800299B8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029AFC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029B9C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029C88);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029D74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80029EB8);

void func_80029FB4(void) { func_80030D34(0x2, func_800294AC); }

void func_80029FDC(u8 *arg0, s32 arg1, u32 arg2) {
    while (arg2-- != 0) {
        *arg0++ = arg1;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A004);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A014);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A054);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A6F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A744);

void func_8002A840(void) {
    if (D_80049064 > 0) {
        func_8002A9A4(1, D_800618B0);
        D_80049064 = 0;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A87C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A9A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A9B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002A9F4);

Rec2AAB4 *func_8002AAB4(Rec2AAB4 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    arg0->field_0 = arg1;
    arg0->field_2 = arg2;
    arg0->field_4 = arg3;
    arg0->field_8 = 0;
    arg0->field_A = 0;
    arg0->field_C = 0;
    arg0->field_E = 0;
    arg0->field_11 = 0;
    arg0->field_10 = 0;
    arg0->field_13 = 0;
    arg0->field_12 = 0;
    arg0->field_6 = arg4;
    return arg0;
}

void func_8002AAF4(unsigned int *a0, unsigned int *a1) {
    *a1 = (*a1 & 0xFF000000) | (*a0 & 0x00FFFFFF);
    *a0 = (*a0 & 0xFF000000) | ((unsigned int)a1 & 0x00FFFFFF);
}

void func_8002AB34(u8 *a0) {
    a0[3] = 5;
    a0[7] = 0x28;
}

void func_8002AB54(DrMove2AB54 *p, Rect2AB54 *r, s32 x, s32 y) {
    s32 len = 5;

    if (r->w == 0 || r->h == 0) {
        len = 0;
    }
    p->code[0] = 0x01000000;
    p->code[1] = 0x80000000;
    p->len = len;
    p->code[2] = *(u32 *)&r->x;
    p->code[3] = (y << 16) | (x & 0xFFFF);
    p->code[4] = *(u32 *)&r->w;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002ABB4);

void func_8002AC54(u16 a0, u16 a1, u16 a2, u16 a3, u16 a4) {
    func_8002ACC8(a0, a1, a2, a3, a4);
    func_8002BB84();
    D_8006198C = 0;
    func_8002AE4C(a0, a1);
    func_8002B2B4();
    func_8002B1A4();
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002ACC8);

void func_8002ADE4(s16 a0, s16 a1, s32 flags, u8 a3, u16 a4) {
    D_8006191C.field_0 = 0;
    D_8006191C.field_2 = a3;
    D_8006191C.field_3 = 0;
    D_8006191C.field_4 = 0;
    D_8006196C.field_0 = a0;
    D_8006196C.field_2 = a1;
    D_8006196C.field_C = flags & 1;
    D_8006198E = flags & 4;
    D_8006196C.field_D = a4;
    func_8002AE4C((u16)a0, (u16)a1, flags & 4);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002AE4C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B06C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B1A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B2B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B334);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B424);

extern void func_8002D5E4();
extern s32 func_8002D644();

s32 func_8002B494(s32 a0) {
    func_8002D5E4(a0);
    return func_8002D644(a0);
}
__asm__(".word 0\n");

void func_8002B4C4(void) {
    D_80061900.field_0 = D_80061990 / 2;
    D_80061900.field_2 = D_80061994 / 2;
    func_8002B1A4(&D_80061900);
    D_800619A0 = 10;
    D_8006199C = 0;
    D_80061998 = 0x3FFF;
}

void func_8002B544(s32 arg0) { func_8002D6C4(); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002B564);

typedef struct {
    s32 w[8];
} S32;
extern S32 D_800619C8;
extern void func_8002D614(S32 *);

void func_8002BA1C(S32 *src) {
    D_800619C8 = *src;
    func_8002D614(src);
}
void func_8002BA80(S32 *dst) { *dst = D_800619C8; }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002BAD4);

void func_8002BB54(s32 arg0, s32 arg1, s32 arg2) { func_8002D664(arg0 >> 4, arg1 >> 4, arg2 >> 4); }

void func_8002BB84(void) {
    func_8002CE5C();
    func_8002D684(0, 0, 0);
    func_8002D6A4(0, 0);
    D_8006197E = 0;
    D_8006197C = 0;
}

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

extern s32 func_8002CBC4(s32);
extern s32 func_8002CAF4(s32);

void func_8002C774(ObjC0E4 *a0, s32 a1) {
    ArgC0E4 mtx;
    s32 a = a1 / 360;
    s32 c = func_8002CBC4(a);
    s32 s = func_8002CAF4(a);
    if (a1 == 0) {
        return;
    }
    mtx.m[0][0] = c;
    mtx.m[0][1] = -s;
    mtx.m[0][2] = 0;
    mtx.m[1][0] = s;
    mtx.m[1][1] = c;
    mtx.m[1][2] = 0;
    mtx.m[2][0] = 0;
    mtx.m[2][1] = 0;
    mtx.m[2][2] = 0x1000;
    mtx.field_14 = 0;
    mtx.field_18 = 0;
    mtx.field_1C = 0;
    func_8002D224(a0, &mtx);
}
__asm__(".word 0\n.word 0\n.word 0\n");

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002C834);

s32 func_8002CAF4(s32 arg0) {
    if (arg0 < 0) {
        return -func_8002CB30(-arg0 & 0xFFF);
    }
    return func_8002CB30(arg0 & 0xFFF);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CB30);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CBC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002CC64);

extern s32 func_8002DBB4(s32);
extern s32 func_8002CC64(s32);

s32 func_8002CDB8(s32 a0) {
    s32 e, sh, x;
    if (a0 == 0) {
        return 0;
    }
    e = 8 - func_8002DBB4(a0);
    if (e >= 0) {
        sh = e >> 1;
        x = a0 >> (sh << 1);
    } else {
        sh = (e >> 1) + 1;
        x = a0 << (-(sh << 1));
    }
    sh -= 6;
    if (sh >= 0) {
        return func_8002CC64(x) << sh;
    }
    return func_8002CC64(x) >> (-sh);
}
__asm__(".word 0\n");

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

void func_8002DBD4(s32 arg0, s32 arg1) {
    D_80061B38 = arg0;
    D_80061B3C = arg1;
    func_8002DE94();
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DC04);

s32 func_8002DC94(void) {
    if (func_8002FF04() != 0) {
        return 0;
    }
    return func_8002FDC8() == 0;
}

void func_8002DCD0(void) { func_8002DD54(0xF0000003, 0x20); }

void func_8002DCF8(void) { func_8002DD54(0xF0000003, 0x40); }

void func_8002DD20(void) { func_8002DD54(0xF0000003, 0x40); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DD54);

s32 func_8002DD64(void *arg) {
    u8 *p = arg;

    return (((p[0] >> 4) * 10 + (p[0] & 0xF)) * 60
          + ((p[1] >> 4) * 10 + (p[1] & 0xF))) * 75
         + ((p[2] >> 4) * 10 + (p[2] & 0xF)) - 150;
}

extern s32 D_80061B98;
extern void func_8002DE68(void);

void func_8002DDE4(s32 arg0) {
    u8 b = arg0;

    func_80030554(0xE, &b, 0);
    if (arg0 & 0x100) {
        if (arg0 & 0x20) {
            D_80061B98 = 0;
        } else {
            D_80061B98 = 1;
        }
        func_80030A34((s32)func_8002DF74);
        func_80030534((s32)func_8002DE68);
    }
    func_80030554(0x1B, 0, 0);
}

void func_8002DE68(void) { func_8002E2C4(); }

void func_8002DE94(void) {
    D_80061B24 = 0;
    D_80061B20 = 0;
    D_80061B1C = 0;
    D_80061B14 = 0;
    func_8002E1A4(0, D_80061B3C);
    D_80061B04 = 0;
    D_80061AFC = 0;
    D_80061AF8 = 0;
}

void func_8002DEF4(void) {
    func_80026FC4();
    if (D_8004E6E8 == 1) {
        func_80030A84(0);
        func_80030A64(0);
    } else {
        func_80030A34(0);
        func_80030534(0);
    }
    *D_8004E600 = 0;
    *D_8004E60C = 0;
    func_80026FD4();
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002DF74);

extern s32 D_80061B98;
extern s32 D_80061B40;
extern s32 D_80061B44;

s32 func_8002E000(s32 arg0) {
    s32 t;
    if (D_80061B98 != 0) {
        return -1;
    }
    t = func_8002DD64(&D_80061B40);
    func_80030394(t + 1, arg0);
    return D_80061B44;
}
__asm__(".word 0\n.word 0\n.word 0\n");

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E064);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E0F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E1A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002E1E4);

extern s32 D_80061B30, D_80061B0C, D_80061B2C;
void func_8002E2A4(s32 a0, s32 a1, s32 a2) {
    D_80061B30 = a0;
    D_80061B0C = a1;
    D_80061B2C = a2;
}

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

extern u8 *D_8004E98C;
extern u8 *D_8004E99C;
extern u8 *D_8004E990;
extern u8 *D_8004E998;
s32 func_8002FC6C(u8 *a0) {
    *D_8004E98C = 2;
    *D_8004E99C = a0[0];
    *D_8004E990 = a0[1];
    *D_8004E98C = 3;
    *D_8004E998 = a0[2];
    *D_8004E99C = a0[3];
    *D_8004E990 = 0x20;
    return 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FCF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FDC8);

void func_8002FEB8(void) {
    D_8004E6CC = 0;
    D_8004E6C8 = 0;
    D_8004E6D8 = 0;
    D_8004E6D4 = 0;
    func_80030CD4();
    func_80030D04(2, func_80030258);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8002FF04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800300E4);

extern s32 D_8004E970;
void func_8003024C(s32 a0) {
    D_8004E970 = a0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030258);

void func_80030334(s8 *s) {
    s8 c;

    if (!s) {
        s = D_80010974;
    }
    for (; (c = *s) != 0; ) {
        s++;
        func_8002A744(c);
    }
    func_8002A840();
}

u8 *func_80030394(a0, a1)
s32 a0;
u8 *a1;
{
    s32 D = a0 + 0x96;
    s32 q1 = D / 75;
    s32 r1 = D % 75;
    s32 q2 = q1 / 60;
    s32 r2 = q1 % 60;
    a1[2] = (r1 / 10) * 16 + r1 % 10;
    a1[1] = (r2 / 10) * 16 + r2 % 10;
    a1[0] = (q2 / 10) * 16 + q2 % 10;
    return a1;
}
__asm__(".word 0\n.word 0\n.word 0\n");

u8 func_800304A4(void) {
    return D_8004E6E5;
}

s32 func_800304B4(s32 a0) { s32 old = D_8004E6D0; D_8004E6D0 = a0; return old; }

void func_800304D4(void) { func_8002F318(); }

void func_800304F4(void) { func_8002F598(); }

void *func_80030514(void *a0) { void *old = D_8004E6C8; D_8004E6C8 = a0; return old; }

s32 func_80030534(s32 a0) { s32 old = D_8004E6CC; D_8004E6CC = a0; return old; }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030554);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030690);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800307C4);

s32 func_80030914(void *arg0, s32 arg1) {
    return func_80030934() == 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030934);

void func_80030A34(s32 arg0) { func_80030D34(3, arg0); }

extern s32 D_80061BA4;
int func_80030A64(int a0) {
    int old = D_80061BA4;
    D_80061BA4 = a0;
    return old;
}

void func_80030A84(s32 arg0) { func_80030D34(3, arg0); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030AB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030C2C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80030CC4);

void func_80030CD4(void) {
    D_8004FB80->fn_C();
}

void func_80030D04(s32 arg0, void (*arg1)()) {
    D_8004FB80->fn_8(arg0, arg1);
}

void func_80030D34(s32 arg0, s32 arg1) {
    D_8004FB80->fn_4(arg0, arg1);
}

void func_80030D64(s32 arg0) {
    D_8004FB80->fn_14(4, arg0);
}

void func_80030D98(void) {
    D_8004FB80->fn_14();
}

void func_80030DC8(void) {
    D_8004FB80->fn_10();
}

void func_80030DF8(void) {
    D_8004FB80->fn_18();
}

u16 func_80030E28(void) {
    return D_8004EAFA;
}

u16 func_80030E38(void) {
    return *D_8004FB88;
}

int func_80030E50(int a0) {
    int old = *D_8004FB88;
    *D_8004FB88 = a0;
    return old;
}

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

extern void func_800314BC(void);
extern void func_80031528(s32 arg0, void (*arg1)(void));

void (*func_80031464(void))(s32, void (*)(void)) {
    *D_8004FBC4 = 0x100;
    D_8004FBC0 = 0;
    func_80031554(D_8004FBA0, 8);
    func_80030D04(0, func_800314BC);
    return func_80031528;
}

void func_800314BC(void) {
    void (**p)(void);
    s32 i;

    i = 0;
    p = D_8004FBA0;
    D_8004FBC0++;
    do {
        if (*p != 0) {
            (*p)();
        }
        i++;
        p++;
    } while (i < 8);
}

void func_80031528(s32 arg0, void (*arg1)(void)) {
    if (arg1 != D_8004FBA0[arg0]) {
        D_8004FBA0[arg0] = arg1;
    }
}

void func_80031554(s32 *arg0, u32 arg1) {
    while (arg1-- != 0) {
        *arg0++ = 0;
    }
}

void *func_80031584(void) {
    func_800317FC(D_8004FBD4, 8);
    *D_8004FBD0 = 0;
    func_80030D04(3, func_800315D0);
    return func_80031750;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800315D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031750);

void func_800317FC(s32 *arg0, u32 arg1) {
    while (arg1-- != 0) {
        *arg0++ = 0;
    }
}

s32 func_80031824(s32 a0) { s32 old = D_8004FC00; D_8004FC00 = a0; return old; }

s32 func_80031838(void) {
    return D_8004FC00;
}
__asm__(".word 0\n.word 0\n.word 0\n");

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031854);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031AC4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031CD4);

void func_80031D74(s16 arg0, s16 arg1) { func_80031DA4(arg0, arg1); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031DA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80031EA0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800320E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032494);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032544);

void func_80032644(s16 a0, s16 a1) {
    D_80061C50[a0][a1].field_14 = 1;
    D_80061C50[a0][a1].field_98 &= ~8;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800326A4);

void func_80032820(s16 arg0) { func_800326A4(arg0); }

void func_80032844(s16 arg0) { func_800326A4(arg0); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032874);

void func_80032914(void) {
    func_80030CD4();
    func_8003A034();
    func_8003C3A4(7);
    func_80032874();
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032954);

void func_80032C54(s16 arg0, s16 arg1, s16 arg2) {
    Elm354F4 *e = &D_80061C50[arg0][arg1];
    e->field_26 = *e->field_0++;
    e->field_90 = func_80032494(arg0, arg1);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80032CD4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033054);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033124);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800331F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800332E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033394);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033424);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033524);

void func_80033664(s16 arg0, s16 arg1, s16 arg2) {
    Elm354F4 *e = &D_80061C50[arg0][arg1];
    e->field_18 = arg2;
    e->field_1E++;
    e->field_90 = func_80032494(arg0, arg1);
}

void func_800336D4(s16 arg0, s16 arg1, s16 arg2) {
    Elm354F4 *e = &D_80061C50[arg0][arg1];
    e->field_19 = arg2;
    e->field_1E++;
    e->field_90 = func_80032494(arg0, arg1);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033804);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033894);

extern void func_80036164();
extern void func_80036594();
void func_80033954(s16 a0, s16 a1, s16 a2, HandlerArg d) {
    s32 flag = d.field_24;

    func_80036164(a0, a1, a2, &d);
    d.field_6 = flag;
    func_80036594(a0, a1, a2, &d);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800339E4);

/* By-value struct arg spanning a3 + stack (0x28 bytes); only three fields
   are touched here. func_80036164/func_80036594 receive its address. */
typedef struct {
    u8 pad0[0x10];
    /* 0x10 */ u16 field_10;
    /* 0x12 */ u16 field_12;
    u8 pad1[0x24 - 0x14];
    /* 0x24 */ u8 field_24;
    u8 pad2[0x28 - 0x25];
} Arg33;

extern void func_80036164();
extern void func_80033B80();
extern void func_80036594();
void func_80033B24(u32, u32, Out33B24 *);

void func_80033A74(s16 a0, s16 a1, s16 a2, Arg33 d) {
    Out33B24 buf;
    u16 flag = d.field_24;
    func_80036164(a0, a1, a2, &d);
    func_80033B24(d.field_10, d.field_12, &buf);
    buf.field_A = 0;
    buf.field_0 = flag;
    func_80033B80(&buf, &d.field_10, &d.field_12);
    func_80036594(a0, a1, a2, &d);
}

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

void func_80033E44(s16 a0, s16 a1, s16 a2, Arg33 d) {
    Out33B24 buf;
    u16 flag = d.field_24;
    func_80036164(a0, a1, a2, &d);
    func_80033B24(d.field_10, d.field_12, &buf);
    buf.field_C = 0;
    buf.field_6 = flag;
    func_80033B80(&buf, &d.field_10, &d.field_12);
    func_80036594(a0, a1, a2, &d);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80033EF4);

void func_80033FB4(s16 a0, s16 a1, s16 a2, Arg33 d) {
    Out33B24 buf;
    u16 flag = d.field_24;
    func_80036164(a0, a1, a2, &d);
    func_80033B24(d.field_10, d.field_12, &buf);
    buf.field_E = 0;
    buf.field_8 = flag;
    func_80033B80(&buf, &d.field_10, &d.field_12);
    func_80036594(a0, a1, a2, &d);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034064);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034114);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800341F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034294);

void func_80034334(s16 arg0, s16 arg1, s16 arg2, HandlerArg arg) {
    func_80036474((u8)arg.field_24);
}

void func_80034364(s16 arg0, s16 arg1, s16 arg2, HandlerArg arg) {
    func_800363E4((u8)arg.field_24, (u8)arg.field_24);
}

void func_80034394(s16 arg0, s16 arg1, s16 arg2, HandlerArg arg) {
    func_80036514((u8)arg.field_24);
}

void func_800343C4(s16 arg0, s16 arg1, s16 arg2, HandlerArg arg) {
    func_800363A4((u8)arg.field_24);
}

void func_800343F4(s16 arg0, s16 arg1, s16 arg2, HandlerArg arg) {
    func_800363A4((u8)arg.field_24);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034424);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800344D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034704);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800348D4);

void func_800349B4(s16 arg0, s16 arg1, s16 arg2) {
    Elm354F4 *e = &D_80061C50[arg0][arg1];
    e->field_37[e->field_17] = arg2;
    e->field_90 = func_80032494(arg0, arg1);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034A24);

void func_80034E04(s16 arg0, s16 arg1, s8 arg2, s16 arg3) { func_80034E44(arg0, arg1, arg2, arg3); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034E44);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80034F64);

void func_80035024(s16 a0, s16 a1) {
    Cmd3D124 c;

    c.field_0 = 3;
    c.field_4 = a0 * 0x81;
    c.field_6 = a1 * 0x81;
    func_8003D124(&c);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035074);

void func_800352A4(void) { func_80035074(1); }

void func_800352C4(void) { func_80035074(0); }

void func_800352E4(void) {
    if (D_8004FC50.fn_4 != 0) {
        D_8004FC50.fn_4();
    }
    D_8004FC50.fn_0();
}

void func_80035330(void) {
    if (D_8004FC5C == 0) {
        D_8004FC5C = 1;
    } else {
        D_8004FC5C = 0;
        D_8004FC50.fn_0();
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035384);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035420);

s32 func_80035458(u16 arg0) {
    s32 i = arg0;

    D_8004FC68->field_4 |= D_8004FC70[i];
    return i < 3;
}

s32 func_80035488(u16 arg0) {
    D_8004FC68->field_4 &= ~D_8004FC70[arg0];
    return 1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800354BC);

extern void func_800391B4(s32);
extern void func_80036764(void);

void func_800354F4(s32 arg0, s32 arg1) {
    Elm354F4 *e;
    s32 i;
    s32 idx = (s16)arg0;

    e = &D_80061C50[idx][(s16)arg1];
    e->field_98 &= ~1;
    D_80061C50[(s16)arg0][(s16)arg1].field_98 &= ~2;
    D_80061C50[(s16)arg0][(s16)arg1].field_98 &= ~8;
    D_80061C50[(s16)arg0][(s16)arg1].field_98 &= ~0x400;
    D_80061C50[(s16)arg0][(s16)arg1].field_98 |= 4;
    func_800391B4((s16)(arg0 | (arg1 << 8)));
    func_80036764();

    e->field_14 = 0;
    e->field_88 = 0;
    e->field_1C = 0;
    e->field_18 = 0;
    e->field_19 = 0;
    e->field_1E = 0;
    e->field_1A = 0;
    e->field_1B = 0;
    e->field_1F = 0;
    e->field_17 = 0;
    e->field_21 = 0;
    e->field_1C = 0;
    e->field_1D = 0;
    e->field_15 = 0;
    e->field_16 = 0;
    e->field_90 = e->field_84;
    e->field_94 = e->field_8C;
    e->field_54 = e->field_56;
    e->field_0 = e->field_4;
    e->field_8 = e->field_4;

    for (i = 0; i < 0x10; i++) {
        e->field_37[i] = i;
        e->field_27[i] = 0x40;
        e->field_60[i] = 0x7F;
    }
    e->field_5C = 0x7F;
    e->field_5E = 0x7F;
}

void func_80035674(s16 arg0) { func_800354F4(arg0, 0); }

void func_8003569C(s16 arg0, s16 arg1) { func_800354F4(arg0, arg1); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800356D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800357E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035A04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035B54);

void func_80035BE4(s16 a0, s16 a1, s16 a2) {
    Elm354F4 *e = D_80061C50[a0];

    if (e->field_98 != 1) {
        e->field_58 = a1;
        e->field_5A = a2;
    } else {
        func_80038BE4(a0, (u16)a1, (u16)a2, 1);
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035C4C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035CE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80035F04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036054);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036164);

void func_800363A4(s16 arg0) {
    D_80062C18.field_0 = 8;
    D_80062C18.field_C = arg0;
    func_8003B994(&D_80062C18);
}

void func_800363E4(s16 arg0, s16 arg1) {
    D_80062C18.field_0 = 6;
    D_80062C18.field_8 = arg0 * 0x7FFF / 127;
    D_80062C18.field_A = arg1 * 0x7FFF / 127;
    func_8003B994(&D_80062C18);
}

s16 func_80036474(s16 arg0) {
    s32 neg = 0;
    s16 v = arg0;
    s16 r;

    if (arg0 < 0) {
        neg = 1;
        v = -arg0;
    }
    if ((u16)v < 10) {
        Cmd62C18 *c = &D_80062C18;

        c->field_0 = 1;
        if (neg) {
            c->field_4 = (s16)(v | 0x100);
        } else {
            c->field_4 = v;
        }
        r = v;
        if (r == 0) {
            func_8003B794(0);
        }
        func_8003B994(&D_80062C18);
        return r;
    }
    return -1;
}

void func_80036514(s16 arg0) {
    D_80062C18.field_0 = 0x10;
    D_80062C18.field_10 = arg0;
    func_8003B994(&D_80062C18);
}

void func_80036554(void) { func_8003B794(0); }

void func_80036574(void) { func_8003B794(1); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036594);

extern u16 D_80062CB0;
void func_80036764(void) {
    D_80062CB0 = 0;
}

void func_80036774(void) {
    D_80062CB0 = 2;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036784);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036C54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80036FA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800374C0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037620);

void func_8003770C(s16 arg0, s16 arg1, u16 arg2) { func_800374C0(0x21, arg0, arg1, arg2); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800379B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037B84);

u16 func_80037BD0(s16 a0, s16 a1) {
    s16 i = D_80062D18.field_7 * 16 + (s8)D_80062D18.field_C;
    return func_80037C38(a0, a1, D_80062D08[i].field_4, D_80062D08[i].field_5);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037C38);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80037D64);

void func_800382D4(u8 arg0) {
    D_800624E8[arg0].field_1D = 0;
    D_800624E8[arg0].field_0 = 0;
    D_800624E8[arg0].field_4 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80038314);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800383D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800388A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80038A90);

s32 func_80038B74(s16 a0, s16 a1, s32 a2) {
    if (func_800398D4(a0, a1) != 0) {
        return -1;
    }
    D_80062CFC[a1].field_1 = a2;
    return D_80062CFC[a1].field_1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80038BE4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039150);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800391B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039264);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039334);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800398D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039994);

s16 func_80039A44(s32 arg0, s16 arg1) {
    return func_80039B54(arg0, arg1, func_80039A78, 0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039A78);

s16 func_80039AE4(s32 arg0, s16 arg1, s32 arg2) {
    return func_80039B54(arg0, arg1, func_80039B4C, arg2);
}

s16 func_80039B18(s32 arg0, s16 arg1, s32 arg2) {
    return func_80039B54(arg0, arg1, func_80039B4C, arg2);
}

s32 func_80039B4C(s32 arg0, s32 arg1) {
    return arg1;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039B54);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80039F44);

extern s16 func_8003C804();

s16 func_8003A004(s16 a0) {
    do { } while (0);
    return func_8003C804(a0);
}
__asm__(".word 0\n.word 0\n");

void func_8003A034(void) { func_8003A054(0); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A054);

void func_8003A13C(void) {
    if (D_8004FE18 == 0) {
        D_8004FE18 = 1;
        func_80026FC4();
        func_8003AD14((s32)func_8003A614);
        D_8004FDB0 = func_8003A1B4(0xF0000009, 0x20, 0x2000, 0);
        func_8003A1C4(D_8004FDB0);
        func_80026FD4();
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A1B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A1C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A1D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A454);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A614);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A6D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A778);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003A9F8);

s32 func_8003AA7C(s32 a0, s32 a1) {
    func_8003A778(2, D_8004FE40 << D_8004FE50);
    func_8003A778(0);
    func_8003A778(3, a0, a1);
    return a1;
}

void func_8003AAE0(s32 arg0, u32 arg1, s32 arg2) {
    if (arg2 == 0) {
        D_8004FE28[arg0] = arg1;
    } else {
        D_8004FE28[arg0] = arg1 >> D_8004FE50;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003AB24);

s32 func_8003ABC8(s32 a0, s32 a1) {
    u16 x = D_8004FE28[a0];
    if (a1 == -1) return x;
    return x << D_8004FE50;
}

void func_8003AC04(s32 a0) {
    *D_8004FE38 &= 0xFFF8FFFF;
    if (a0 != 0) {
        *D_8004FE38 |= 0x30000;
    } else {
        *D_8004FE38 |= 0x50000;
    }
}

extern u32 *D_8004FE3C;
void func_8003AC5C(void) {
    *D_8004FE3C = (*D_8004FE3C & 0xF0FFFFFF) | 0x20000000;
}

void func_8003AC84(void) {
    *D_8004FE3C = (*D_8004FE3C & 0xF0FFFFFF) | 0x22000000;
}

void func_8003ACAC(void) {
    volatile s32 i;
    volatile s32 x;

    x = 13;
    for (i = 0; i < 60; i++) {
        x *= 13;
    }
}

void func_8003AD14(s32 arg0) { func_80030D34(4, arg0); }

s32 func_8003AD44(s32 n, Hdr3AD44 *h) {
    if (n > 0) {
        h->field_0 = 0x40001010;
        D_8004FE90 = h;
        D_8004FE8C = 0;
        D_8004FE88 = n;
        h->field_4 = (0x10000 << D_8004FE50) - 0x1010;
        return n;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003ADA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B074);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B374);

void func_8003B3F4(s32 arg0, s32 arg1) { func_8003B424(arg0, arg1, 0xCA, 0xCB); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B424);

void func_8003B6E4(void) { func_8003B714(0xCA, 0xCB); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B714);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B744);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B794);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B884);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B904);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003B994);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003BE74);

void func_8003C344(s32 arg0, s32 arg1) { func_8003B424(arg0, arg1, 0xCC, 0xCD); }

void func_8003C374(void) { func_8003B714(0xCC, 0xCD); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C3A4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C544);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C554);

u32 func_8003C714(s32 a0, u32 n) {
    if (n > 0x7EFF0) {
        n = 0x7EFF0;
    }
    func_8003A9F8(a0, n);
    if (D_8004FE60 == 0) {
        D_8004FE5C = 0;
    }
    return n;
}

s32 func_8003C774(u32 addr) {
    if (addr - 0x1010 > 0x7EFE8) {
        return 0;
    }
    D_8004FE40 = func_8003AB24(-1, addr);
    return D_8004FE40 << D_8004FE50;
}

void func_8003C7D4(s32 arg0) {
    s32 v;

    switch (arg0) {
    case 0:
        v = 0;
        break;
    case 1:
        v = 1;
        break;
    default:
        v = 0;
        break;
    }
    D_8004FDB8 = arg0;
    D_8004FE44 = v;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C804);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C8B4);

void func_8003C8C4(s32 arg0) {
    if (arg0 == 1) {
        D_8004FE5C = 0;
    } else {
        D_8004FE5C = 1;
    }
}

s32 func_8003C8EC(void) {
    return (D_8004FE5C ^ 1) != 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003C904);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003CF04);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003CFD4);

void func_8003D104(s32 a0, u16 *a1) {
    *a1 = D_8004FE28[a0 * 8 + 6];
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D124);

void func_8003D4A4(void) {
    func_8003D504();
    func_8003D594();
    func_8003D4F4();
}

void func_8003D4D4(void) { func_8003D5DC(); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003D4F4);

extern s32 func_8003D610(void);
extern void func_8003D9D4(s32);
extern void func_8003DBE4(void);
extern void func_8003DAE0(void);
extern void func_8003DB74(void);
extern void func_8003DA04(void);

/* K&R definition: func_8003D4A4 / func_8003FBC4 call it without arguments. */
void func_8003D504(a0)
s32 a0;
{
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

extern s32 D_800506B8;
void func_8003D604(s32 a0) {
    D_800506B8 = a0;
}

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

void func_8003DCA4(void) {
    D_80062FD8 = func_8003F178(0);
}

void func_8003DCCC(void) { func_8003F178(D_80062FD8); }

s32 *func_8003DCF4(void) {
    return &D_80062F80.field_0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DD00);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DD70);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DDB0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003DE18);

s32 func_8003E134(s32 arg0) {
    s32 r;

    if (D_80062F80.field_0 <= 0) {
        D_80062F80.field_0 = 2;
        D_80062F80.field_4 = 0;
        D_80062F80.field_8 = 0;
        D_80062F80.field_10 = arg0;
        func_8003FA24(func_8003E19C);
        r = 1;
    } else {
        func_8002A014(D_80010B74);
        r = 0;
    }
    return r;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E19C);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E444);

void func_8003E5CC(void) {
    s32 *p = &D_80062F94;

    if (*p >= 0) {
        func_8003F5A4(*p);
        *p = -1;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E610);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E6C8);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E878);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003E930);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EADC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EBF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003ECFC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EE14);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003EF1C);

int func_8003F178(int a0) {
    int old = D_80062FC4;
    D_80062FC4 = a0;
    return old;
}

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

s32 func_8003F924(s8 *a, s8 *b) {
    if (a == 0 || b == 0) {
        if (a == b) {
            return 0;
        }
        if (a == 0) {
            return -1;
        }
        return 1;
    }
    while (*a == *b++) {
        if (*a++ == 0) {
            return 0;
        }
    }
    return *a - b[-1];
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F994);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F9A4);

extern void func_8003FA04();
extern s32 func_8003F9F4();

s32 func_8003F9B4(s32 a0) {
    func_8003FA04(a0);
    return func_8003F9F4(a0, 0x3F, 0);
}
__asm__(".word 0\n.word 0\n.word 0\n");

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003F9F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FA04);

void func_8003FA14(void) {
    D_800506E8 = -1;
}

void func_8003FA24(s32 (*fn)(s32 *)) {
    s32 i = D_800506E8 + 1;
    s32 *p;
    s32 k;

    if (i >= 4) {
        func_8002A014(D_80010D44);
        return;
    }
    k = 3;
    p = &D_80063010[i][3];
    D_800506E8 = i;
    D_80063050[i] = fn;
    for (; k >= 0; k--) {
        *p-- = 0;
    }
}

void func_8003FAA0(void) {
    s32 i = D_800506E8;

    if (i >= 0) {
        if (D_80063050[i](D_80063010[i]) != 0) {
            D_800506E8--;
        }
    }
}

s32 func_8003FB0C(void) {
    return D_800506E8 >> 31;
}
__asm__(".word 0\n.word 0\n");

int func_8003FB24(void) {
    D_80063080 = 1;
    return 0;
}

extern s32 D_80063084;
int func_8003FB38(void) {
    D_80063084 = 1;
    return 0;
}

extern s32 D_80063088;
int func_8003FB4C(void) {
    D_80063088 = 1;
    return 0;
}

extern s32 D_8006308C;
int func_8003FB60(void) {
    D_8006308C = 1;
    return 0;
}

extern s32 D_80063090;
int func_8003FB74(void) {
    D_80063090 = 1;
    return 0;
}

extern s32 D_80063094;
int func_8003FB88(void) {
    D_80063094 = 1;
    return 0;
}

extern s32 D_80063098;
int func_8003FB9C(void) {
    D_80063098 = 1;
    return 0;
}

extern s32 D_8006309C;
int func_8003FBB0(void) {
    D_8006309C = 1;
    return 0;
}

void func_8003FBC4(void) {
    func_8003D504();
    func_8003D594();
    func_8003D4F4();
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FBF4);

void func_8003FDD0(void) { func_8003D5DC(); }

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FDF0);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FEA4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_8003FFAC);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80040084);

s32 func_8004015C(void) {
    return D_80063080 + D_80063084 * 2 + D_80063088 * 4 + D_8006308C * 8;
}

s32 func_80040198(void) {
    return D_80063090 + D_80063094 * 2 + D_80063098 * 4 + D_8006309C * 8;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800401D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800401E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_800405B4);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80040C74);

INCLUDE_ASM("asm/USA/main/nonmatchings/156C", func_80040CE4);
