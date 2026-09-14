nonmatching func_80031824, 0x14

glabel func_80031824
    /* 22024 80031824 0580023C */  lui        $v0, %hi(D_8004FC00)
    /* 22028 80031828 00FC428C */  lw         $v0, %lo(D_8004FC00)($v0)
    /* 2202C 8003182C 0580013C */  lui        $at, %hi(D_8004FC00)
    /* 22030 80031830 0800E003 */  jr         $ra
    /* 22034 80031834 00FC24AC */   sw        $a0, %lo(D_8004FC00)($at)
endlabel func_80031824
