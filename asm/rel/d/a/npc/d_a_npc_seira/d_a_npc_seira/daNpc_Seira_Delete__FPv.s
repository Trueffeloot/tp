lbl_80ACED08:
/* 80ACED08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80ACED0C  7C 08 02 A6 */	mflr r0
/* 80ACED10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80ACED14  4B FF D3 E9 */	bl Delete__13daNpc_Seira_cFv
/* 80ACED18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80ACED1C  7C 08 03 A6 */	mtlr r0
/* 80ACED20  38 21 00 10 */	addi r1, r1, 0x10
/* 80ACED24  4E 80 00 20 */	blr 
