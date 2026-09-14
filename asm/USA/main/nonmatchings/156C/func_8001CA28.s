nonmatching func_8001CA28, 0x14

glabel func_8001CA28
    /* D228 8001CA28 40210400 */  sll        $a0, $a0, 5
    /* D22C 8001CA2C 0680023C */  lui        $v0, %hi(D_8005CD60)
    /* D230 8001CA30 60CD4224 */  addiu      $v0, $v0, %lo(D_8005CD60)
    /* D234 8001CA34 0800E003 */  jr         $ra
    /* D238 8001CA38 21108200 */   addu      $v0, $a0, $v0
endlabel func_8001CA28
