#include <ni/controller_editor/PadControl.hpp>
namespace NI::NHL2::SERVER {

void PadControl::calcCompensationFactors() {
float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  unsigned char auVar8 [16];
  unsigned char auVar9 [16];
  unsigned char auVar10 [16];
  unsigned char auVar11 [16];
  unsigned char auVar12 [16];
  unsigned char auVar13 [16];
  unsigned char auVar14 [16];
  unsigned char auVar15 [16];
  
  if (this[0x101] == (PadControl)0x0) {
    return;
  }
  fVar6 = *(float *)(this + 0x40);
  fVar1 = *(float *)(this + 0x44);
  fVar2 = *(float *)(this + 0x48);
  fVar3 = *(float *)(this + 0x4c);
  fVar4 = *(float *)(this + 0x50);
  fVar5 = *(float *)(this + 0x54);
  fVar7 = (fVar6 + 0.0 + fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + *(float *)(this + 0x58) +
           *(float *)(this + 0x5c) + *(float *)(this + 0x60) + *(float *)(this + 100) +
           *(float *)(this + 0x68) + *(float *)(this + 0x6c) + *(float *)(this + 0x70) +
           *(float *)(this + 0x74) + *(float *)(this + 0x78) + *(float *)(this + 0x7c)) * 0.0625;
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(float *)(this + 0x40) = fVar7;
  }
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    *(float *)(this + 0x44) = fVar7;
  }
  if ((fVar2 == 0.0) && (!NAN(fVar2))) {
    *(float *)(this + 0x48) = fVar7;
  }
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    *(float *)(this + 0x4c) = fVar7;
  }
  if ((fVar4 == 0.0) && (!NAN(fVar4))) {
    *(float *)(this + 0x50) = fVar7;
  }
  if ((fVar5 == 0.0) && (!NAN(fVar5))) {
    *(float *)(this + 0x54) = fVar7;
  }
  if ((*(float *)(this + 0x58) == 0.0) && (!NAN(*(float *)(this + 0x58)))) {
    *(float *)(this + 0x58) = fVar7;
  }
  if ((*(float *)(this + 0x5c) == 0.0) && (!NAN(*(float *)(this + 0x5c)))) {
    *(float *)(this + 0x5c) = fVar7;
  }
  if ((*(float *)(this + 0x60) == 0.0) && (!NAN(*(float *)(this + 0x60)))) {
    *(float *)(this + 0x60) = fVar7;
  }
  if ((*(float *)(this + 100) == 0.0) && (!NAN(*(float *)(this + 100)))) {
    *(float *)(this + 100) = fVar7;
  }
  if ((*(float *)(this + 0x68) == 0.0) && (!NAN(*(float *)(this + 0x68)))) {
    *(float *)(this + 0x68) = fVar7;
  }
  if ((*(float *)(this + 0x6c) == 0.0) && (!NAN(*(float *)(this + 0x6c)))) {
    *(float *)(this + 0x6c) = fVar7;
  }
  if ((*(float *)(this + 0x70) == 0.0) && (!NAN(*(float *)(this + 0x70)))) {
    *(float *)(this + 0x70) = fVar7;
  }
  if ((*(float *)(this + 0x74) == 0.0) && (!NAN(*(float *)(this + 0x74)))) {
    *(float *)(this + 0x74) = fVar7;
  }
  if ((*(float *)(this + 0x78) == 0.0) && (!NAN(*(float *)(this + 0x78)))) {
    *(float *)(this + 0x78) = fVar7;
  }
  if ((*(float *)(this + 0x7c) == 0.0) && (!NAN(*(float *)(this + 0x7c)))) {
    *(float *)(this + 0x7c) = fVar7;
  }
  fVar6 = (*(float *)this + 0.0 + *(float *)(this + 4) + *(float *)(this + 8) +
           *(float *)(this + 0xc) + *(float *)(this + 0x10) + *(float *)(this + 0x14) +
           *(float *)(this + 0x18) + *(float *)(this + 0x1c) + *(float *)(this + 0x20) +
           *(float *)(this + 0x24) + *(float *)(this + 0x28) + *(float *)(this + 0x2c) +
           *(float *)(this + 0x30) + *(float *)(this + 0x34) + *(float *)(this + 0x38) +
          *(float *)(this + 0x3c)) * 0.0625;
  if ((*(float *)this == 0.0) && (!NAN(*(float *)this))) {
    *(float *)this = fVar6;
  }
  if ((*(float *)(this + 4) == 0.0) && (!NAN(*(float *)(this + 4)))) {
    *(float *)(this + 4) = fVar6;
  }
  if ((*(float *)(this + 8) == 0.0) && (!NAN(*(float *)(this + 8)))) {
    *(float *)(this + 8) = fVar6;
  }
  if ((*(float *)(this + 0xc) == 0.0) && (!NAN(*(float *)(this + 0xc)))) {
    *(float *)(this + 0xc) = fVar6;
  }
  if ((*(float *)(this + 0x10) == 0.0) && (!NAN(*(float *)(this + 0x10)))) {
    *(float *)(this + 0x10) = fVar6;
  }
  if ((*(float *)(this + 0x14) == 0.0) && (!NAN(*(float *)(this + 0x14)))) {
    *(float *)(this + 0x14) = fVar6;
  }
  if ((*(float *)(this + 0x18) == 0.0) && (!NAN(*(float *)(this + 0x18)))) {
    *(float *)(this + 0x18) = fVar6;
  }
  if ((*(float *)(this + 0x1c) == 0.0) && (!NAN(*(float *)(this + 0x1c)))) {
    *(float *)(this + 0x1c) = fVar6;
  }
  if ((*(float *)(this + 0x20) == 0.0) && (!NAN(*(float *)(this + 0x20)))) {
    *(float *)(this + 0x20) = fVar6;
  }
  if ((*(float *)(this + 0x24) == 0.0) && (!NAN(*(float *)(this + 0x24)))) {
    *(float *)(this + 0x24) = fVar6;
  }
  if ((*(float *)(this + 0x28) == 0.0) && (!NAN(*(float *)(this + 0x28)))) {
    *(float *)(this + 0x28) = fVar6;
  }
  if ((*(float *)(this + 0x2c) == 0.0) && (!NAN(*(float *)(this + 0x2c)))) {
    *(float *)(this + 0x2c) = fVar6;
  }
  if ((*(float *)(this + 0x30) == 0.0) && (!NAN(*(float *)(this + 0x30)))) {
    *(float *)(this + 0x30) = fVar6;
  }
  if ((*(float *)(this + 0x34) == 0.0) && (!NAN(*(float *)(this + 0x34)))) {
    *(float *)(this + 0x34) = fVar6;
  }
  if ((*(float *)(this + 0x38) == 0.0) && (!NAN(*(float *)(this + 0x38)))) {
    *(float *)(this + 0x38) = fVar6;
  }
  if ((*(float *)(this + 0x3c) == 0.0) && (!NAN(*(float *)(this + 0x3c)))) {
    *(float *)(this + 0x3c) = fVar6;
  }
  auVar15._0_8_ = CONCAT44(fVar7,fVar7);
  auVar15._8_4_ = fVar7;
  auVar15._12_4_ = fVar7;
  auVar10._8_4_ = fVar7;
  auVar10._0_8_ = auVar15._0_8_;
  auVar10._12_4_ = fVar7;
  auVar11 = divps(auVar10,*(unsigned char (*) [16])(this + 0x40));
  *(unsigned char (*) [16])(this + 0xc0) = auVar11;
  auVar12._8_4_ = fVar7;
  auVar12._0_8_ = auVar15._0_8_;
  auVar12._12_4_ = fVar7;
  auVar11 = divps(auVar12,*(unsigned char (*) [16])(this + 0x50));
  *(unsigned char (*) [16])(this + 0xd0) = auVar11;
  auVar13._8_4_ = fVar7;
  auVar13._0_8_ = auVar15._0_8_;
  auVar13._12_4_ = fVar7;
  auVar11 = divps(auVar13,*(unsigned char (*) [16])(this + 0x60));
  *(unsigned char (*) [16])(this + 0xe0) = auVar11;
  auVar11 = divps(auVar15,*(unsigned char (*) [16])(this + 0x70));
  *(unsigned char (*) [16])(this + 0xf0) = auVar11;
  auVar11._0_8_ = CONCAT44(fVar6,fVar6);
  auVar11._8_4_ = fVar6;
  auVar11._12_4_ = fVar6;
  auVar14._8_4_ = fVar6;
  auVar14._0_8_ = auVar11._0_8_;
  auVar14._12_4_ = fVar6;
  auVar15 = divps(auVar14,*(unsigned char (*) [16])this);
  *(unsigned char (*) [16])(this + 0x80) = auVar15;
  auVar8._8_4_ = fVar6;
  auVar8._0_8_ = auVar11._0_8_;
  auVar8._12_4_ = fVar6;
  auVar15 = divps(auVar8,*(unsigned char (*) [16])(this + 0x10));
  *(unsigned char (*) [16])(this + 0x90) = auVar15;
  auVar9._8_4_ = fVar6;
  auVar9._0_8_ = auVar11._0_8_;
  auVar9._12_4_ = fVar6;
  auVar15 = divps(auVar9,*(unsigned char (*) [16])(this + 0x20));
  *(unsigned char (*) [16])(this + 0xa0) = auVar15;
  auVar11 = divps(auVar11,*(unsigned char (*) [16])(this + 0x30));
  *(unsigned char (*) [16])(this + 0xb0) = auVar11;
  if (1.7 < *(float *)(this + 0xc0)) {
    *(unsigned int *)(this + 0xc0) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xc4)) goto LAB_100026154;
