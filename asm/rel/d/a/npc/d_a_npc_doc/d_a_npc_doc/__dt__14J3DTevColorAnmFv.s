lbl_809A7360:
/* 809A7360  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809A7364  7C 08 02 A6 */	mflr r0
/* 809A7368  90 01 00 14 */	stw r0, 0x14(r1)
/* 809A736C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809A7370  7C 7F 1B 79 */	or. r31, r3, r3
/* 809A7374  41 82 00 10 */	beq lbl_809A7384
/* 809A7378  7C 80 07 35 */	extsh. r0, r4
/* 809A737C  40 81 00 08 */	ble lbl_809A7384
/* 809A7380  4B 92 79 BD */	bl __dl__FPv
lbl_809A7384:
/* 809A7384  7F E3 FB 78 */	mr r3, r31
/* 809A7388  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809A738C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809A7390  7C 08 03 A6 */	mtlr r0
/* 809A7394  38 21 00 10 */	addi r1, r1, 0x10
/* 809A7398  4E 80 00 20 */	blr 
