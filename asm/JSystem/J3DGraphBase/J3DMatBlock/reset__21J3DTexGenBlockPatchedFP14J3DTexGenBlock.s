lbl_80320084:
/* 80320084  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80320088  7C 08 02 A6 */	mflr r0
/* 8032008C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80320090  39 61 00 20 */	addi r11, r1, 0x20
/* 80320094  48 04 21 41 */	bl _savegpr_27
/* 80320098  7C 7B 1B 78 */	mr r27, r3
/* 8032009C  7C 9C 23 78 */	mr r28, r4
/* 803200A0  7F 83 E3 78 */	mr r3, r28
/* 803200A4  81 9C 00 00 */	lwz r12, 0(r28)
/* 803200A8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803200AC  7D 89 03 A6 */	mtctr r12
/* 803200B0  4E 80 04 21 */	bctrl 
/* 803200B4  90 7B 00 04 */	stw r3, 4(r27)
/* 803200B8  3B C0 00 00 */	li r30, 0
/* 803200BC  3B E0 00 00 */	li r31, 0
lbl_803200C0:
/* 803200C0  7F 83 E3 78 */	mr r3, r28
/* 803200C4  7F C4 F3 78 */	mr r4, r30
/* 803200C8  81 9C 00 00 */	lwz r12, 0(r28)
/* 803200CC  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 803200D0  7D 89 03 A6 */	mtctr r12
/* 803200D4  4E 80 04 21 */	bctrl 
/* 803200D8  80 63 00 00 */	lwz r3, 0(r3)
/* 803200DC  38 1F 00 08 */	addi r0, r31, 8
/* 803200E0  7C 7B 01 2E */	stwx r3, r27, r0
/* 803200E4  3B DE 00 01 */	addi r30, r30, 1
/* 803200E8  28 1E 00 08 */	cmplwi r30, 8
/* 803200EC  3B FF 00 06 */	addi r31, r31, 6
/* 803200F0  41 80 FF D0 */	blt lbl_803200C0
/* 803200F4  3B A0 00 00 */	li r29, 0
/* 803200F8  3B E0 00 00 */	li r31, 0
lbl_803200FC:
/* 803200FC  7F 83 E3 78 */	mr r3, r28
/* 80320100  7F A4 EB 78 */	mr r4, r29
/* 80320104  81 9C 00 00 */	lwz r12, 0(r28)
/* 80320108  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8032010C  7D 89 03 A6 */	mtctr r12
/* 80320110  4E 80 04 21 */	bctrl 
/* 80320114  28 03 00 00 */	cmplwi r3, 0
/* 80320118  41 82 00 60 */	beq lbl_80320178
/* 8032011C  3B DF 00 38 */	addi r30, r31, 0x38
/* 80320120  7C 1B F0 2E */	lwzx r0, r27, r30
/* 80320124  28 00 00 00 */	cmplwi r0, 0
/* 80320128  41 82 00 3C */	beq lbl_80320164
/* 8032012C  7F 83 E3 78 */	mr r3, r28
/* 80320130  7F A4 EB 78 */	mr r4, r29
/* 80320134  81 9C 00 00 */	lwz r12, 0(r28)
/* 80320138  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8032013C  7D 89 03 A6 */	mtctr r12
/* 80320140  4E 80 04 21 */	bctrl 
/* 80320144  7C 64 1B 78 */	mr r4, r3
/* 80320148  7C 7B F0 2E */	lwzx r3, r27, r30
/* 8032014C  38 A0 00 94 */	li r5, 0x94
/* 80320150  4B CE 33 F1 */	bl memcpy
/* 80320154  7C 7B F0 2E */	lwzx r3, r27, r30
/* 80320158  38 80 00 94 */	li r4, 0x94
/* 8032015C  48 01 B4 81 */	bl DCStoreRange
/* 80320160  48 00 00 18 */	b lbl_80320178
lbl_80320164:
/* 80320164  3C 60 80 3A */	lis r3, J3DMatBlock__stringBase0@ha /* 0x803A1EA8@ha */
/* 80320168  38 63 1E A8 */	addi r3, r3, J3DMatBlock__stringBase0@l /* 0x803A1EA8@l */
/* 8032016C  7F A4 EB 78 */	mr r4, r29
/* 80320170  4C C6 31 82 */	crclr 6
/* 80320174  4B CE 69 49 */	bl OSReport
lbl_80320178:
/* 80320178  3B BD 00 01 */	addi r29, r29, 1
/* 8032017C  28 1D 00 08 */	cmplwi r29, 8
/* 80320180  3B FF 00 04 */	addi r31, r31, 4
/* 80320184  41 80 FF 78 */	blt lbl_803200FC
/* 80320188  39 61 00 20 */	addi r11, r1, 0x20
/* 8032018C  48 04 20 95 */	bl _restgpr_27
/* 80320190  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80320194  7C 08 03 A6 */	mtlr r0
/* 80320198  38 21 00 20 */	addi r1, r1, 0x20
/* 8032019C  4E 80 00 20 */	blr 
