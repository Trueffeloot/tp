lbl_80D4556C:
/* 80D4556C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D45570  7C 08 02 A6 */	mflr r0
/* 80D45574  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D45578  4B 33 33 65 */	bl MoveBGDelete__16dBgS_MoveBgActorFv
/* 80D4557C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D45580  7C 08 03 A6 */	mtlr r0
/* 80D45584  38 21 00 10 */	addi r1, r1, 0x10
/* 80D45588  4E 80 00 20 */	blr 