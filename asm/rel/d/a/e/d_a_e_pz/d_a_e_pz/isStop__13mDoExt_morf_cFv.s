lbl_807611D8:
/* 807611D8  38 A0 00 01 */	li r5, 1
/* 807611DC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807611E0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807611E4  40 82 00 1C */	bne lbl_80761200
/* 807611E8  3C 80 80 76 */	lis r4, lit_3907@ha /* 0x80761500@ha */
/* 807611EC  C0 24 15 00 */	lfs f1, lit_3907@l(r4)  /* 0x80761500@l */
/* 807611F0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807611F4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807611F8  41 82 00 08 */	beq lbl_80761200
/* 807611FC  38 A0 00 00 */	li r5, 0
lbl_80761200:
/* 80761200  54 A3 06 3E */	clrlwi r3, r5, 0x18
/* 80761204  4E 80 00 20 */	blr 
