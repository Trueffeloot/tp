lbl_8029BD14:
/* 8029BD14  38 80 00 00 */	li r4, 0
/* 8029BD18  90 83 00 00 */	stw r4, 0(r3)
/* 8029BD1C  38 00 00 01 */	li r0, 1
/* 8029BD20  90 03 00 04 */	stw r0, 4(r3)
/* 8029BD24  C0 02 BC E0 */	lfs f0, lit_341(r2)
/* 8029BD28  D0 03 00 08 */	stfs f0, 8(r3)
/* 8029BD2C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8029BD30  C0 02 BC E4 */	lfs f0, lit_342(r2)
/* 8029BD34  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8029BD38  B0 83 00 14 */	sth r4, 0x14(r3)
/* 8029BD3C  B0 83 00 16 */	sth r4, 0x16(r3)
/* 8029BD40  4E 80 00 20 */	blr 