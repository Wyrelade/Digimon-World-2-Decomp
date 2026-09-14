nonmatching func_8001C558, 0x14

glabel func_8001C558
    /* CD58 8001C558 0480033C */  lui        $v1, %hi(D_80041564)
    /* CD5C 8001C55C 64156224 */  addiu      $v0, $v1, %lo(D_80041564)
    /* CD60 8001C560 080040AC */  sw         $zero, 0x8($v0)
    /* CD64 8001C564 0800E003 */  jr         $ra
    /* CD68 8001C568 641560AC */   sw        $zero, %lo(D_80041564)($v1)
endlabel func_8001C558
