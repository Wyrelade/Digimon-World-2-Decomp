nonmatching func_80011614, 0x14

glabel func_80011614
    /* 1E14 80011614 FF00A530 */  andi       $a1, $a1, 0xFF
    /* 1E18 80011618 180085AC */  sw         $a1, 0x18($a0)
    /* 1E1C 8001161C 200080AC */  sw         $zero, 0x20($a0)
    /* 1E20 80011620 0800E003 */  jr         $ra
    /* 1E24 80011624 1C0080AC */   sw        $zero, 0x1C($a0)
endlabel func_80011614