LAB_1000259bf:
    if (*(float *)(this + 200) <= 1.7) goto LAB_1000259d4;
LAB_100026173:
    *(unsigned int *)(this + 200) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xcc)) goto LAB_100026192;
LAB_1000259e9:
    if (*(float *)(this + 0xd0) <= 1.7) goto LAB_1000259fe;
LAB_1000261b1:
    *(unsigned int *)(this + 0xd0) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xd4)) goto LAB_1000261d0;
LAB_100025a13:
    if (*(float *)(this + 0xd8) <= 1.7) goto LAB_100025a28;
LAB_1000261ef:
    *(unsigned int *)(this + 0xd8) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xdc)) goto LAB_10002620e;
LAB_100025a3d:
    if (*(float *)(this + 0xe0) <= 1.7) goto LAB_100025a52;
LAB_10002622d:
    *(unsigned int *)(this + 0xe0) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xe4)) goto LAB_10002624c;
LAB_100025a67:
    if (*(float *)(this + 0xe8) <= 1.7) goto LAB_100025a7c;
LAB_10002626b:
    *(unsigned int *)(this + 0xe8) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xec)) goto LAB_10002628a;
LAB_100025a91:
    if (*(float *)(this + 0xf0) <= 1.7) goto LAB_100025aa6;
