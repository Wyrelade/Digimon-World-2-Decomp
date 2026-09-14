nonmatching func_8001EC00, 0x10

glabel func_8001EC00
    /* F400 8001EC00 2C00838C */  lw         $v1, 0x2C($a0)
    /* F404 8001EC04 0000A28C */  lw         $v0, 0x0($a1)
    /* F408 8001EC08 0800E003 */  jr         $ra
    /* F40C 8001EC0C 000062AC */   sw        $v0, 0x0($v1)
endlabel func_8001EC00
