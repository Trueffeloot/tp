lbl_8048732C:
/* 8048732C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80487330  7C 08 02 A6 */	mflr r0
/* 80487334  90 01 00 14 */	stw r0, 0x14(r1)
/* 80487338  4B FF F0 79 */	bl create__10daSwhit0_cFv
/* 8048733C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80487340  7C 08 03 A6 */	mtlr r0
/* 80487344  38 21 00 10 */	addi r1, r1, 0x10
/* 80487348  4E 80 00 20 */	blr 
