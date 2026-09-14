nonmatching func_8001C56C, 0x18

glabel func_8001C56C
    /* CD6C 8001C56C 0480023C */  lui        $v0, %hi(D_80041564)
    /* CD70 8001C570 64154324 */  addiu      $v1, $v0, %lo(D_80041564)
    /* CD74 8001C574 080060AC */  sw         $zero, 0x8($v1)
    /* CD78 8001C578 01000324 */  addiu      $v1, $zero, 0x1
    /* CD7C 8001C57C 0800E003 */  jr         $ra
    /* CD80 8001C580 641543AC */   sw        $v1, %lo(D_80041564)($v0)
endlabel func_8001C56C