LAB_1000262a9:
    *(unsigned int *)(this + 0xf0) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xf4)) goto LAB_1000262c8;
LAB_100025abb:
    if (*(float *)(this + 0xf8) <= 1.7) goto LAB_100025ad0;
LAB_1000262e7:
    *(unsigned int *)(this + 0xf8) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xfc)) goto LAB_100026306;
LAB_100025ae5:
    if (*(float *)(this + 0x80) <= 1.7) goto LAB_100025afa;
LAB_100026325:
    *(unsigned int *)(this + 0x80) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x84)) goto LAB_100026344;
LAB_100025b0f:
    if (*(float *)(this + 0x88) <= 1.7) goto LAB_100025b24;
LAB_100026363:
    *(unsigned int *)(this + 0x88) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x8c)) goto LAB_100026382;
LAB_100025b39:
    if (*(float *)(this + 0x90) <= 1.7) goto LAB_100025b4e;
LAB_1000263a1:
    *(unsigned int *)(this + 0x90) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x94)) goto LAB_1000263c0;
LAB_100025b63:
    if (*(float *)(this + 0x98) <= 1.7) goto LAB_100025b78;
LAB_1000263df:
    *(unsigned int *)(this + 0x98) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x9c)) goto LAB_1000263fe;
LAB_100025b8d:
    if (*(float *)(this + 0xa0) <= 1.7) goto LAB_100025ba2;
LAB_10002641d:
    *(unsigned int *)(this + 0xa0) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xa4)) goto LAB_10002643c;
LAB_100025bb7:
    if (*(float *)(this + 0xa8) <= 1.7) goto LAB_100025bcc;
LAB_10002645b:
    *(unsigned int *)(this + 0xa8) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xac)) goto LAB_10002647a;
LAB_100025be1:
    if (*(float *)(this + 0xb0) <= 1.7) goto LAB_100025bf6;
LAB_100026499:
    *(unsigned int *)(this + 0xb0) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xb4)) goto LAB_1000264b8;
LAB_100025c0b:
    if (*(float *)(this + 0xb8) <= 1.7) goto LAB_100025c20;
LAB_1000264d7:
    *(unsigned int *)(this + 0xb8) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xbc)) goto LAB_1000264f6;
LAB_100025c35:
    if (0.58823526 < *(float *)(this + 0xc0) || *(float *)(this + 0xc0) == 0.58823526)
    goto LAB_100025c4a;
LAB_100026515:
    *(unsigned int *)(this + 0xc0) = 0x3f169696;
    if (*(float *)(this + 0xc4) <= 0.58823526 && *(float *)(this + 0xc4) != 0.58823526)
    goto LAB_10002652c;
LAB_100025c57:
    if (0.58823526 < *(float *)(this + 200) || *(float *)(this + 200) == 0.58823526)
    goto LAB_100025c64;
LAB_100026543:
    *(unsigned int *)(this + 200) = 0x3f169696;
    if (*(float *)(this + 0xcc) <= 0.58823526 && *(float *)(this + 0xcc) != 0.58823526)
    goto LAB_10002655a;
LAB_100025c71:
    if (0.58823526 < *(float *)(this + 0xd0) || *(float *)(this + 0xd0) == 0.58823526)
    goto LAB_100025c7e;
LAB_100026571:
    *(unsigned int *)(this + 0xd0) = 0x3f169696;
    if (*(float *)(this + 0xd4) <= 0.58823526 && *(float *)(this + 0xd4) != 0.58823526)
    goto LAB_100026588;
LAB_100025c8b:
    if (0.58823526 < *(float *)(this + 0xd8) || *(float *)(this + 0xd8) == 0.58823526)
    goto LAB_100025c98;
LAB_10002659f:
    *(unsigned int *)(this + 0xd8) = 0x3f169696;
    if (*(float *)(this + 0xdc) <= 0.58823526 && *(float *)(this + 0xdc) != 0.58823526)
    goto LAB_1000265b6;
