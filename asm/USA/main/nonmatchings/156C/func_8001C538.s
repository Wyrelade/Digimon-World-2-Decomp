nonmatching func_8001C538, 0x20

glabel func_8001C538
    /* CD38 8001C538 0480033C */  lui        $v1, %hi(D_80041564)
    /* CD3C 8001C53C 64156524 */  addiu      $a1, $v1, %lo(D_80041564)
    /* CD40 8001C540 01000224 */  addiu      $v0, $zero, 0x1
    /* CD44 8001C544 0800A2AC */  sw         $v0, 0x8($a1)
    /* CD48 8001C548 03000224 */  addiu      $v0, $zero, 0x3
    /* CD4C 8001C54C 641562AC */  sw         $v0, %lo(D_80041564)($v1)
    /* CD50 8001C550 0800E003 */  jr         $ra
    /* CD54 8001C554 0400A4AC */   sw        $a0, 0x4($a1)
endlabel func_8001C538
