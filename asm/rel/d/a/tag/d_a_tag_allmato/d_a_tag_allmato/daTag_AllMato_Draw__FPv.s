lbl_80489110:
/* 80489110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80489114  7C 08 02 A6 */	mflr r0
/* 80489118  90 01 00 14 */	stw r0, 0x14(r1)
/* 8048911C  4B FF EB 41 */	bl Draw__15daTag_AllMato_cFv
/* 80489120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80489124  7C 08 03 A6 */	mtlr r0
/* 80489128  38 21 00 10 */	addi r1, r1, 0x10
/* 8048912C  4E 80 00 20 */	blr 