LAB_100025ca5:
    if (0.58823526 < *(float *)(this + 0xe0) || *(float *)(this + 0xe0) == 0.58823526)
    goto LAB_100025cb2;
LAB_1000265cd:
    *(unsigned int *)(this + 0xe0) = 0x3f169696;
    if (*(float *)(this + 0xe4) <= 0.58823526 && *(float *)(this + 0xe4) != 0.58823526)
    goto LAB_1000265e4;
LAB_100025cbf:
    if (0.58823526 < *(float *)(this + 0xe8) || *(float *)(this + 0xe8) == 0.58823526)
    goto LAB_100025ccc;
LAB_1000265fb:
    *(unsigned int *)(this + 0xe8) = 0x3f169696;
    if (*(float *)(this + 0xec) <= 0.58823526 && *(float *)(this + 0xec) != 0.58823526)
    goto LAB_100026612;
LAB_100025cd9:
    if (0.58823526 < *(float *)(this + 0xf0) || *(float *)(this + 0xf0) == 0.58823526)
    goto LAB_100025ce6;
LAB_100026629:
    *(unsigned int *)(this + 0xf0) = 0x3f169696;
    if (*(float *)(this + 0xf4) <= 0.58823526 && *(float *)(this + 0xf4) != 0.58823526)
    goto LAB_100026640;
LAB_100025cf3:
    if (0.58823526 < *(float *)(this + 0xf8) || *(float *)(this + 0xf8) == 0.58823526)
    goto LAB_100025d00;
LAB_100026657:
    *(unsigned int *)(this + 0xf8) = 0x3f169696;
    if (*(float *)(this + 0xfc) <= 0.58823526 && *(float *)(this + 0xfc) != 0.58823526)
    goto LAB_10002666e;
LAB_100025d0d:
    if (0.58823526 < *(float *)(this + 0x80) || *(float *)(this + 0x80) == 0.58823526)
    goto LAB_100025d1a;
LAB_100026685:
    *(unsigned int *)(this + 0x80) = 0x3f169696;
    if (*(float *)(this + 0x84) <= 0.58823526 && *(float *)(this + 0x84) != 0.58823526)
    goto LAB_10002669c;
LAB_100025d27:
    if (0.58823526 < *(float *)(this + 0x88) || *(float *)(this + 0x88) == 0.58823526)
    goto LAB_100025d34;
LAB_1000266b3:
    *(unsigned int *)(this + 0x88) = 0x3f169696;
    if (*(float *)(this + 0x8c) <= 0.58823526 && *(float *)(this + 0x8c) != 0.58823526)
    goto LAB_1000266ca;
LAB_100025d41:
    if (0.58823526 < *(float *)(this + 0x90) || *(float *)(this + 0x90) == 0.58823526)
    goto LAB_100025d4e;
LAB_1000266e1:
    *(unsigned int *)(this + 0x90) = 0x3f169696;
    if (*(float *)(this + 0x94) <= 0.58823526 && *(float *)(this + 0x94) != 0.58823526)
    goto LAB_1000266f8;
LAB_100025d5b:
    if (0.58823526 < *(float *)(this + 0x98) || *(float *)(this + 0x98) == 0.58823526)
    goto LAB_100025d68;
LAB_10002670f:
    *(unsigned int *)(this + 0x98) = 0x3f169696;
    if (*(float *)(this + 0x9c) <= 0.58823526 && *(float *)(this + 0x9c) != 0.58823526)
    goto LAB_100026726;
LAB_100025d75:
    if (0.58823526 < *(float *)(this + 0xa0) || *(float *)(this + 0xa0) == 0.58823526)
    goto LAB_100025d82;
LAB_10002673d:
    *(unsigned int *)(this + 0xa0) = 0x3f169696;
    if (*(float *)(this + 0xa4) <= 0.58823526 && *(float *)(this + 0xa4) != 0.58823526)
    goto LAB_100026754;
LAB_100025d8f:
    if (0.58823526 < *(float *)(this + 0xa8) || *(float *)(this + 0xa8) == 0.58823526)
    goto LAB_100025d9c;
LAB_10002676b:
    *(unsigned int *)(this + 0xa8) = 0x3f169696;
    if (*(float *)(this + 0xac) <= 0.58823526 && *(float *)(this + 0xac) != 0.58823526)
    goto LAB_100026782;
LAB_100025da9:
    if (0.58823526 < *(float *)(this + 0xb0) || *(float *)(this + 0xb0) == 0.58823526)
    goto LAB_100025db6;
LAB_100026799:
    *(unsigned int *)(this + 0xb0) = 0x3f169696;
    if (*(float *)(this + 0xb4) <= 0.58823526 && *(float *)(this + 0xb4) != 0.58823526)
    goto LAB_1000267b0;
LAB_100025dc3:
    if (0.58823526 < *(float *)(this + 0xb8) || *(float *)(this + 0xb8) == 0.58823526)
    goto LAB_100025dd0;
