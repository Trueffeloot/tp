lbl_809948E4:
/* 809948E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809948E8  7C 08 02 A6 */	mflr r0
/* 809948EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 809948F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809948F4  7C 7F 1B 79 */	or. r31, r3, r3
/* 809948F8  41 82 00 1C */	beq lbl_80994914
/* 809948FC  3C A0 80 99 */	lis r5, __vt__18daNpcT_ActorMngr_c@ha /* 0x80995D18@ha */
/* 80994900  38 05 5D 18 */	addi r0, r5, __vt__18daNpcT_ActorMngr_c@l /* 0x80995D18@l */
/* 80994904  90 1F 00 04 */	stw r0, 4(r31)
/* 80994908  7C 80 07 35 */	extsh. r0, r4
/* 8099490C  40 81 00 08 */	ble lbl_80994914
/* 80994910  4B 93 A4 2D */	bl __dl__FPv
lbl_80994914:
/* 80994914  7F E3 FB 78 */	mr r3, r31
/* 80994918  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8099491C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80994920  7C 08 03 A6 */	mtlr r0
/* 80994924  38 21 00 10 */	addi r1, r1, 0x10
/* 80994928  4E 80 00 20 */	blr 
