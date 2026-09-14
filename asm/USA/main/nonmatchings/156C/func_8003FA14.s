nonmatching func_8003FA14, 0x10

glabel func_8003FA14
    /* 30214 8003FA14 FFFF0224 */  addiu      $v0, $zero, -0x1
    /* 30218 8003FA18 0580013C */  lui        $at, %hi(D_800506E8)
    /* 3021C 8003FA1C 0800E003 */  jr         $ra
    /* 30220 8003FA20 E80622AC */   sw        $v0, %lo(D_800506E8)($at)
endlabel func_8003FA14