LAB_1000267c7:
    *(unsigned int *)(this + 0xb8) = 0x3f169696;
    if (0.58823526 < *(float *)(this + 0xbc) || *(float *)(this + 0xbc) == 0.58823526)
    goto LAB_100025de3;
  }
  else {
    if (*(float *)(this + 0xc4) <= 1.7) goto LAB_1000259bf;
LAB_100026154:
    *(unsigned int *)(this + 0xc4) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 200)) goto LAB_100026173;
LAB_1000259d4:
    if (*(float *)(this + 0xcc) <= 1.7) goto LAB_1000259e9;
LAB_100026192:
    *(unsigned int *)(this + 0xcc) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xd0)) goto LAB_1000261b1;
LAB_1000259fe:
    if (*(float *)(this + 0xd4) <= 1.7) goto LAB_100025a13;
LAB_1000261d0:
    *(unsigned int *)(this + 0xd4) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xd8)) goto LAB_1000261ef;
LAB_100025a28:
    if (*(float *)(this + 0xdc) <= 1.7) goto LAB_100025a3d;
LAB_10002620e:
    *(unsigned int *)(this + 0xdc) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xe0)) goto LAB_10002622d;
LAB_100025a52:
    if (*(float *)(this + 0xe4) <= 1.7) goto LAB_100025a67;
LAB_10002624c:
    *(unsigned int *)(this + 0xe4) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xe8)) goto LAB_10002626b;
LAB_100025a7c:
    if (*(float *)(this + 0xec) <= 1.7) goto LAB_100025a91;
LAB_10002628a:
    *(unsigned int *)(this + 0xec) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xf0)) goto LAB_1000262a9;
LAB_100025aa6:
    if (*(float *)(this + 0xf4) <= 1.7) goto LAB_100025abb;
LAB_1000262c8:
    *(unsigned int *)(this + 0xf4) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xf8)) goto LAB_1000262e7;
LAB_100025ad0:
    if (*(float *)(this + 0xfc) <= 1.7) goto LAB_100025ae5;
LAB_100026306:
    *(unsigned int *)(this + 0xfc) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x80)) goto LAB_100026325;
LAB_100025afa:
    if (*(float *)(this + 0x84) <= 1.7) goto LAB_100025b0f;
LAB_100026344:
    *(unsigned int *)(this + 0x84) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x88)) goto LAB_100026363;
LAB_100025b24:
    if (*(float *)(this + 0x8c) <= 1.7) goto LAB_100025b39;
LAB_100026382:
    *(unsigned int *)(this + 0x8c) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x90)) goto LAB_1000263a1;
LAB_100025b4e:
    if (*(float *)(this + 0x94) <= 1.7) goto LAB_100025b63;
LAB_1000263c0:
    *(unsigned int *)(this + 0x94) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0x98)) goto LAB_1000263df;
LAB_100025b78:
    if (*(float *)(this + 0x9c) <= 1.7) goto LAB_100025b8d;
LAB_1000263fe:
    *(unsigned int *)(this + 0x9c) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xa0)) goto LAB_10002641d;
LAB_100025ba2:
    if (*(float *)(this + 0xa4) <= 1.7) goto LAB_100025bb7;
LAB_10002643c:
    *(unsigned int *)(this + 0xa4) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xa8)) goto LAB_10002645b;
LAB_100025bcc:
    if (*(float *)(this + 0xac) <= 1.7) goto LAB_100025be1;
LAB_10002647a:
    *(unsigned int *)(this + 0xac) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xb0)) goto LAB_100026499;
LAB_100025bf6:
    if (*(float *)(this + 0xb4) <= 1.7) goto LAB_100025c0b;
LAB_1000264b8:
    *(unsigned int *)(this + 0xb4) = 0x3fd9999a;
    if (1.7 < *(float *)(this + 0xb8)) goto LAB_1000264d7;
LAB_100025c20:
    if (*(float *)(this + 0xbc) <= 1.7) goto LAB_100025c35;
LAB_1000264f6:
    *(unsigned int *)(this + 0xbc) = 0x3fd9999a;
    if (*(float *)(this + 0xc0) <= 0.58823526 && *(float *)(this + 0xc0) != 0.58823526)
    goto LAB_100026515;
LAB_100025c4a:
    if (0.58823526 < *(float *)(this + 0xc4) || *(float *)(this + 0xc4) == 0.58823526)
    goto LAB_100025c57;
LAB_10002652c:
    *(unsigned int *)(this + 0xc4) = 0x3f169696;
    if (*(float *)(this + 200) <= 0.58823526 && *(float *)(this + 200) != 0.58823526)
    goto LAB_100026543;
LAB_100025c64:
    if (0.58823526 < *(float *)(this + 0xcc) || *(float *)(this + 0xcc) == 0.58823526)
    goto LAB_100025c71;
LAB_10002655a:
    *(unsigned int *)(this + 0xcc) = 0x3f169696;
    if (*(float *)(this + 0xd0) <= 0.58823526 && *(float *)(this + 0xd0) != 0.58823526)
    goto LAB_100026571;
