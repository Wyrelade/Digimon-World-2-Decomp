nonmatching func_8001EF3C, 0x28

glabel func_8001EF3C
    /* F73C 8001EF3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* F740 8001EF40 1000BFAF */  sw         $ra, 0x10($sp)
    /* F744 8001EF44 507B000C */  jal        func_8001ED40
    /* F748 8001EF48 00000000 */   nop
    /* F74C 8001EF4C 0000428C */  lw         $v0, 0x0($v0)
    /* F750 8001EF50 1000BF8F */  lw         $ra, 0x10($sp)
    /* F754 8001EF54 02150200 */  srl        $v0, $v0, 20
    /* F758 8001EF58 0F004230 */  andi       $v0, $v0, 0xF
    /* F75C 8001EF5C 0800E003 */  jr         $ra
    /* F760 8001EF60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8001EF3C
