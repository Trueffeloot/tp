/* 80181804 0017E744  94 21 FF 40 */ stwu r1, -0xc0(r1)
/* 80181808 0017E748  7C 08 02 A6 */ mflr r0
/* 8018180C 0017E74C  90 01 00 C4 */ stw r0, 0xc4(r1)
/* 80181810 0017E750  DB E1 00 B0 */ stfd f31, 0xb0(r1)
/* 80181814 0017E754  F3 E1 00 B8 */ psq_st f31, 184(r1), 0, 0
/* 80181818 0017E758  39 61 00 B0 */ addi r11, r1, 0xb0
/* 8018181C 0017E75C  48 1E 09 B5 */ bl _savegpr_26
/* 80181820 0017E760  7C 7B 1B 78 */ mr r27, r3
/* 80181824 0017E764  3B 5B 02 48 */ addi r26, r27, 0x248
/* 80181828 0017E768  4B E9 CA E1 */ bl fopCamM_GetParam
/* 8018182C 0017E76C  1F A3 00 38 */ mulli r29, r3, 0x38
/* 80181830 0017E770  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80181834 0017E774  3B C3 61 C0 */ addi r30, r3, g_dComIfG_gameInfo@l
/* 80181838 0017E778  3B 80 00 00 */ li r28, 0
/* 8018183C 0017E77C  C0 1B 00 E4 */ lfs f0, 0xe4(r27)
/* 80181840 0017E780  D0 01 00 80 */ stfs f0, 0x80(r1)
/* 80181844 0017E784  C0 1B 00 E8 */ lfs f0, 0xe8(r27)
/* 80181848 0017E788  D0 01 00 84 */ stfs f0, 0x84(r1)
/* 8018184C 0017E78C  C0 1B 00 EC */ lfs f0, 0xec(r27)
/* 80181850 0017E790  D0 01 00 88 */ stfs f0, 0x88(r1)
/* 80181854 0017E794  C0 1B 00 D8 */ lfs f0, 0xd8(r27)
/* 80181858 0017E798  D0 01 00 74 */ stfs f0, 0x74(r1)
/* 8018185C 0017E79C  C0 1B 00 DC */ lfs f0, 0xdc(r27)
/* 80181860 0017E7A0  D0 01 00 78 */ stfs f0, 0x78(r1)
/* 80181864 0017E7A4  C0 1B 00 E0 */ lfs f0, 0xe0(r27)
/* 80181868 0017E7A8  D0 01 00 7C */ stfs f0, 0x7c(r1)
/* 8018186C 0017E7AC  C0 1B 00 F0 */ lfs f0, 0xf0(r27)
/* 80181870 0017E7B0  D0 01 00 68 */ stfs f0, 0x68(r1)
/* 80181874 0017E7B4  C0 1B 00 F4 */ lfs f0, 0xf4(r27)
/* 80181878 0017E7B8  D0 01 00 6C */ stfs f0, 0x6c(r1)
/* 8018187C 0017E7BC  C0 1B 00 F8 */ lfs f0, 0xf8(r27)
/* 80181880 0017E7C0  D0 01 00 70 */ stfs f0, 0x70(r1)
/* 80181884 0017E7C4  38 61 00 10 */ addi r3, r1, 0x10
/* 80181888 0017E7C8  A8 9B 00 FC */ lha r4, 0xfc(r27)
/* 8018188C 0017E7CC  48 0E F7 0D */ bl cSAngle_X2_
/* 80181890 0017E7D0  C3 FB 00 D0 */ lfs f31, 0xd0(r27)
/* 80181894 0017E7D4  80 6D 88 A0 */ lwz r3, lbl_80450E20-_SDA_BASE_(r13)
/* 80181898 0017E7D8  4B EB 78 91 */ bl dDemo_object_c_NS_getActiveCamera
/* 8018189C 0017E7DC  7C 7F 1B 79 */ or. r31, r3, r3
/* 801818A0 0017E7E0  41 82 00 C8 */ beq lbl_80181968
/* 801818A4 0017E7E4  80 1E 51 84 */ lwz r0, 0x5184(r30)
/* 801818A8 0017E7E8  2C 00 00 00 */ cmpwi r0, 0
/* 801818AC 0017E7EC  40 82 00 BC */ bne lbl_80181968
/* 801818B0 0017E7F0  88 1F 00 04 */ lbz r0, 4(r31)
/* 801818B4 0017E7F4  54 00 06 73 */ rlwinm. r0, r0, 0, 0x19, 0x19
/* 801818B8 0017E7F8  41 82 00 1C */ beq lbl_801818D4
/* 801818BC 0017E7FC  C0 1F 00 30 */ lfs f0, 0x30(r31)
/* 801818C0 0017E800  D0 01 00 80 */ stfs f0, 0x80(r1)
/* 801818C4 0017E804  C0 1F 00 34 */ lfs f0, 0x34(r31)
/* 801818C8 0017E808  D0 01 00 84 */ stfs f0, 0x84(r1)
/* 801818CC 0017E80C  C0 1F 00 38 */ lfs f0, 0x38(r31)
/* 801818D0 0017E810  D0 01 00 88 */ stfs f0, 0x88(r1)
lbl_801818D4:
/* 801818D4 0017E814  88 1F 00 04 */ lbz r0, 4(r31)
/* 801818D8 0017E818  54 00 06 F7 */ rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 801818DC 0017E81C  41 82 00 1C */ beq lbl_801818F8
/* 801818E0 0017E820  C0 1F 00 18 */ lfs f0, 0x18(r31)
/* 801818E4 0017E824  D0 01 00 74 */ stfs f0, 0x74(r1)
/* 801818E8 0017E828  C0 1F 00 1C */ lfs f0, 0x1c(r31)
/* 801818EC 0017E82C  D0 01 00 78 */ stfs f0, 0x78(r1)
/* 801818F0 0017E830  C0 1F 00 20 */ lfs f0, 0x20(r31)
/* 801818F4 0017E834  D0 01 00 7C */ stfs f0, 0x7c(r1)
lbl_801818F8:
/* 801818F8 0017E838  88 1F 00 04 */ lbz r0, 4(r31)
/* 801818FC 0017E83C  54 00 06 B5 */ rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80181900 0017E840  41 82 00 1C */ beq lbl_8018191C
/* 80181904 0017E844  C0 1F 00 24 */ lfs f0, 0x24(r31)
/* 80181908 0017E848  D0 01 00 68 */ stfs f0, 0x68(r1)
/* 8018190C 0017E84C  C0 1F 00 28 */ lfs f0, 0x28(r31)
/* 80181910 0017E850  D0 01 00 6C */ stfs f0, 0x6c(r1)
/* 80181914 0017E854  C0 1F 00 2C */ lfs f0, 0x2c(r31)
/* 80181918 0017E858  D0 01 00 70 */ stfs f0, 0x70(r1)
lbl_8018191C:
/* 8018191C 0017E85C  88 1F 00 04 */ lbz r0, 4(r31)
/* 80181920 0017E860  54 00 06 31 */ rlwinm. r0, r0, 0, 0x18, 0x18
/* 80181924 0017E864  41 82 00 30 */ beq lbl_80181954
/* 80181928 0017E868  C0 22 9D 20 */ lfs f1, lbl_80453720-_SDA2_BASE_(r2)
/* 8018192C 0017E86C  C0 1F 00 3C */ lfs f0, 0x3c(r31)
/* 80181930 0017E870  FC 00 00 50 */ fneg f0, f0
/* 80181934 0017E874  EC 01 00 32 */ fmuls f0, f1, f0
/* 80181938 0017E878  FC 00 00 1E */ fctiwz f0, f0
/* 8018193C 0017E87C  D8 01 00 90 */ stfd f0, 0x90(r1)
/* 80181940 0017E880  80 81 00 94 */ lwz r4, 0x94(r1)
/* 80181944 0017E884  38 61 00 0C */ addi r3, r1, 0xc
/* 80181948 0017E888  48 0E F6 51 */ bl cSAngle_X2_
/* 8018194C 0017E88C  A8 01 00 0C */ lha r0, 0xc(r1)
/* 80181950 0017E890  B0 01 00 10 */ sth r0, 0x10(r1)
lbl_80181954:
/* 80181954 0017E894  88 1F 00 04 */ lbz r0, 4(r31)
/* 80181958 0017E898  54 00 07 7B */ rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8018195C 0017E89C  41 82 00 A4 */ beq lbl_80181A00
/* 80181960 0017E8A0  C3 FF 00 10 */ lfs f31, 0x10(r31)
/* 80181964 0017E8A4  48 00 00 9C */ b lbl_80181A00
lbl_80181968:
/* 80181968 0017E8A8  80 1A 06 0C */ lwz r0, 0x60c(r26)
/* 8018196C 0017E8AC  54 00 07 FF */ clrlwi. r0, r0, 0x1f
/* 80181970 0017E8B0  40 82 00 90 */ bne lbl_80181A00
/* 80181974 0017E8B4  38 61 00 5C */ addi r3, r1, 0x5c
/* 80181978 0017E8B8  7F 44 D3 78 */ mr r4, r26
/* 8018197C 0017E8BC  48 00 05 1D */ bl dCamera_c_NS_Center
/* 80181980 0017E8C0  C0 01 00 5C */ lfs f0, 0x5c(r1)
/* 80181984 0017E8C4  D0 01 00 80 */ stfs f0, 0x80(r1)
/* 80181988 0017E8C8  C0 01 00 60 */ lfs f0, 0x60(r1)
/* 8018198C 0017E8CC  D0 01 00 84 */ stfs f0, 0x84(r1)
/* 80181990 0017E8D0  C0 01 00 64 */ lfs f0, 0x64(r1)
/* 80181994 0017E8D4  D0 01 00 88 */ stfs f0, 0x88(r1)
/* 80181998 0017E8D8  38 61 00 50 */ addi r3, r1, 0x50
/* 8018199C 0017E8DC  7F 44 D3 78 */ mr r4, r26
/* 801819A0 0017E8E0  48 00 04 C5 */ bl dCamera_c_NS_Eye
/* 801819A4 0017E8E4  C0 01 00 50 */ lfs f0, 0x50(r1)
/* 801819A8 0017E8E8  D0 01 00 74 */ stfs f0, 0x74(r1)
/* 801819AC 0017E8EC  C0 01 00 54 */ lfs f0, 0x54(r1)
/* 801819B0 0017E8F0  D0 01 00 78 */ stfs f0, 0x78(r1)
/* 801819B4 0017E8F4  C0 01 00 58 */ lfs f0, 0x58(r1)
/* 801819B8 0017E8F8  D0 01 00 7C */ stfs f0, 0x7c(r1)
/* 801819BC 0017E8FC  38 61 00 44 */ addi r3, r1, 0x44
/* 801819C0 0017E900  7F 44 D3 78 */ mr r4, r26
/* 801819C4 0017E904  48 00 04 5D */ bl dCamera_c_NS_Up
/* 801819C8 0017E908  C0 01 00 44 */ lfs f0, 0x44(r1)
/* 801819CC 0017E90C  D0 01 00 68 */ stfs f0, 0x68(r1)
/* 801819D0 0017E910  C0 01 00 48 */ lfs f0, 0x48(r1)
/* 801819D4 0017E914  D0 01 00 6C */ stfs f0, 0x6c(r1)
/* 801819D8 0017E918  C0 01 00 4C */ lfs f0, 0x4c(r1)
/* 801819DC 0017E91C  D0 01 00 70 */ stfs f0, 0x70(r1)
/* 801819E0 0017E920  38 61 00 08 */ addi r3, r1, 8
/* 801819E4 0017E924  7F 44 D3 78 */ mr r4, r26
/* 801819E8 0017E928  48 00 0F C5 */ bl dCamera_c_NS_Bank
/* 801819EC 0017E92C  A8 01 00 08 */ lha r0, 8(r1)
/* 801819F0 0017E930  B0 01 00 10 */ sth r0, 0x10(r1)
/* 801819F4 0017E934  C0 3A 00 58 */ lfs f1, 0x58(r26)
/* 801819F8 0017E938  C0 1A 06 F4 */ lfs f0, 0x6f4(r26)
/* 801819FC 0017E93C  EF E1 00 2A */ fadds f31, f1, f0
lbl_80181A00:
/* 80181A00 0017E940  C0 41 00 74 */ lfs f2, 0x74(r1)
/* 80181A04 0017E944  C0 61 00 80 */ lfs f3, 0x80(r1)
/* 80181A08 0017E948  FC 02 18 00 */ fcmpu cr0, f2, f3
/* 80181A0C 0017E94C  40 82 00 18 */ bne lbl_80181A24
/* 80181A10 0017E950  C0 21 00 7C */ lfs f1, 0x7c(r1)
/* 80181A14 0017E954  C0 01 00 88 */ lfs f0, 0x88(r1)
/* 80181A18 0017E958  FC 01 00 00 */ fcmpu cr0, f1, f0
/* 80181A1C 0017E95C  40 82 00 08 */ bne lbl_80181A24
/* 80181A20 0017E960  3B 80 00 01 */ li r28, 1
lbl_80181A24:
/* 80181A24 0017E964  C0 02 9C A0 */ lfs f0, lbl_804536A0-_SDA2_BASE_(r2)
/* 80181A28 0017E968  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80181A2C 0017E96C  41 80 00 68 */ blt lbl_80181A94
/* 80181A30 0017E970  D3 E1 00 2C */ stfs f31, 0x2c(r1)
/* 80181A34 0017E974  80 81 00 2C */ lwz r4, 0x2c(r1)
/* 80181A38 0017E978  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80181A3C 0017E97C  3C 00 7F 80 */ lis r0, 0x7f80
/* 80181A40 0017E980  7C 03 00 00 */ cmpw r3, r0
/* 80181A44 0017E984  41 82 00 14 */ beq lbl_80181A58
/* 80181A48 0017E988  40 80 00 40 */ bge lbl_80181A88
/* 80181A4C 0017E98C  2C 03 00 00 */ cmpwi r3, 0
/* 80181A50 0017E990  41 82 00 20 */ beq lbl_80181A70
/* 80181A54 0017E994  48 00 00 34 */ b lbl_80181A88
lbl_80181A58:
/* 80181A58 0017E998  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181A5C 0017E99C  41 82 00 0C */ beq lbl_80181A68
/* 80181A60 0017E9A0  38 00 00 01 */ li r0, 1
/* 80181A64 0017E9A4  48 00 00 28 */ b lbl_80181A8C
lbl_80181A68:
/* 80181A68 0017E9A8  38 00 00 02 */ li r0, 2
/* 80181A6C 0017E9AC  48 00 00 20 */ b lbl_80181A8C
lbl_80181A70:
/* 80181A70 0017E9B0  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181A74 0017E9B4  41 82 00 0C */ beq lbl_80181A80
/* 80181A78 0017E9B8  38 00 00 05 */ li r0, 5
/* 80181A7C 0017E9BC  48 00 00 10 */ b lbl_80181A8C
lbl_80181A80:
/* 80181A80 0017E9C0  38 00 00 03 */ li r0, 3
/* 80181A84 0017E9C4  48 00 00 08 */ b lbl_80181A8C
lbl_80181A88:
/* 80181A88 0017E9C8  38 00 00 04 */ li r0, 4
lbl_80181A8C:
/* 80181A8C 0017E9CC  2C 00 00 01 */ cmpwi r0, 1
/* 80181A90 0017E9D0  40 82 00 08 */ bne lbl_80181A98
lbl_80181A94:
/* 80181A94 0017E9D4  3B 80 00 01 */ li r28, 1
lbl_80181A98:
/* 80181A98 0017E9D8  D0 41 00 28 */ stfs f2, 0x28(r1)
/* 80181A9C 0017E9DC  80 81 00 28 */ lwz r4, 0x28(r1)
/* 80181AA0 0017E9E0  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80181AA4 0017E9E4  3C 00 7F 80 */ lis r0, 0x7f80
/* 80181AA8 0017E9E8  7C 03 00 00 */ cmpw r3, r0
/* 80181AAC 0017E9EC  41 82 00 14 */ beq lbl_80181AC0
/* 80181AB0 0017E9F0  40 80 00 40 */ bge lbl_80181AF0
/* 80181AB4 0017E9F4  2C 03 00 00 */ cmpwi r3, 0
/* 80181AB8 0017E9F8  41 82 00 20 */ beq lbl_80181AD8
/* 80181ABC 0017E9FC  48 00 00 34 */ b lbl_80181AF0
lbl_80181AC0:
/* 80181AC0 0017EA00  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181AC4 0017EA04  41 82 00 0C */ beq lbl_80181AD0
/* 80181AC8 0017EA08  38 00 00 01 */ li r0, 1
/* 80181ACC 0017EA0C  48 00 00 28 */ b lbl_80181AF4
lbl_80181AD0:
/* 80181AD0 0017EA10  38 00 00 02 */ li r0, 2
/* 80181AD4 0017EA14  48 00 00 20 */ b lbl_80181AF4
lbl_80181AD8:
/* 80181AD8 0017EA18  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181ADC 0017EA1C  41 82 00 0C */ beq lbl_80181AE8
/* 80181AE0 0017EA20  38 00 00 05 */ li r0, 5
/* 80181AE4 0017EA24  48 00 00 10 */ b lbl_80181AF4
lbl_80181AE8:
/* 80181AE8 0017EA28  38 00 00 03 */ li r0, 3
/* 80181AEC 0017EA2C  48 00 00 08 */ b lbl_80181AF4
lbl_80181AF0:
/* 80181AF0 0017EA30  38 00 00 04 */ li r0, 4
lbl_80181AF4:
/* 80181AF4 0017EA34  2C 00 00 01 */ cmpwi r0, 1
/* 80181AF8 0017EA38  41 82 00 D4 */ beq lbl_80181BCC
/* 80181AFC 0017EA3C  C0 01 00 78 */ lfs f0, 0x78(r1)
/* 80181B00 0017EA40  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 80181B04 0017EA44  80 81 00 24 */ lwz r4, 0x24(r1)
/* 80181B08 0017EA48  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80181B0C 0017EA4C  3C 00 7F 80 */ lis r0, 0x7f80
/* 80181B10 0017EA50  7C 03 00 00 */ cmpw r3, r0
/* 80181B14 0017EA54  41 82 00 14 */ beq lbl_80181B28
/* 80181B18 0017EA58  40 80 00 40 */ bge lbl_80181B58
/* 80181B1C 0017EA5C  2C 03 00 00 */ cmpwi r3, 0
/* 80181B20 0017EA60  41 82 00 20 */ beq lbl_80181B40
/* 80181B24 0017EA64  48 00 00 34 */ b lbl_80181B58
lbl_80181B28:
/* 80181B28 0017EA68  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181B2C 0017EA6C  41 82 00 0C */ beq lbl_80181B38
/* 80181B30 0017EA70  38 00 00 01 */ li r0, 1
/* 80181B34 0017EA74  48 00 00 28 */ b lbl_80181B5C
lbl_80181B38:
/* 80181B38 0017EA78  38 00 00 02 */ li r0, 2
/* 80181B3C 0017EA7C  48 00 00 20 */ b lbl_80181B5C
lbl_80181B40:
/* 80181B40 0017EA80  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181B44 0017EA84  41 82 00 0C */ beq lbl_80181B50
/* 80181B48 0017EA88  38 00 00 05 */ li r0, 5
/* 80181B4C 0017EA8C  48 00 00 10 */ b lbl_80181B5C
lbl_80181B50:
/* 80181B50 0017EA90  38 00 00 03 */ li r0, 3
/* 80181B54 0017EA94  48 00 00 08 */ b lbl_80181B5C
lbl_80181B58:
/* 80181B58 0017EA98  38 00 00 04 */ li r0, 4
lbl_80181B5C:
/* 80181B5C 0017EA9C  2C 00 00 01 */ cmpwi r0, 1
/* 80181B60 0017EAA0  41 82 00 6C */ beq lbl_80181BCC
/* 80181B64 0017EAA4  C0 01 00 7C */ lfs f0, 0x7c(r1)
/* 80181B68 0017EAA8  D0 01 00 20 */ stfs f0, 0x20(r1)
/* 80181B6C 0017EAAC  80 81 00 20 */ lwz r4, 0x20(r1)
/* 80181B70 0017EAB0  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80181B74 0017EAB4  3C 00 7F 80 */ lis r0, 0x7f80
/* 80181B78 0017EAB8  7C 03 00 00 */ cmpw r3, r0
/* 80181B7C 0017EABC  41 82 00 14 */ beq lbl_80181B90
/* 80181B80 0017EAC0  40 80 00 40 */ bge lbl_80181BC0
/* 80181B84 0017EAC4  2C 03 00 00 */ cmpwi r3, 0
/* 80181B88 0017EAC8  41 82 00 20 */ beq lbl_80181BA8
/* 80181B8C 0017EACC  48 00 00 34 */ b lbl_80181BC0
lbl_80181B90:
/* 80181B90 0017EAD0  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181B94 0017EAD4  41 82 00 0C */ beq lbl_80181BA0
/* 80181B98 0017EAD8  38 00 00 01 */ li r0, 1
/* 80181B9C 0017EADC  48 00 00 28 */ b lbl_80181BC4
lbl_80181BA0:
/* 80181BA0 0017EAE0  38 00 00 02 */ li r0, 2
/* 80181BA4 0017EAE4  48 00 00 20 */ b lbl_80181BC4
lbl_80181BA8:
/* 80181BA8 0017EAE8  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181BAC 0017EAEC  41 82 00 0C */ beq lbl_80181BB8
/* 80181BB0 0017EAF0  38 00 00 05 */ li r0, 5
/* 80181BB4 0017EAF4  48 00 00 10 */ b lbl_80181BC4
lbl_80181BB8:
/* 80181BB8 0017EAF8  38 00 00 03 */ li r0, 3
/* 80181BBC 0017EAFC  48 00 00 08 */ b lbl_80181BC4
lbl_80181BC0:
/* 80181BC0 0017EB00  38 00 00 04 */ li r0, 4
lbl_80181BC4:
/* 80181BC4 0017EB04  2C 00 00 01 */ cmpwi r0, 1
/* 80181BC8 0017EB08  40 82 00 08 */ bne lbl_80181BD0
lbl_80181BCC:
/* 80181BCC 0017EB0C  3B 80 00 01 */ li r28, 1
lbl_80181BD0:
/* 80181BD0 0017EB10  D0 61 00 1C */ stfs f3, 0x1c(r1)
/* 80181BD4 0017EB14  80 81 00 1C */ lwz r4, 0x1c(r1)
/* 80181BD8 0017EB18  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80181BDC 0017EB1C  3C 00 7F 80 */ lis r0, 0x7f80
/* 80181BE0 0017EB20  7C 03 00 00 */ cmpw r3, r0
/* 80181BE4 0017EB24  41 82 00 14 */ beq lbl_80181BF8
/* 80181BE8 0017EB28  40 80 00 40 */ bge lbl_80181C28
/* 80181BEC 0017EB2C  2C 03 00 00 */ cmpwi r3, 0
/* 80181BF0 0017EB30  41 82 00 20 */ beq lbl_80181C10
/* 80181BF4 0017EB34  48 00 00 34 */ b lbl_80181C28
lbl_80181BF8:
/* 80181BF8 0017EB38  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181BFC 0017EB3C  41 82 00 0C */ beq lbl_80181C08
/* 80181C00 0017EB40  38 00 00 01 */ li r0, 1
/* 80181C04 0017EB44  48 00 00 28 */ b lbl_80181C2C
lbl_80181C08:
/* 80181C08 0017EB48  38 00 00 02 */ li r0, 2
/* 80181C0C 0017EB4C  48 00 00 20 */ b lbl_80181C2C
lbl_80181C10:
/* 80181C10 0017EB50  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181C14 0017EB54  41 82 00 0C */ beq lbl_80181C20
/* 80181C18 0017EB58  38 00 00 05 */ li r0, 5
/* 80181C1C 0017EB5C  48 00 00 10 */ b lbl_80181C2C
lbl_80181C20:
/* 80181C20 0017EB60  38 00 00 03 */ li r0, 3
/* 80181C24 0017EB64  48 00 00 08 */ b lbl_80181C2C
lbl_80181C28:
/* 80181C28 0017EB68  38 00 00 04 */ li r0, 4
lbl_80181C2C:
/* 80181C2C 0017EB6C  2C 00 00 01 */ cmpwi r0, 1
/* 80181C30 0017EB70  41 82 00 D4 */ beq lbl_80181D04
/* 80181C34 0017EB74  C0 01 00 84 */ lfs f0, 0x84(r1)
/* 80181C38 0017EB78  D0 01 00 18 */ stfs f0, 0x18(r1)
/* 80181C3C 0017EB7C  80 81 00 18 */ lwz r4, 0x18(r1)
/* 80181C40 0017EB80  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80181C44 0017EB84  3C 00 7F 80 */ lis r0, 0x7f80
/* 80181C48 0017EB88  7C 03 00 00 */ cmpw r3, r0
/* 80181C4C 0017EB8C  41 82 00 14 */ beq lbl_80181C60
/* 80181C50 0017EB90  40 80 00 40 */ bge lbl_80181C90
/* 80181C54 0017EB94  2C 03 00 00 */ cmpwi r3, 0
/* 80181C58 0017EB98  41 82 00 20 */ beq lbl_80181C78
/* 80181C5C 0017EB9C  48 00 00 34 */ b lbl_80181C90
lbl_80181C60:
/* 80181C60 0017EBA0  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181C64 0017EBA4  41 82 00 0C */ beq lbl_80181C70
/* 80181C68 0017EBA8  38 00 00 01 */ li r0, 1
/* 80181C6C 0017EBAC  48 00 00 28 */ b lbl_80181C94
lbl_80181C70:
/* 80181C70 0017EBB0  38 00 00 02 */ li r0, 2
/* 80181C74 0017EBB4  48 00 00 20 */ b lbl_80181C94
lbl_80181C78:
/* 80181C78 0017EBB8  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181C7C 0017EBBC  41 82 00 0C */ beq lbl_80181C88
/* 80181C80 0017EBC0  38 00 00 05 */ li r0, 5
/* 80181C84 0017EBC4  48 00 00 10 */ b lbl_80181C94
lbl_80181C88:
/* 80181C88 0017EBC8  38 00 00 03 */ li r0, 3
/* 80181C8C 0017EBCC  48 00 00 08 */ b lbl_80181C94
lbl_80181C90:
/* 80181C90 0017EBD0  38 00 00 04 */ li r0, 4
lbl_80181C94:
/* 80181C94 0017EBD4  2C 00 00 01 */ cmpwi r0, 1
/* 80181C98 0017EBD8  41 82 00 6C */ beq lbl_80181D04
/* 80181C9C 0017EBDC  C0 01 00 88 */ lfs f0, 0x88(r1)
/* 80181CA0 0017EBE0  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 80181CA4 0017EBE4  80 81 00 14 */ lwz r4, 0x14(r1)
/* 80181CA8 0017EBE8  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80181CAC 0017EBEC  3C 00 7F 80 */ lis r0, 0x7f80
/* 80181CB0 0017EBF0  7C 03 00 00 */ cmpw r3, r0
/* 80181CB4 0017EBF4  41 82 00 14 */ beq lbl_80181CC8
/* 80181CB8 0017EBF8  40 80 00 40 */ bge lbl_80181CF8
/* 80181CBC 0017EBFC  2C 03 00 00 */ cmpwi r3, 0
/* 80181CC0 0017EC00  41 82 00 20 */ beq lbl_80181CE0
/* 80181CC4 0017EC04  48 00 00 34 */ b lbl_80181CF8
lbl_80181CC8:
/* 80181CC8 0017EC08  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181CCC 0017EC0C  41 82 00 0C */ beq lbl_80181CD8
/* 80181CD0 0017EC10  38 00 00 01 */ li r0, 1
/* 80181CD4 0017EC14  48 00 00 28 */ b lbl_80181CFC
lbl_80181CD8:
/* 80181CD8 0017EC18  38 00 00 02 */ li r0, 2
/* 80181CDC 0017EC1C  48 00 00 20 */ b lbl_80181CFC
lbl_80181CE0:
/* 80181CE0 0017EC20  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80181CE4 0017EC24  41 82 00 0C */ beq lbl_80181CF0
/* 80181CE8 0017EC28  38 00 00 05 */ li r0, 5
/* 80181CEC 0017EC2C  48 00 00 10 */ b lbl_80181CFC
lbl_80181CF0:
/* 80181CF0 0017EC30  38 00 00 03 */ li r0, 3
/* 80181CF4 0017EC34  48 00 00 08 */ b lbl_80181CFC
lbl_80181CF8:
/* 80181CF8 0017EC38  38 00 00 04 */ li r0, 4
lbl_80181CFC:
/* 80181CFC 0017EC3C  2C 00 00 01 */ cmpwi r0, 1
/* 80181D00 0017EC40  40 82 00 08 */ bne lbl_80181D08
lbl_80181D04:
/* 80181D04 0017EC44  3B 80 00 01 */ li r28, 1
lbl_80181D08:
/* 80181D08 0017EC48  57 80 06 3F */ clrlwi. r0, r28, 0x18
/* 80181D0C 0017EC4C  40 82 00 54 */ bne lbl_80181D60
/* 80181D10 0017EC50  C0 21 00 88 */ lfs f1, 0x88(r1)
/* 80181D14 0017EC54  C0 01 00 84 */ lfs f0, 0x84(r1)
/* 80181D18 0017EC58  D0 7B 00 E4 */ stfs f3, 0xe4(r27)
/* 80181D1C 0017EC5C  D0 1B 00 E8 */ stfs f0, 0xe8(r27)
/* 80181D20 0017EC60  D0 3B 00 EC */ stfs f1, 0xec(r27)
/* 80181D24 0017EC64  C0 41 00 7C */ lfs f2, 0x7c(r1)
/* 80181D28 0017EC68  C0 21 00 78 */ lfs f1, 0x78(r1)
/* 80181D2C 0017EC6C  C0 01 00 74 */ lfs f0, 0x74(r1)
/* 80181D30 0017EC70  D0 1B 00 D8 */ stfs f0, 0xd8(r27)
/* 80181D34 0017EC74  D0 3B 00 DC */ stfs f1, 0xdc(r27)
/* 80181D38 0017EC78  D0 5B 00 E0 */ stfs f2, 0xe0(r27)
/* 80181D3C 0017EC7C  C0 41 00 70 */ lfs f2, 0x70(r1)
/* 80181D40 0017EC80  C0 21 00 6C */ lfs f1, 0x6c(r1)
/* 80181D44 0017EC84  C0 01 00 68 */ lfs f0, 0x68(r1)
/* 80181D48 0017EC88  D0 1B 00 F0 */ stfs f0, 0xf0(r27)
/* 80181D4C 0017EC8C  D0 3B 00 F4 */ stfs f1, 0xf4(r27)
/* 80181D50 0017EC90  D0 5B 00 F8 */ stfs f2, 0xf8(r27)
/* 80181D54 0017EC94  A8 01 00 10 */ lha r0, 0x10(r1)
/* 80181D58 0017EC98  B0 1B 00 FC */ sth r0, 0xfc(r27)
/* 80181D5C 0017EC9C  D3 FB 00 D0 */ stfs f31, 0xd0(r27)
lbl_80181D60:
/* 80181D60 0017ECA0  3B 5E 4E 20 */ addi r26, r30, 0x4e20
/* 80181D64 0017ECA4  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80181D68 0017ECA8  38 03 61 C0 */ addi r0, r3, g_dComIfG_gameInfo@l
/* 80181D6C 0017ECAC  7C 60 EA 14 */ add r3, r0, r29
/* 80181D70 0017ECB0  80 03 5D 7C */ lwz r0, 0x5d7c(r3)
/* 80181D74 0017ECB4  54 00 07 39 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80181D78 0017ECB8  41 82 00 10 */ beq lbl_80181D88
/* 80181D7C 0017ECBC  C0 02 9D 18 */ lfs f0, lbl_80453718-_SDA2_BASE_(r2)
/* 80181D80 0017ECC0  D0 1B 00 C8 */ stfs f0, 0xc8(r27)
/* 80181D84 0017ECC4  48 00 00 28 */ b lbl_80181DAC
lbl_80181D88:
/* 80181D88 0017ECC8  28 1A 00 00 */ cmplwi r26, 0
/* 80181D8C 0017ECCC  41 82 00 20 */ beq lbl_80181DAC
/* 80181D90 0017ECD0  7F 43 D3 78 */ mr r3, r26
/* 80181D94 0017ECD4  81 9A 00 00 */ lwz r12, 0(r26)
/* 80181D98 0017ECD8  81 8C 00 BC */ lwz r12, 0xbc(r12)
/* 80181D9C 0017ECDC  7D 89 03 A6 */ mtctr r12
/* 80181DA0 0017ECE0  4E 80 04 21 */ bctrl
/* 80181DA4 0017ECE4  C0 03 00 00 */ lfs f0, 0(r3)
/* 80181DA8 0017ECE8  D0 1B 00 C8 */ stfs f0, 0xc8(r27)
lbl_80181DAC:
/* 80181DAC 0017ECEC  28 1A 00 00 */ cmplwi r26, 0
/* 80181DB0 0017ECF0  41 82 00 20 */ beq lbl_80181DD0
/* 80181DB4 0017ECF4  7F 43 D3 78 */ mr r3, r26
/* 80181DB8 0017ECF8  81 9A 00 00 */ lwz r12, 0(r26)
/* 80181DBC 0017ECFC  81 8C 00 BC */ lwz r12, 0xbc(r12)
/* 80181DC0 0017ED00  7D 89 03 A6 */ mtctr r12
/* 80181DC4 0017ED04  4E 80 04 21 */ bctrl
/* 80181DC8 0017ED08  C0 03 00 04 */ lfs f0, 4(r3)
/* 80181DCC 0017ED0C  D0 1B 00 CC */ stfs f0, 0xcc(r27)
lbl_80181DD0:
/* 80181DD0 0017ED10  38 61 00 38 */ addi r3, r1, 0x38
/* 80181DD4 0017ED14  38 81 00 74 */ addi r4, r1, 0x74
/* 80181DD8 0017ED18  38 A1 00 80 */ addi r5, r1, 0x80
/* 80181DDC 0017ED1C  48 0E 4D 59 */ bl cXyz_NS___mi
/* 80181DE0 0017ED20  38 61 00 30 */ addi r3, r1, 0x30
/* 80181DE4 0017ED24  38 81 00 38 */ addi r4, r1, 0x38
/* 80181DE8 0017ED28  48 0E FA 99 */ bl cSGlobe_X4_
/* 80181DEC 0017ED2C  38 61 00 36 */ addi r3, r1, 0x36
/* 80181DF0 0017ED30  48 0E F2 F9 */ bl cSAngle_NS_Inv
/* 80181DF4 0017ED34  B0 7B 02 32 */ sth r3, 0x232(r27)
/* 80181DF8 0017ED38  A8 01 00 34 */ lha r0, 0x34(r1)
/* 80181DFC 0017ED3C  B0 1B 02 30 */ sth r0, 0x230(r27)
/* 80181E00 0017ED40  E3 E1 00 B8 */ psq_l f31, 184(r1), 0, 0
/* 80181E04 0017ED44  CB E1 00 B0 */ lfd f31, 0xb0(r1)
/* 80181E08 0017ED48  39 61 00 B0 */ addi r11, r1, 0xb0
/* 80181E0C 0017ED4C  48 1E 04 11 */ bl _restgpr_26
/* 80181E10 0017ED50  80 01 00 C4 */ lwz r0, 0xc4(r1)
/* 80181E14 0017ED54  7C 08 03 A6 */ mtlr r0
/* 80181E18 0017ED58  38 21 00 C0 */ addi r1, r1, 0xc0
/* 80181E1C 0017ED5C  4E 80 00 20 */ blr