LAB_100025c7e:
    if (0.58823526 < *(float *)(this + 0xd4) || *(float *)(this + 0xd4) == 0.58823526)
    goto LAB_100025c8b;
LAB_100026588:
    *(unsigned int *)(this + 0xd4) = 0x3f169696;
    if (*(float *)(this + 0xd8) <= 0.58823526 && *(float *)(this + 0xd8) != 0.58823526)
    goto LAB_10002659f;
LAB_100025c98:
    if (0.58823526 < *(float *)(this + 0xdc) || *(float *)(this + 0xdc) == 0.58823526)
    goto LAB_100025ca5;
LAB_1000265b6:
    *(unsigned int *)(this + 0xdc) = 0x3f169696;
    if (*(float *)(this + 0xe0) <= 0.58823526 && *(float *)(this + 0xe0) != 0.58823526)
    goto LAB_1000265cd;
LAB_100025cb2:
    if (0.58823526 < *(float *)(this + 0xe4) || *(float *)(this + 0xe4) == 0.58823526)
    goto LAB_100025cbf;
LAB_1000265e4:
    *(unsigned int *)(this + 0xe4) = 0x3f169696;
    if (*(float *)(this + 0xe8) <= 0.58823526 && *(float *)(this + 0xe8) != 0.58823526)
    goto LAB_1000265fb;
LAB_100025ccc:
    if (0.58823526 < *(float *)(this + 0xec) || *(float *)(this + 0xec) == 0.58823526)
    goto LAB_100025cd9;
LAB_100026612:
    *(unsigned int *)(this + 0xec) = 0x3f169696;
    if (*(float *)(this + 0xf0) <= 0.58823526 && *(float *)(this + 0xf0) != 0.58823526)
    goto LAB_100026629;
LAB_100025ce6:
    if (0.58823526 < *(float *)(this + 0xf4) || *(float *)(this + 0xf4) == 0.58823526)
    goto LAB_100025cf3;
LAB_100026640:
    *(unsigned int *)(this + 0xf4) = 0x3f169696;
    if (*(float *)(this + 0xf8) <= 0.58823526 && *(float *)(this + 0xf8) != 0.58823526)
    goto LAB_100026657;
LAB_100025d00:
    if (0.58823526 < *(float *)(this + 0xfc) || *(float *)(this + 0xfc) == 0.58823526)
    goto LAB_100025d0d;
LAB_10002666e:
    *(unsigned int *)(this + 0xfc) = 0x3f169696;
    if (*(float *)(this + 0x80) <= 0.58823526 && *(float *)(this + 0x80) != 0.58823526)
    goto LAB_100026685;
LAB_100025d1a:
    if (0.58823526 < *(float *)(this + 0x84) || *(float *)(this + 0x84) == 0.58823526)
    goto LAB_100025d27;
LAB_10002669c:
    *(unsigned int *)(this + 0x84) = 0x3f169696;
    if (*(float *)(this + 0x88) <= 0.58823526 && *(float *)(this + 0x88) != 0.58823526)
    goto LAB_1000266b3;
LAB_100025d34:
    if (0.58823526 < *(float *)(this + 0x8c) || *(float *)(this + 0x8c) == 0.58823526)
    goto LAB_100025d41;
LAB_1000266ca:
    *(unsigned int *)(this + 0x8c) = 0x3f169696;
    if (*(float *)(this + 0x90) <= 0.58823526 && *(float *)(this + 0x90) != 0.58823526)
    goto LAB_1000266e1;
LAB_100025d4e:
    if (0.58823526 < *(float *)(this + 0x94) || *(float *)(this + 0x94) == 0.58823526)
    goto LAB_100025d5b;
LAB_1000266f8:
    *(unsigned int *)(this + 0x94) = 0x3f169696;
    if (*(float *)(this + 0x98) <= 0.58823526 && *(float *)(this + 0x98) != 0.58823526)
    goto LAB_10002670f;
LAB_100025d68:
    if (0.58823526 < *(float *)(this + 0x9c) || *(float *)(this + 0x9c) == 0.58823526)
    goto LAB_100025d75;
LAB_100026726:
    *(unsigned int *)(this + 0x9c) = 0x3f169696;
    if (*(float *)(this + 0xa0) <= 0.58823526 && *(float *)(this + 0xa0) != 0.58823526)
    goto LAB_10002673d;
LAB_100025d82:
    if (0.58823526 < *(float *)(this + 0xa4) || *(float *)(this + 0xa4) == 0.58823526)
    goto LAB_100025d8f;
LAB_100026754:
    *(unsigned int *)(this + 0xa4) = 0x3f169696;
    if (*(float *)(this + 0xa8) <= 0.58823526 && *(float *)(this + 0xa8) != 0.58823526)
    goto LAB_10002676b;
LAB_100025d9c:
    if (0.58823526 < *(float *)(this + 0xac) || *(float *)(this + 0xac) == 0.58823526)
    goto LAB_100025da9;
