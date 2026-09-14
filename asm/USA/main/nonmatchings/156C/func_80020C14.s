nonmatching func_80020C14, 0x2C

glabel func_80020C14
    /* 11414 80020C14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 11418 80020C18 1000B0AF */  sw         $s0, 0x10($sp)
    /* 1141C 80020C1C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 11420 80020C20 4882000C */  jal        func_80020920
    /* 11424 80020C24 21808000 */   addu      $s0, $a0, $zero
    /* 11428 80020C28 7E82000C */  jal        func_800209F8
    /* 1142C 80020C2C 21200002 */   addu      $a0, $s0, $zero
    /* 11430 80020C30 1400BF8F */  lw         $ra, 0x14($sp)
    /* 11434 80020C34 1000B08F */  lw         $s0, 0x10($sp)
    /* 11438 80020C38 0800E003 */  jr         $ra
    /* 1143C 80020C3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80020C14
