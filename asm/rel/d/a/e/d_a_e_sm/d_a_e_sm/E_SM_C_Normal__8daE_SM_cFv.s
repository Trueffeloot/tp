lbl_80794338:
/* 80794338  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8079433C  7C 08 02 A6 */	mflr r0
/* 80794340  90 01 00 24 */	stw r0, 0x24(r1)
/* 80794344  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80794348  7C 7F 1B 78 */	mr r31, r3
/* 8079434C  38 7F 04 DE */	addi r3, r31, 0x4de
/* 80794350  A8 9F 09 B2 */	lha r4, 0x9b2(r31)
/* 80794354  38 A0 00 08 */	li r5, 8
/* 80794358  38 C0 04 00 */	li r6, 0x400
/* 8079435C  4B AD C2 AD */	bl cLib_addCalcAngleS2__FPssss
/* 80794360  80 1F 06 88 */	lwz r0, 0x688(r31)
/* 80794364  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80794368  40 82 00 48 */	bne lbl_807943B0
/* 8079436C  80 7F 05 B4 */	lwz r3, 0x5b4(r31)
/* 80794370  38 63 00 0C */	addi r3, r3, 0xc
/* 80794374  3C 80 80 7A */	lis r4, lit_4703@ha /* 0x807986DC@ha */
/* 80794378  C0 24 86 DC */	lfs f1, lit_4703@l(r4)  /* 0x807986DC@l */
/* 8079437C  4B B9 40 B1 */	bl checkPass__12J3DFrameCtrlFf
/* 80794380  2C 03 00 00 */	cmpwi r3, 0
/* 80794384  41 82 00 2C */	beq lbl_807943B0
/* 80794388  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702DC@ha */
/* 8079438C  38 03 02 DC */	addi r0, r3, 0x02DC /* 0x000702DC@l */
/* 80794390  90 01 00 08 */	stw r0, 8(r1)
/* 80794394  38 7F 05 BC */	addi r3, r31, 0x5bc
/* 80794398  38 81 00 08 */	addi r4, r1, 8
/* 8079439C  38 A0 FF FF */	li r5, -1
/* 807943A0  81 9F 05 BC */	lwz r12, 0x5bc(r31)
/* 807943A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807943A8  7D 89 03 A6 */	mtctr r12
/* 807943AC  4E 80 04 21 */	bctrl 
lbl_807943B0:
/* 807943B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 807943B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807943B8  7C 08 03 A6 */	mtlr r0
/* 807943BC  38 21 00 20 */	addi r1, r1, 0x20
/* 807943C0  4E 80 00 20 */	blr 
