/* 800E37C0 000E0700  3C 60 80 39 */ lis r3, lbl_8038E714@ha
/* 800E37C4 000E0704  38 63 E7 14 */ addi r3, r3, lbl_8038E714@l
/* 800E37C8 000E0708  C0 23 00 1C */ lfs f1, 0x1c(r3)
/* 800E37CC 000E070C  4E 80 00 20 */ blr