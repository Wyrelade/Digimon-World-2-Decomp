/* Handwritten function */
nonmatching func_80026FD4, 0x10

glabel func_80026FD4
    /* 177D4 80026FD4 02000424 */  addiu      $a0, $zero, 0x2
    /* 177D8 80026FD8 0C000000 */  syscall    0 /* handwritten instruction */
    /* 177DC 80026FDC 0800E003 */  jr         $ra
    /* 177E0 80026FE0 00000000 */   nop
endlabel func_80026FD4
