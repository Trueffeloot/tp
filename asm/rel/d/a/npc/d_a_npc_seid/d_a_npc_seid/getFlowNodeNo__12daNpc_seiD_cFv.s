lbl_80AC9BE8:
/* 80AC9BE8  A8 03 04 B4 */	lha r0, 0x4b4(r3)
/* 80AC9BEC  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80AC9BF0  28 00 FF FF */	cmplwi r0, 0xffff
/* 80AC9BF4  38 60 FF FF */	li r3, -1
/* 80AC9BF8  4D 82 00 20 */	beqlr 
/* 80AC9BFC  7C 03 03 78 */	mr r3, r0
/* 80AC9C00  4E 80 00 20 */	blr 