LAB_100026782:
    *(unsigned int *)(this + 0xac) = 0x3f169696;
    if (*(float *)(this + 0xb0) <= 0.58823526 && *(float *)(this + 0xb0) != 0.58823526)
    goto LAB_100026799;
LAB_100025db6:
    if (0.58823526 < *(float *)(this + 0xb4) || *(float *)(this + 0xb4) == 0.58823526)
    goto LAB_100025dc3;
LAB_1000267b0:
    *(unsigned int *)(this + 0xb4) = 0x3f169696;
    if (*(float *)(this + 0xb8) <= 0.58823526 && *(float *)(this + 0xb8) != 0.58823526)
    goto LAB_1000267c7;
LAB_100025dd0:
    if (0.58823526 < *(float *)(this + 0xbc) || *(float *)(this + 0xbc) == 0.58823526)
    goto LAB_100025de3;
  }
  *(unsigned int *)(this + 0xbc) = 0x3f169696;
LAB_100025de3:
  if ((*(float *)(this + 0xc0) == 0.0) && (!NAN(*(float *)(this + 0xc0)))) {
    *(unsigned int *)(this + 0xc0) = 0x3f800000;
  }
  if ((*(float *)(this + 0xc4) == 0.0) && (!NAN(*(float *)(this + 0xc4)))) {
    *(unsigned int *)(this + 0xc4) = 0x3f800000;
  }
  if ((*(float *)(this + 200) == 0.0) && (!NAN(*(float *)(this + 200)))) {
    *(unsigned int *)(this + 200) = 0x3f800000;
  }
  if ((*(float *)(this + 0xcc) == 0.0) && (!NAN(*(float *)(this + 0xcc)))) {
    *(unsigned int *)(this + 0xcc) = 0x3f800000;
  }
  if ((*(float *)(this + 0xd0) == 0.0) && (!NAN(*(float *)(this + 0xd0)))) {
    *(unsigned int *)(this + 0xd0) = 0x3f800000;
  }
  if ((*(float *)(this + 0xd4) == 0.0) && (!NAN(*(float *)(this + 0xd4)))) {
    *(unsigned int *)(this + 0xd4) = 0x3f800000;
  }
  if ((*(float *)(this + 0xd8) == 0.0) && (!NAN(*(float *)(this + 0xd8)))) {
    *(unsigned int *)(this + 0xd8) = 0x3f800000;
  }
  if ((*(float *)(this + 0xdc) == 0.0) && (!NAN(*(float *)(this + 0xdc)))) {
    *(unsigned int *)(this + 0xdc) = 0x3f800000;
  }
  if ((*(float *)(this + 0xe0) == 0.0) && (!NAN(*(float *)(this + 0xe0)))) {
    *(unsigned int *)(this + 0xe0) = 0x3f800000;
  }
  if ((*(float *)(this + 0xe4) == 0.0) && (!NAN(*(float *)(this + 0xe4)))) {
    *(unsigned int *)(this + 0xe4) = 0x3f800000;
  }
  if ((*(float *)(this + 0xe8) == 0.0) && (!NAN(*(float *)(this + 0xe8)))) {
    *(unsigned int *)(this + 0xe8) = 0x3f800000;
  }
  if ((*(float *)(this + 0xec) == 0.0) && (!NAN(*(float *)(this + 0xec)))) {
    *(unsigned int *)(this + 0xec) = 0x3f800000;
  }
  if ((*(float *)(this + 0xf0) == 0.0) && (!NAN(*(float *)(this + 0xf0)))) {
    *(unsigned int *)(this + 0xf0) = 0x3f800000;
  }
  if ((*(float *)(this + 0xf4) == 0.0) && (!NAN(*(float *)(this + 0xf4)))) {
    *(unsigned int *)(this + 0xf4) = 0x3f800000;
  }
  if ((*(float *)(this + 0xf8) == 0.0) && (!NAN(*(float *)(this + 0xf8)))) {
    *(unsigned int *)(this + 0xf8) = 0x3f800000;
  }
  if ((*(float *)(this + 0xfc) == 0.0) && (!NAN(*(float *)(this + 0xfc)))) {
    *(unsigned int *)(this + 0xfc) = 0x3f800000;
  }
  if ((*(float *)(this + 0x80) == 0.0) && (!NAN(*(float *)(this + 0x80)))) {
    *(unsigned int *)(this + 0x80) = 0x3f800000;
  }
  if ((*(float *)(this + 0x84) == 0.0) && (!NAN(*(float *)(this + 0x84)))) {
    *(unsigned int *)(this + 0x84) = 0x3f800000;
  }
  if ((*(float *)(this + 0x88) == 0.0) && (!NAN(*(float *)(this + 0x88)))) {
    *(unsigned int *)(this + 0x88) = 0x3f800000;
  }
  if ((*(float *)(this + 0x8c) == 0.0) && (!NAN(*(float *)(this + 0x8c)))) {
    *(unsigned int *)(this + 0x8c) = 0x3f800000;
  }
  if ((*(float *)(this + 0x90) == 0.0) && (!NAN(*(float *)(this + 0x90)))) {
    *(unsigned int *)(this + 0x90) = 0x3f800000;
  }
  if ((*(float *)(this + 0x94) == 0.0) && (!NAN(*(float *)(this + 0x94)))) {
    *(unsigned int *)(this + 0x94) = 0x3f800000;
  }
  if ((*(float *)(this + 0x98) == 0.0) && (!NAN(*(float *)(this + 0x98)))) {
    *(unsigned int *)(this + 0x98) = 0x3f800000;
  }
  if ((*(float *)(this + 0x9c) == 0.0) && (!NAN(*(float *)(this + 0x9c)))) {
    *(unsigned int *)(this + 0x9c) = 0x3f800000;
  }
  if ((*(float *)(this + 0xa0) == 0.0) && (!NAN(*(float *)(this + 0xa0)))) {
    *(unsigned int *)(this + 0xa0) = 0x3f800000;
  }
  if ((*(float *)(this + 0xa4) == 0.0) && (!NAN(*(float *)(this + 0xa4)))) {
    *(unsigned int *)(this + 0xa4) = 0x3f800000;
  }
  if ((*(float *)(this + 0xa8) == 0.0) && (!NAN(*(float *)(this + 0xa8)))) {
    *(unsigned int *)(this + 0xa8) = 0x3f800000;
  }
  if ((*(float *)(this + 0xac) == 0.0) && (!NAN(*(float *)(this + 0xac)))) {
    *(unsigned int *)(this + 0xac) = 0x3f800000;
  }
  if ((*(float *)(this + 0xb0) == 0.0) && (!NAN(*(float *)(this + 0xb0)))) {
    *(unsigned int *)(this + 0xb0) = 0x3f800000;
  }
  if ((*(float *)(this + 0xb4) == 0.0) && (!NAN(*(float *)(this + 0xb4)))) {
    *(unsigned int *)(this + 0xb4) = 0x3f800000;
  }
  if ((*(float *)(this + 0xb8) == 0.0) && (!NAN(*(float *)(this + 0xb8)))) {
    *(unsigned int *)(this + 0xb8) = 0x3f800000;
  }
  if ((*(float *)(this + 0xbc) == 0.0) && (!NAN(*(float *)(this + 0xbc)))) {
    *(unsigned int *)(this + 0xbc) = 0x3f800000;
  }
  return;
}

