lbl_806A1880:
/* 806A1880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806A1884  7C 08 02 A6 */	mflr r0
/* 806A1888  90 01 00 14 */	stw r0, 0x14(r1)
/* 806A188C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806A1890  7C 7F 1B 79 */	or. r31, r3, r3
/* 806A1894  41 82 00 10 */	beq lbl_806A18A4
/* 806A1898  7C 80 07 35 */	extsh. r0, r4
/* 806A189C  40 81 00 08 */	ble lbl_806A18A4
/* 806A18A0  4B C2 D4 9D */	bl __dl__FPv
lbl_806A18A4:
/* 806A18A4  7F E3 FB 78 */	mr r3, r31
/* 806A18A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806A18AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806A18B0  7C 08 03 A6 */	mtlr r0
/* 806A18B4  38 21 00 10 */	addi r1, r1, 0x10
/* 806A18B8  4E 80 00 20 */	blr 
