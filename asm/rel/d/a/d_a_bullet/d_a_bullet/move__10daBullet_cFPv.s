lbl_806564B8:
/* 806564B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806564BC  7C 08 02 A6 */	mflr r0
/* 806564C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806564C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806564C8  7C 7F 1B 78 */	mr r31, r3
/* 806564CC  A0 03 09 54 */	lhz r0, 0x954(r3)
/* 806564D0  2C 00 00 01 */	cmpwi r0, 1
/* 806564D4  41 82 00 24 */	beq lbl_806564F8
/* 806564D8  40 80 00 58 */	bge lbl_80656530
/* 806564DC  2C 00 00 00 */	cmpwi r0, 0
/* 806564E0  40 80 00 0C */	bge lbl_806564EC
/* 806564E4  48 00 00 4C */	b lbl_80656530
/* 806564E8  48 00 00 48 */	b lbl_80656530
lbl_806564EC:
/* 806564EC  38 00 00 01 */	li r0, 1
/* 806564F0  B0 1F 09 54 */	sth r0, 0x954(r31)
/* 806564F4  48 00 00 3C */	b lbl_80656530
lbl_806564F8:
/* 806564F8  38 7F 09 50 */	addi r3, r31, 0x950
/* 806564FC  48 00 01 1D */	bl func_80656618
/* 80656500  2C 03 00 00 */	cmpwi r3, 0
/* 80656504  40 82 00 10 */	bne lbl_80656514
/* 80656508  7F E3 FB 78 */	mr r3, r31
/* 8065650C  4B 9C 37 71 */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80656510  48 00 00 20 */	b lbl_80656530
lbl_80656514:
/* 80656514  80 7F 05 A0 */	lwz r3, 0x5a0(r31)
/* 80656518  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 8065651C  40 82 00 0C */	bne lbl_80656528
/* 80656520  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80656524  41 82 00 0C */	beq lbl_80656530
lbl_80656528:
/* 80656528  7F E3 FB 78 */	mr r3, r31
/* 8065652C  4B 9C 37 51 */	bl fopAcM_delete__FP10fopAc_ac_c
lbl_80656530:
/* 80656530  38 60 00 01 */	li r3, 1
/* 80656534  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80656538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8065653C  7C 08 03 A6 */	mtlr r0
/* 80656540  38 21 00 10 */	addi r1, r1, 0x10
/* 80656544  4E 80 00 20 */	blr 
