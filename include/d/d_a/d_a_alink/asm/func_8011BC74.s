/* 8011BC74 00118BB4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8011BC78 00118BB8  7C 08 02 A6 */ mflr r0
/* 8011BC7C 00118BBC  90 01 00 14 */ stw r0, 0x14(r1)
/* 8011BC80 00118BC0  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8011BC84 00118BC4  7C 7F 1B 78 */ mr r31, r3
/* 8011BC88 00118BC8  38 80 00 B1 */ li r4, 0xb1
/* 8011BC8C 00118BCC  4B FA 71 19 */ bl daAlink_c_NS_commonProcInitNotSameProc
/* 8011BC90 00118BD0  2C 03 00 00 */ cmpwi r3, 0
/* 8011BC94 00118BD4  40 82 00 0C */ bne lbl_8011BCA0
/* 8011BC98 00118BD8  38 60 00 00 */ li r3, 0
/* 8011BC9C 00118BDC  48 00 00 68 */ b lbl_8011BD04
lbl_8011BCA0:
/* 8011BCA0 00118BE0  A8 1F 04 E6 */ lha r0, 0x4e6(r31)
/* 8011BCA4 00118BE4  B0 1F 04 DE */ sth r0, 0x4de(r31)
/* 8011BCA8 00118BE8  7F E3 FB 78 */ mr r3, r31
/* 8011BCAC 00118BEC  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011BCB0 00118BF0  C0 5F 05 34 */ lfs f2, 0x534(r31)
/* 8011BCB4 00118BF4  38 80 00 00 */ li r4, 0
/* 8011BCB8 00118BF8  4B F9 FA B9 */ bl daAlink_c_NS_setSpecialGravity
/* 8011BCBC 00118BFC  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011BCC0 00118C00  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
/* 8011BCC4 00118C04  D0 1F 33 98 */ stfs f0, 0x3398(r31)
/* 8011BCC8 00118C08  7F E3 FB 78 */ mr r3, r31
/* 8011BCCC 00118C0C  38 80 00 00 */ li r4, 0
/* 8011BCD0 00118C10  38 A0 00 00 */ li r5, 0
/* 8011BCD4 00118C14  4B FA 56 09 */ bl daAlink_c_NS_deleteEquipItem
/* 8011BCD8 00118C18  80 1F 05 74 */ lwz r0, 0x574(r31)
/* 8011BCDC 00118C1C  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 8011BCE0 00118C20  40 82 00 20 */ bne lbl_8011BD00
/* 8011BCE4 00118C24  7F E3 FB 78 */ mr r3, r31
/* 8011BCE8 00118C28  38 80 00 FC */ li r4, 0xfc
/* 8011BCEC 00118C2C  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011BCF0 00118C30  C0 42 92 C4 */ lfs f2, lbl_80452CC4-_SDA2_BASE_(r2)
/* 8011BCF4 00118C34  4B F9 12 ED */ bl daAlink_c_NS_setSingleAnimeBaseSpeed
/* 8011BCF8 00118C38  7F E3 FB 78 */ mr r3, r31
/* 8011BCFC 00118C3C  4B FF FF 19 */ bl daAlink_c_NS_setMonkeyMoveAnime
lbl_8011BD00:
/* 8011BD00 00118C40  38 60 00 01 */ li r3, 1
lbl_8011BD04:
/* 8011BD04 00118C44  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8011BD08 00118C48  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8011BD0C 00118C4C  7C 08 03 A6 */ mtlr r0
/* 8011BD10 00118C50  38 21 00 10 */ addi r1, r1, 0x10
/* 8011BD14 00118C54  4E 80 00 20 */ blr