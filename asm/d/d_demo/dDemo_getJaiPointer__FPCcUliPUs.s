lbl_80038490:
/* 80038490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038494  7C 08 02 A6 */	mflr r0
/* 80038498  90 01 00 14 */	stw r0, 0x14(r1)
/* 8003849C  2C 05 00 00 */	cmpwi r5, 0
/* 800384A0  40 81 00 0C */	ble lbl_800384AC
/* 800384A4  28 06 00 00 */	cmplwi r6, 0
/* 800384A8  40 82 00 0C */	bne lbl_800384B4
lbl_800384AC:
/* 800384AC  38 60 00 00 */	li r3, 0
/* 800384B0  48 00 00 58 */	b lbl_80038508
lbl_800384B4:
/* 800384B4  38 00 00 00 */	li r0, 0
/* 800384B8  38 E0 00 00 */	li r7, 0
/* 800384BC  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 800384C0  7C A9 03 A6 */	mtctr r5
/* 800384C4  7C 00 28 00 */	cmpw r0, r5
/* 800384C8  40 80 00 3C */	bge lbl_80038504
lbl_800384CC:
/* 800384CC  7C 06 3A 2E */	lhzx r0, r6, r7
/* 800384D0  7C 04 00 40 */	cmplw r4, r0
/* 800384D4  40 82 00 28 */	bne lbl_800384FC
/* 800384D8  7C 86 3A 14 */	add r4, r6, r7
/* 800384DC  A0 84 00 02 */	lhz r4, 2(r4)
/* 800384E0  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800384E4  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800384E8  3C A5 00 02 */	addis r5, r5, 2
/* 800384EC  38 C0 00 80 */	li r6, 0x80
/* 800384F0  38 A5 C2 F8 */	addi r5, r5, -15624
/* 800384F4  48 00 3F 0D */	bl getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci
/* 800384F8  48 00 00 10 */	b lbl_80038508
lbl_800384FC:
/* 800384FC  38 E7 00 04 */	addi r7, r7, 4
/* 80038500  42 00 FF CC */	bdnz lbl_800384CC
lbl_80038504:
/* 80038504  38 60 00 00 */	li r3, 0
lbl_80038508:
/* 80038508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8003850C  7C 08 03 A6 */	mtlr r0
/* 80038510  38 21 00 10 */	addi r1, r1, 0x10
/* 80038514  4E 80 00 20 */	blr 