void PadControl::getCompensation() const {
return this[0x100];
}

void PadControl::getThresholdParameter(unsigned int) const {
switch(param_1 param_1) {
  }
}

PadControl::PadControl(float const&) {
PadControl(this,param_1);
  
}

void PadControl::resetCompensationData() {
this[0x101] = (PadControl)0x0;
  _memset_pattern16(this + 0xc0,&0,0x40);
  _memset_pattern16(this + 0x80,&0,0x40);
  this[0x100] = (PadControl)0x0;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  return;
}

void PadControl::setCompensation(bool param_1) {
}

void PadControl::setSensitivity(float const&) {
float fVar1;
  
  fVar1 = *param_1;
  *(float *)(this + 0x1ec) = fVar1;
  *(float *)(this + 0x134) =
       *(float *)(this + 0x1f0) - (*(float *)(this + 0x1f0) - *(float *)(this + 500)) * fVar1;
  *(float *)(this + 0x150) =
       *(float *)(this + 0x1f8) - (*(float *)(this + 0x1f8) - *(float *)(this + 0x1fc)) * fVar1;
  *(float *)(this + 0x154) =
       *(float *)(this + 0x200) - (*(float *)(this + 0x200) - *(float *)(this + 0x204)) * fVar1;
  *(float *)(this + 0x158) =
       *(float *)(this + 0x208) - (*(float *)(this + 0x208) - *(float *)(this + 0x20c)) * fVar1;
  return;
}

void PadControl::setThresholdParameter(unsigned int, unsigned int) {
float fVar1;
  uint uVar2;
  
  uVar2 = 0x1000;
  if (param_2 < 0x1000) {
    uVar2 = param_2;
  }
  switch(param_1 param_1) {
  }
  fVar1 = *(float *)(this + 0x1ec);
  *(float *)(this + 0x134) =
       *(float *)(this + 0x1f0) - (*(float *)(this + 0x1f0) - *(float *)(this + 500)) * fVar1;
  *(float *)(this + 0x150) =
       *(float *)(this + 0x1f8) - (*(float *)(this + 0x1f8) - *(float *)(this + 0x1fc)) * fVar1;
  *(float *)(this + 0x154) =
       *(float *)(this + 0x200) - (*(float *)(this + 0x200) - *(float *)(this + 0x204)) * fVar1;
  *(float *)(this + 0x158) =
       *(float *)(this + 0x208) - (*(float *)(this + 0x208) - *(float *)(this + 0x20c)) * fVar1;
  return;
}

PadControl::~PadControl() {
~PadControl(this);
  return;
}
}
