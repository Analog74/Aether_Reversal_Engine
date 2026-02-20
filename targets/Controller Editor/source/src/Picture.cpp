#include <ni/controller_editor/Picture.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void Picture::drawLine(int, int, int, int, unsigned int) {
bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  if (this[0x4d] == (Picture)0x0) {
    iVar4 = *(int *)(this + 0x38) - *(int *)(this + 0x60);
    iVar3 = -*(int *)(this + 0x60);
    iVar6 = *(int *)(this + 0x3c) - *(int *)(this + 100);
    iVar2 = -*(int *)(this + 100);
  }
  else {
    iVar3 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    iVar4 = *(int *)(this + 0x58);
    iVar6 = *(int *)(this + 0x5c);
  }
  if (param_1 < iVar3) {
    if (param_3 < iVar3) {
      return;
    }
    bVar8 = iVar4 <= param_3;
    if (param_3 < iVar4) {
      iVar4 = param_3;
    }
    bVar1 = true;
    iVar5 = iVar3;
  }
  else if(3 param_3, 2 param_2, 1 param_1, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 2 param_2, 1 param_1, 3 param_3, 5 param_5, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 4 param_4, 4 param_4, 4 param_4, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 2 param_2, 1 param_1, 4 param_4, 5 param_5, 4 param_4, 2 param_2, 4 param_4, 4 param_4, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 3 param_3, param_1 < iVar4 {
    iVar5 = param_1;
    if (param_3 < iVar3 {
      bVar8 = true;
      bVar1 = true;
      iVar4 = iVar3 + -1;
    }
    else {
      bVar8 = true;
      bVar1 = true;
      if (param_3 < iVar4 {
        bVar8 = false;
        bVar1 = false;
        iVar4 = param_3;
      }
    }
  }
  else {
    if (iVar4 <= param_3 {
      return;
    }
    iVar5 = iVar4 + -1;
    bVar8 = param_3 < iVar3;
    iVar4 = iVar3 + -1;
    if (iVar3 <= param_3 {
      iVar4 = param_3;
    }
    bVar1 = true;
  }
  if (param_2 < iVar2 {
    if (param_4 < iVar2 {
      return;
    }
    bVar7 = iVar6 <= param_4;
    iVar3 = iVar6;
    if (param_4 < iVar6 {
      iVar3 = param_4;
    }
  }
  else if(2 param_2, 4 param_4, 4 param_4, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 3 param_3, param_2 < iVar6 {
    if (param_4 < iVar2 {
      iVar3 = iVar2 + -1;
      bVar7 = true;
      iVar2 = param_2;
    }
    else {
      bVar7 = iVar6 <= param_4;
      if (param_4 < iVar6 {
        iVar6 = param_4;
      }
      iVar2 = param_2;
      iVar3 = iVar6;
      if (!bVar1 && !bVar7 {
        drawLineUC(this,param_1,param_2,param_3,param_4,param_5;
        return;
      }
    }
  }
  else {
    if (iVar6 <= param_4 {
      return;
    }
    iVar3 = iVar2 + -1;
    bVar7 = param_4 < iVar2;
    bVar1 = iVar2 <= param_4;
    iVar2 = iVar6 + -1;
    if (bVar1 {
      iVar3 = param_4;
    }
  }
  PICTURE_DETAIL::drawLineBresenham
            (this,param_1,param_2,param_3,param_4,param_5,iVar5,iVar2,iVar4,iVar3,bVar8,bVar7;
  return;
}

void Picture::drawLineAA(float, float, float, float, unsigned int {
unsigned char auVar1 [16];
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  unsigned int in_XMM0_Db;
  unsigned int in_XMM0_Dc;
  unsigned int in_XMM0_Dd;
  unsigned int in_XMM1_Db;
  unsigned int in_XMM1_Dc;
  unsigned int in_XMM1_Dd;
  float fVar20;
  unsigned int in_XMM2_Db;
  unsigned int in_XMM2_Dc;
  unsigned int in_XMM2_Dd;
  float fVar21;
  unsigned int in_XMM3_Db;
  unsigned int in_XMM3_Dc;
  unsigned int in_XMM3_Dd;
  uint uVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  unsigned char auVar26 [16];
  unsigned char auVar27 [16];
  unsigned char auVar28 [16];
  unsigned char auVar29 [16];
  unsigned char auVar30 [16];
  
  if (this[0x4d] != (Picture0x0 {
    if (*(int *(this + 0x58 <= *(int *(this + 0x50 {
      return;
    }
    if ((intABS(param_1 - param_3 < 0 {
      return;
    }
    if (*(int *(this + 0x5c <= *(int *(this + 0x54 {
      return;
    }
    fVar19 = param_3;
    if (param_1 <= param_3 {
      fVar19 = param_1;
    }
    if (*(int *(this + 0x58 <= (intfVar19 {
      return;
    }
    if ((intABS(param_2 - param_4 < 0 {
      return;
    }
    if ((intABS(param_1 - param_3 + (intfVar19 + 1 <= *(int *(this + 0x50 {
      return;
    }
    fVar19 = param_4;
    if (param_2 <= param_4 {
      fVar19 = param_2;
    }
    if ((intABS(param_2 - param_4 + (intfVar19 + 1 <= *(int *(this + 0x54 {
      return;
    }
    if (*(int *(this + 0x5c <= (intfVar19 {
      return;
    }
  }
  uVar3 = param_5 >> 0x18;
  auVar26._4_4_ = in_XMM2_Db;
  auVar26._0_4_ = param_3;
  auVar26._8_4_ = in_XMM2_Dc;
  auVar26._12_4_ = in_XMM2_Dd;
  auVar27._4_4_ = in_XMM3_Db;
  auVar27._0_4_ = param_4;
  auVar27._8_4_ = in_XMM3_Dc;
  auVar27._12_4_ = in_XMM3_Dd;
  auVar27 = insertps(auVar26,auVar27,0x10;
  auVar29._4_4_ = in_XMM0_Db;
  auVar29._0_4_ = param_1;
  auVar29._8_4_ = in_XMM0_Dc;
  auVar29._12_4_ = in_XMM0_Dd;
  auVar30._4_4_ = in_XMM1_Db;
  auVar30._0_4_ = param_2;
  auVar30._8_4_ = in_XMM1_Dc;
  auVar30._12_4_ = in_XMM1_Dd;
  auVar30 = insertps(auVar29,auVar30,0x10;
  auVar28._0_4_ = auVar27._0_4_ - auVar30._0_4_;
  auVar28._4_4_ = auVar27._4_4_ - auVar30._4_4_;
  auVar28._8_4_ = auVar27._8_4_ - auVar30._8_4_;
  auVar28._12_4_ = auVar27._12_4_ - auVar30._12_4_;
  uVar22 = (uint((floatuVar3 * auVar28._0_4_;
  uVar24 = (uint((floatuVar3 * auVar28._4_4_;
  auVar1._4_4_ = uVar24;
  auVar1._0_4_ = uVar22;
  auVar1._8_4_ = (int(auVar28._8_4_ * 0.0;
  auVar1._12_4_ = (int(auVar28._12_4_ * 0.0;
  auVar30 = pabsd(auVar28,auVar1;
  uVar25 = auVar30._0_4_;
  uVar6 = auVar30._4_4_;
  bVar8 = ~(((uVar6 < uVar25) * uVar25 | (uVar6 >= uVar25) * uVar6) == uVar25);
  if ((bool)(bVar8 & 1)) {
    fVar18 = param_2;
    fVar20 = param_1;
    fVar21 = param_4;
    fVar23 = param_3;
    uVar25 = uVar22;
    uVar6 = uVar24;
    fVar19 = param_2;
    uVar22 = uVar24;
    if (param_4 < param_2) {
      fVar19 = fVar21;
      param_1 = fVar23;
      fVar21 = fVar18;
      param_3 = fVar20;
      uVar25 = -uVar25;
      uVar22 = -uVar6;
    }
  }
  else {
    bVar2 = param_3 < param_1;
    fVar18 = param_1;
    fVar20 = param_2;
    fVar21 = param_3;
    fVar23 = param_4;
    uVar25 = uVar24;
    uVar6 = uVar22;
    fVar19 = param_1;
    param_1 = param_2;
    param_3 = param_4;
    if (bVar2) return;
  }
  if (uVar22 == 0) {
    return;
  }
  fVar18 = fVar19 + 0.5;
  iVar15 = (int)fVar18;
  fVar20 = (float)(int)uVar22;
  iVar14 = (int)(((float)(int)fVar18 - fVar19) * (float)(int)uVar25 + param_1 * fVar20);
  iVar17 = (int)(fVar18 * fVar20) % (int)uVar22;
  iVar4 = iVar14 / (int)uVar22;
  uVar24 = (1 - iVar4) * uVar22;
  uVar9 = iVar14 >> 0x1f & uVar24;
  iVar7 = uVar9 + iVar17;
  uVar6 = uVar9;
  if (iVar7 < 0) {
    uVar6 = uVar22;
  }
  iVar12 = iVar17 + uVar22;
  if (iVar7 < 0) {
    iVar7 = iVar12;
  }
  uVar10 = param_5 & 0xffffff;
  uVar9 = ((uVar22 - iVar7 % (int)uVar22) *
          (((uVar22 - (int)(uVar9 + iVar14) % (int)uVar22) * uVar3) / uVar22 & 0xff)) / uVar22 <<
          0x18 | uVar10;
  iVar7 = *(int *)(this + 0x50);
  iVar13 = *(int *)(this + 0x58);
  if (bVar8 == 0) {
    if (iVar7 < iVar13) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar15)) &&
          (iVar15 < iVar13)) &&
         ((*(int *)(this + 0x54) <= iVar4 && (iVar4 < *(int *)(this + 0x5c))))) {
        setPixelUC(this,iVar15,iVar4,uVar9);
        iVar7 = *(int *)(this + 0x50);
        iVar13 = *(int *)(this + 0x58);
      }
    }
    iVar5 = uVar24 + iVar14;
    if (-1 < (int)(uVar6 + iVar14)) {
      iVar5 = uVar6 + iVar14;
      uVar24 = uVar6;
    }
    iVar16 = iVar17 + uVar24;
    if ((int)(iVar17 + uVar24) < 0) {
      iVar16 = iVar12;
      uVar24 = uVar22;
    }
    uVar6 = (uVar22 - iVar16 % (int)uVar22) * (((iVar5 % (int)uVar22) * uVar3) / uVar22 & 0xff);
    if (iVar7 < iVar13) {
      if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar15)) &&
         ((iVar15 < iVar13 &&
          ((iVar17 = iVar4 + 1, *(int *)(this + 0x54) <= iVar17 &&
           (iVar4 = iVar15, iVar17 < *(int *)(this + 0x5c))))))) return;
    }
  }
  else {
    if (iVar7 < iVar13) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar4)) && (iVar4 < iVar13)
          ) && ((*(int *)(this + 0x54) <= iVar15 && (iVar15 < *(int *)(this + 0x5c))))) {
        setPixelUC(this,iVar4,iVar15,uVar9);
        iVar7 = *(int *)(this + 0x50);
        iVar13 = *(int *)(this + 0x58);
      }
    }
    iVar5 = uVar24 + iVar14;
    if (-1 < (int)(uVar6 + iVar14)) {
      iVar5 = uVar6 + iVar14;
      uVar24 = uVar6;
    }
    iVar16 = iVar17 + uVar24;
    if ((int)(iVar17 + uVar24) < 0) {
      iVar16 = iVar12;
      uVar24 = uVar22;
    }
    uVar6 = (uVar22 - iVar16 % (int)uVar22) * (((iVar5 % (int)uVar22) * uVar3) / uVar22 & 0xff);
    if (iVar7 < iVar13) {
      if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar4 = iVar4 + 1, iVar7 <= iVar4))
         && ((iVar4 < iVar13 &&
             ((*(int *)(this + 0x54) <= iVar15 && (iVar17 = iVar15, iVar15 < *(int *)(this + 0x5c)))
             )))) {
        setPixelUC(this,iVar4,iVar17,(uVar6 / uVar22) * 0x1000000 + uVar10);
      }
    }
  }
  fVar19 = fVar21 + 0.5;
  iVar13 = (int)fVar19;
  iVar4 = (int)(((float)(int)fVar19 - fVar21) * (float)(int)uVar25 + param_3 * fVar20);
  iVar17 = (int)(fVar19 * fVar20) % (int)uVar22;
  iVar12 = iVar4 / (int)uVar22;
  iVar7 = uVar24 + iVar4;
  uVar6 = (1 - iVar12) * uVar22;
  if (iVar7 < 0) {
    uVar24 = uVar6;
  }
  iVar5 = uVar6 + iVar4;
  if (iVar7 < 0) {
    iVar7 = iVar5;
  }
  iVar11 = iVar17 + uVar22;
  iVar16 = uVar24 + iVar17;
  if ((int)(uVar24 + iVar17) < 0) {
    iVar16 = iVar11;
    uVar24 = uVar22;
  }
  uVar9 = (((((uVar22 - iVar7 % (int)uVar22) * uVar3) / uVar22 & 0xff) * (iVar16 % (int)uVar22)) /
          uVar22) * 0x1000000 + uVar10;
  iVar7 = *(int *)(this + 0x50);
  iVar16 = *(int *)(this + 0x58);
  if (bVar8 == 0) {
    if (iVar7 < iVar16) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar13)) &&
          (iVar13 < iVar16)) &&
         ((*(int *)(this + 0x54) <= iVar12 && (iVar12 < *(int *)(this + 0x5c))))) {
        setPixelUC(this,iVar13,iVar12,uVar9);
        iVar7 = *(int *)(this + 0x50);
        iVar16 = *(int *)(this + 0x58);
      }
    }
    iVar4 = iVar4 + uVar24;
    if (iVar4 < 0) {
      iVar4 = iVar5;
      uVar24 = uVar6;
    }
    iVar5 = iVar17 + uVar24;
    if ((int)(iVar17 + uVar24) < 0) {
      iVar5 = iVar11;
      uVar24 = uVar22;
    }
    uVar6 = (((iVar4 % (int)uVar22) * uVar3) / uVar22 & 0xff) * (iVar5 % (int)uVar22);
    if (iVar16 <= iVar7) goto joined_r0x0001005dff5e;
    if (((*(int *)(this + 0x5c) <= *(int *)(this + 0x54)) || (iVar13 < iVar7)) ||
       ((iVar16 <= iVar13 ||
        ((iVar17 = iVar12 + 1, iVar17 < *(int *)(this + 0x54) ||
         (iVar12 = iVar13, *(int *)(this + 0x5c) <= iVar17)))))) goto joined_r0x0001005dff5e;
  }
  else {
    if (iVar7 < iVar16) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar12)) &&
          (iVar12 < iVar16)) &&
         ((*(int *)(this + 0x54) <= iVar13 && (iVar13 < *(int *)(this + 0x5c))))) {
        setPixelUC(this,iVar12,iVar13,uVar9);
        iVar7 = *(int *)(this + 0x50);
        iVar16 = *(int *)(this + 0x58);
      }
    }
    iVar4 = iVar4 + uVar24;
    if (iVar4 < 0) {
      iVar4 = iVar5;
      uVar24 = uVar6;
    }
    iVar5 = iVar17 + uVar24;
    if ((int)(iVar17 + uVar24) < 0) {
      iVar5 = iVar11;
      uVar24 = uVar22;
    }
    uVar6 = (((iVar4 % (int)uVar22) * uVar3) / uVar22 & 0xff) * (iVar5 % (int)uVar22);
    if (iVar16 <= iVar7) goto joined_r0x0001005dff5e;
    if (((*(int *)(this + 0x5c) <= *(int *)(this + 0x54)) || (iVar12 = iVar12 + 1, iVar12 < iVar7))
       || ((iVar16 <= iVar12 ||
           ((iVar13 < *(int *)(this + 0x54) || (iVar17 = iVar13, *(int *)(this + 0x5c) <= iVar13))))
          )) goto joined_r0x0001005dff5e;
  }
  setPixelUC(this,iVar12,iVar17,(uVar6 / uVar22) * 0x1000000 + uVar10);
joined_r0x0001005dff5e:
  if (iVar15 + 1 < iVar13) {
    iVar15 = iVar15 + 1;
    iVar14 = iVar14 + uVar25;
    do {
      while( true ) {
        iVar17 = iVar14 / (int)uVar22;
        uVar6 = (1 - iVar17) * uVar22;
        iVar4 = iVar14 + uVar6;
        iVar7 = uVar24 + iVar14;
        if ((int)(uVar24 + iVar14) < 0) {
          iVar7 = iVar4;
          uVar24 = uVar6;
        }
        uVar9 = (((uVar22 - iVar7 % (int)uVar22) * uVar3) / uVar22) * 0x1000000 + uVar10;
        iVar7 = *(int *)(this + 0x50);
        iVar12 = *(int *)(this + 0x58);
        if (bVar8 == 0) break;
        if (iVar7 < iVar12) {
          if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar17)) &&
              (iVar17 < iVar12)) &&
             ((*(int *)(this + 0x54) <= iVar15 && (iVar15 < *(int *)(this + 0x5c))))) {
            setPixelUC(this,iVar17,iVar15,uVar9);
            iVar7 = *(int *)(this + 0x50);
            iVar12 = *(int *)(this + 0x58);
          }
        }
        iVar5 = uVar24 + iVar14;
        if (iVar5 < 0) {
          iVar5 = iVar4;
          uVar24 = uVar6;
        }
        if (iVar12 <= iVar7) return;
        if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) &&
            (iVar17 = iVar17 + 1, iVar7 <= iVar17)) &&
           ((iVar17 < iVar12 &&
            ((*(int *)(this + 0x54) <= iVar15 && (iVar7 = iVar15, iVar15 < *(int *)(this + 0x5c)))))
           )) return;
        iVar14 = iVar14 + uVar25;
        iVar15 = iVar15 + 1;
        if (iVar13 == iVar15) {
          return;
        }
      }
      if (iVar7 < iVar12) {
        if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar15)) &&
            (iVar15 < iVar12)) &&
           ((*(int *)(this + 0x54) <= iVar17 && (iVar17 < *(int *)(this + 0x5c))))) {
          setPixelUC(this,iVar15,iVar17,uVar9);
          iVar7 = *(int *)(this + 0x50);
          iVar12 = *(int *)(this + 0x58);
        }
      }
      iVar5 = uVar24 + iVar14;
      if (iVar5 < 0) {
        iVar5 = iVar4;
        uVar24 = uVar6;
      }
      if (iVar7 < iVar12) {
        if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar7 <= iVar15)) &&
           ((iVar15 < iVar12 &&
            ((iVar7 = iVar17 + 1, *(int *)(this + 0x54) <= iVar7 &&
             (iVar17 = iVar15, iVar7 < *(int *)(this + 0x5c))))))) {
          setPixelUC(this,iVar17,iVar7,
                     (((iVar5 % (int)uVar22) * uVar3) / uVar22) * 0x1000000 + uVar10);
        }
        return;
      }
      iVar14 = iVar14 + uVar25;
      iVar15 = iVar15 + 1;
    } while (iVar13 != iVar15);
  }
  return;
}

void Picture::drawLineH(int, int, int, unsigned int) {
int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (this[0x4d] == (Picture)0x0) {
    drawLineHUC(this,param_1,param_2,param_3,param_4);
    return;
  }
  iVar6 = param_3 + param_1;
  iVar3 = param_1;
  if (param_3 < 0) {
    iVar6 = param_1;
    iVar3 = param_3 + param_1;
  }
  if (iVar3 < iVar6) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x58);
    if ((((iVar1 < iVar2) && (*(int *)(this + 0x54) <= param_2)) &&
        (param_2 < *(int *)(this + 0x5c))) &&
       (((iVar1 < iVar6 && (iVar3 < iVar2)) && (*(int *)(this + 0x54) < *(int *)(this + 0x5c))))) {
      iVar7 = iVar3;
      if (iVar3 < iVar1) {
        iVar7 = iVar1;
      }
      iVar9 = iVar6;
      if (iVar2 < iVar6) {
        iVar9 = iVar2;
      }
      if (iVar7 < iVar9) {
        iVar8 = iVar7;
        iVar4 = iVar3;
        iVar5 = iVar6;
        if (iVar3 == param_1) {
          iVar8 = iVar9;
          iVar4 = iVar9;
          iVar5 = iVar7;
          iVar9 = iVar7;
        }
        if (iVar1 <= iVar3 && iVar6 <= iVar2) {
          iVar8 = iVar4;
          iVar9 = iVar5;
        }
        drawLineHUC(this,iVar9,param_2,iVar8 - iVar9,param_4);
        return;
      }
    }
  }
  return;
}

void Picture::drawLineUC(int, int, int, int, unsigned int) {
uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar4 = param_3 - param_1;
  uVar6 = param_4 - param_2;
  uVar1 = -uVar4;
  if (0 < (int)uVar4) {
    uVar1 = uVar4;
  }
  iVar8 = ((int)~uVar4 >> 0x1f) * -2 + -1;
  iVar2 = uVar1 * 2;
  uVar1 = -uVar6;
  if (0 < (int)uVar6) {
    uVar1 = uVar6;
  }
  iVar9 = ((int)~uVar6 >> 0x1f) * -2 + -1;
  iVar3 = uVar1 * 2;
  if (iVar2 == iVar3 || SBORROW4(iVar2,iVar3) != (int)(iVar2 + uVar1 * -2) < 0) {
    param_3 = uVar1;
    if ((uVar1 != 0) && (param_4 != param_2)) {
      setPixelUC(this,param_1,param_2,param_5);
      iVar11 = param_2 + iVar9;
      param_3 = param_4;
      if (iVar11 != param_4) {
        iVar10 = iVar2 - (iVar3 >> 1);
        do {
          iVar5 = 0;
          if (-1 < iVar10) {
            iVar5 = iVar8;
          }
          iVar7 = 0;
          if (-1 < iVar10) {
            iVar7 = iVar3;
          }
          param_1 = param_1 + iVar5;
          iVar10 = (iVar10 + iVar2) - iVar7;
          setPixelUC(this,param_1,iVar11,param_5);
          iVar11 = iVar11 + iVar9;
        } while (param_4 != iVar11);
      }
    }
  }
  else {
    setPixelUC(this,param_1,param_2,param_5);
    iVar11 = param_1 + iVar8;
    if (iVar11 != param_3) {
      iVar10 = iVar3 - (iVar2 >> 1);
      do {
        iVar5 = 0;
        if (-1 < iVar10) {
          iVar5 = iVar9;
        }
        iVar7 = 0;
        if (-1 < iVar10) {
          iVar7 = iVar2;
        }
        param_2 = param_2 + iVar5;
        iVar10 = (iVar10 + iVar3) - iVar7;
        setPixelUC(this,iVar11,param_2,param_5);
        iVar11 = iVar11 + iVar8;
      } while (param_3 != iVar11);
    }
  }
  return param_3;
}

void Picture::drawLineV(int, int, int, unsigned int) {
int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (this[0x4d] == (Picture)0x0) {
    drawLineVUC(this,param_1,param_2,param_3,param_4);
    return;
  }
  iVar6 = param_3 + param_2;
  iVar3 = param_2;
  if (param_3 < 0) {
    iVar6 = param_2;
    iVar3 = param_3 + param_2;
  }
  if (iVar3 < iVar6) {
    if ((((*(int *)(this + 0x50) < *(int *)(this + 0x58)) &&
         (iVar1 = *(int *)(this + 0x54), iVar1 < iVar6)) &&
        (iVar2 = *(int *)(this + 0x5c), iVar3 < iVar2)) &&
       (((*(int *)(this + 0x50) <= param_1 && (param_1 < *(int *)(this + 0x58))) && (iVar1 < iVar2))
       )) {
      iVar7 = iVar3;
      if (iVar3 < iVar1) {
        iVar7 = iVar1;
      }
      iVar9 = iVar6;
      if (iVar2 < iVar6) {
        iVar9 = iVar2;
      }
      if (iVar7 < iVar9) {
        iVar8 = iVar7;
        iVar4 = iVar3;
        iVar5 = iVar6;
        if (iVar3 == param_2) {
          iVar8 = iVar9;
          iVar4 = iVar9;
          iVar5 = iVar7;
          iVar9 = iVar7;
        }
        if (iVar1 <= iVar3 && iVar6 <= iVar2) {
          iVar8 = iVar4;
          iVar9 = iVar5;
        }
        drawLineVUC(this,param_1,iVar9,iVar8 - iVar9,param_4);
        return;
      }
    }
  }
  return;
}

void Picture::drawLineVUC(int, int, int, unsigned int) {
byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_4 < 0xff000000) {
    uVar7 = param_4 >> 0x18;
    if (uVar7 != 0) {
      bVar1 = (byte)(param_4 >> 8);
      if (this[0x4c] == (Picture)0x0) {
        if (0 < param_3) {
          puVar3 = (uint *)(((long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) +
                                   param_1) + (long)*(int *)(this + 0x60)) * 4 +
                           *(long *)(this + 0x30));
          iVar2 = param_3 + 1;
          do {
            uVar6 = *puVar3;
            iVar11 = (uVar6 >> 0x18) * (uVar7 ^ 0xff);
            uVar10 = (iVar11 + 0x7fU) / 0xff + uVar7;
            uVar9 = uVar10 >> 1;
            uVar8 = (((uVar6 >> 0x10 & 0xff) * iVar11 + 0x7f) / 0xff +
                     (param_4 >> 0x10 & 0xff) * uVar7 + uVar9) / uVar10;
            uVar4 = (((uVar6 >> 8 & 0xff) * iVar11 + 0x7f) / 0xff + bVar1 * uVar7 + uVar9) / uVar10;
            uVar6 = (((uVar6 & 0xff) * iVar11 + 0x7f) / 0xff + (param_4 & 0xff) * uVar7 + uVar9) /
                    uVar10;
            if (0xfe < uVar10) {
              uVar10 = 0xff;
            }
            if (0xfe < uVar8) {
              uVar8 = 0xff;
            }
            if (0xfe < uVar4) {
              uVar4 = 0xff;
            }
            if (0xfe < uVar6) {
              uVar6 = 0xff;
            }
            *puVar3 = uVar6 | uVar10 << 0x18 | uVar4 << 8 | uVar8 << 0x10;
            puVar3 = puVar3 + *(int *)(this + 0x38);
            iVar2 = iVar2 + -1;
          } while (1 < iVar2);
        }
      }
      else if(3 param_3, 2 param_2, 1 param_1, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 2 param_2, 1 param_1, 3 param_3, 5 param_5, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 4 param_4, 4 param_4, 4 param_4, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 2 param_2, 1 param_1, 4 param_4, 5 param_5, 4 param_4, 2 param_2, 4 param_4, 4 param_4, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 0 < param_3 {
        iVar11 = 0x100 - uVar7;
        puVar3 = (uint *(((long((param_2 + *(int *(this + 100 * *(int *(this + 0x38 + param_1
                                  + (long*(int *(this + 0x60 * 4 + *(long *(this + 0x30;
        iVar2 = param_3 + 1;
        do {
          uVar6 = *puVar3;
          *puVar3 = ((uVar6 >> 0x10 & 0xff * iVar11 + (param_4 >> 0x10 & 0xff * uVar7 & 0x3ff00 *
                    0x100 + ((uVar6 & 0xff * iVar11 + (param_4 & 0xff * uVar7 >> 8 +
                            ((uVar6 >> 8 & 0xff * iVar11 + bVar1 * uVar7 & 0x3ff00;
          puVar3 = puVar3 + *(int *(this + 0x38;
          iVar2 = iVar2 + -1;
        } while (1 < iVar2;
      }
    }
  }
  else if(5 param_5, 2 param_2, 2 param_2, 1 param_1, 4 param_4, 4 param_4, 4 param_4, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 2 param_2, 1 param_1, 4 param_4, 5 param_5, 4 param_4, 2 param_2, 4 param_4, 4 param_4, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 0 < param_3 {
    lVar5 = (long*(int *(this + 0x38;
    puVar3 = (uint *(((long((param_2 + *(int *(this + 100 * *(int *(this + 0x38 + param_1 +
                      (long*(int *(this + 0x60 * 4 + *(long *(this + 0x30;
    uVar7 = param_3 - 1;
    if ((param_3 & 7U != 0 {
      uVar6 = 0;
      do {
        *puVar3 = param_4;
        uVar6 = uVar6 + 1;
        puVar3 = puVar3 + lVar5;
      } while ((param_3 & 7U != uVar6;
      param_3 = param_3 - uVar6;
    }
    if (6 < uVar7 {
      iVar2 = param_3 + 8;
      do {
        *puVar3 = param_4;
        puVar3[lVar5] = param_4;
        puVar3[lVar5 * 2] = param_4;
        puVar3[lVar5 * 3] = param_4;
        puVar3[lVar5 * 4] = param_4;
        puVar3[lVar5 * 5] = param_4;
        puVar3[lVar5 * 6] = param_4;
        puVar3[lVar5 * 7] = param_4;
        puVar3 = puVar3 + lVar5 * 8;
        iVar2 = iVar2 + -8;
      } while (8 < iVar2;
    }
  }
  return;
}

void Picture::drawRectangle(int, int, int, int, unsigned int {
int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (this[0x4d] == (Picture0x0 {
    drawLineHUC(this,param_1,param_2,param_3,param_5;
    if (param_4 < 2 {
      return;
    }
    drawLineHUC(this,param_1,param_4 + param_2 + -1,param_3,param_5;
    if (param_4 == 2 {
      return;
    }
    drawLineVUC(this,param_1,param_2 + 1,param_4 + -2,param_5;
  }
  else {
    iVar17 = param_3 + param_1;
    iVar18 = iVar17;
    iVar16 = param_1;
    if (param_3 < 0 {
      iVar18 = param_1;
      iVar16 = iVar17;
    }
    iVar12 = param_4 + param_2;
    iVar15 = iVar12;
    iVar9 = param_2;
    if (param_4 < 0 {
      iVar15 = param_2;
      iVar9 = iVar12;
    }
    if ((iVar18 <= iVar16 || (iVar15 <= iVar9 {
      return;
    }
    iVar1 = *(int *(this + 0x50;
    iVar2 = *(int *(this + 0x58;
    if (iVar2 <= iVar1 {
      return;
    }
    iVar3 = *(int *(this + 0x54;
    if (iVar15 <= iVar3 {
      return;
    }
    iVar4 = *(int *(this + 0x5c;
    if (iVar4 <= iVar9 {
      return;
    }
    if (iVar18 <= iVar1 {
      return;
    }
    if (iVar2 <= iVar16 {
      return;
    }
    if (iVar4 <= iVar3 {
      return;
    }
    iVar13 = iVar16;
    if (iVar16 < iVar1 {
      iVar13 = iVar1;
    }
    iVar14 = iVar18;
    if (iVar2 < iVar18 {
      iVar14 = iVar2;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar3 {
      iVar10 = iVar3;
    }
    iVar11 = iVar15;
    if (iVar4 < iVar15 {
      iVar11 = iVar4;
    }
    if (iVar14 <= iVar13 {
      return;
    }
    if (iVar11 <= iVar10 {
      return;
    }
    bVar5 = iVar1 <= iVar16;
    bVar6 = iVar3 <= iVar9;
    bVar7 = iVar18 <= iVar2;
    bVar8 = iVar4 < iVar15;
    if (bVar8 || (!bVar7 || (!bVar6 || !bVar5 {
      iVar18 = iVar14;
    }
    iVar1 = iVar13;
    if (!bVar8 && (bVar7 && (bVar6 && bVar5)) {
      iVar1 = iVar16;
    }
    if (bVar8 || (!bVar7 || (!bVar6 || !bVar5))) {
      iVar15 = iVar11;
    }
    iVar2 = iVar10;
    if (!bVar8 && (bVar7 && (bVar6 && bVar5))) {
      iVar2 = iVar9;
    }
    if (iVar16 == param_1) {
      iVar1 = iVar14;
      iVar18 = iVar13;
    }
    if (iVar9 == param_2) {
      iVar2 = iVar11;
      iVar15 = iVar10;
    }
    if ((((iVar18 != param_1) || (iVar15 != param_2)) || (iVar1 != iVar17)) || (iVar2 != iVar12)) {
      iVar16 = 0;
      if (iVar15 == param_2) {
        drawLineHUC(this,iVar18,param_2,iVar1 - iVar18,param_5);
        iVar16 = 1;
        if (iVar2 - param_2 < 2) {
          return;
        }
      }
      iVar9 = iVar16;
      if (iVar2 == iVar12) {
        drawLineHUC(this,iVar18,iVar12 + -1,iVar1 - iVar18,param_5);
        iVar9 = iVar16 + 1;
      }
      iVar12 = (iVar2 - iVar15) - iVar9;
      if (iVar12 == 0 || iVar2 - iVar15 < iVar9) {
        return;
      }
      if (iVar18 == param_1) {
        drawLineVUC(this,param_1,iVar16 + iVar15,iVar12,param_5);
      }
      if (iVar1 != iVar17) {
        return;
      }
      iVar16 = iVar16 + iVar15;
      return;
    }
    drawLineHUC(this,param_1,param_2,param_3,param_5);
    if (param_4 < 2) {
      return;
    }
    drawLineHUC(this,param_1,iVar12 + -1,param_3,param_5);
    if (param_4 == 2) {
      return;
    }
    drawLineVUC(this,param_1,param_2 + 1,param_4 + -2,param_5);
  }
  iVar12 = param_4 + -2;
  iVar16 = param_2 + 1;
  drawLineVUC(this,param_3 + param_1 + -1,iVar16,iVar12,param_5);
  return;
}

void Picture::drawRectangleUC(int, int, int, int, unsigned int) {
drawLineHUC(this,param_1,param_2,param_3,param_5);
  if (1 < param_4) {
    drawLineHUC(this,param_1,param_2 + param_4 + -1,param_3,param_5);
    if (param_4 != 2) {
      drawLineVUC(this,param_1,param_2 + 1,param_4 + -2,param_5);
      drawLineVUC(this,param_1 + param_3 + -1,param_2 + 1,param_4 + -2,param_5);
      return;
    }
  }
  return;
}

void Picture::fillArea(int, int, int, int, unsigned int) {
int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  if (this[0x4d] == (Picture)0x0) {
    fillAreaUC(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  iVar13 = param_3 + param_1;
  iVar6 = param_1;
  if (param_3 < 0) {
    iVar13 = param_1;
    iVar6 = param_3 + param_1;
  }
  iVar11 = param_4 + param_2;
  iVar7 = param_2;
  if (param_4 < 0) {
    iVar11 = param_2;
    iVar7 = param_4 + param_2;
  }
  if ((iVar6 < iVar13) && (iVar7 < iVar11)) {
    iVar10 = *(int *)(this + 0x50);
    iVar14 = *(int *)(this + 0x58);
    if ((iVar10 < iVar14) &&
       ((((iVar1 = *(int *)(this + 0x54), iVar1 < iVar11 &&
          (iVar2 = *(int *)(this + 0x5c), iVar7 < iVar2)) && (iVar10 < iVar13)) &&
        ((iVar6 < iVar14 && (iVar1 < iVar2)))))) {
      iVar8 = iVar6;
      if (iVar6 < iVar10) {
        iVar8 = iVar10;
      }
      iVar15 = iVar13;
      if (iVar14 < iVar13) {
        iVar15 = iVar14;
      }
      iVar12 = iVar7;
      if (iVar7 < iVar1) {
        iVar12 = iVar1;
      }
      iVar9 = iVar11;
      if (iVar2 < iVar11) {
        iVar9 = iVar2;
      }
      if ((iVar8 < iVar15) && (iVar12 < iVar9)) {
        bVar16 = iVar10 <= iVar6;
        bVar3 = iVar1 <= iVar7;
        bVar4 = iVar13 <= iVar14;
        bVar5 = iVar2 < iVar11;
        if (bVar5 || (!bVar4 || (!bVar3 || !bVar16))) {
          iVar13 = iVar15;
        }
        iVar10 = iVar8;
        if (!bVar5 && (bVar4 && (bVar3 && bVar16))) {
          iVar10 = iVar6;
        }
        if (bVar5 || (!bVar4 || (!bVar3 || !bVar16))) {
          iVar11 = iVar9;
        }
        iVar14 = iVar12;
        if (!bVar5 && (bVar4 && (bVar3 && bVar16))) {
          iVar14 = iVar7;
        }
        bVar16 = iVar6 == param_1;
        param_1 = iVar13;
        if (bVar16 param_1) {
        }
        bVar16 = iVar7 == param_2;
        param_2 = iVar11;
        if (bVar16) {
          iVar14 = iVar9;
          param_2 = iVar12;
        }
        param_3 = iVar10 - param_1;
        param_4 = iVar14 - param_2;
        return;
      }
    }
  }
  return;
}

void Picture::fillAreaUC(int, int, int, int, unsigned int) {
uint *puVar1;
  Picture PVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  unsigned int in_register_0000000c;
  long lVar6;
  unsigned long uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  unsigned long uVar14;
  unsigned long uVar15;
  uint *puVar16;
  unsigned long uVar17;
  unsigned long uVar18;
  unsigned long uVar19;
  
  uVar4 = *(uint *)(this + 0x38);
  uVar14 = (unsigned long)uVar4;
  lVar10 = (long)(int)((param_2 + *(int *)(this + 100)) * uVar4 + param_1) +
           (long)*(int *)(this + 0x60);
  puVar16 = (uint *)(*(long *)(this + 0x30) + lVar10 * 4);
  if ((param_4 < 2) || (uVar4 == param_3)) {
    uVar4 = param_4 * param_3;
    if (param_5 < 0xff000000) {
      uVar5 = param_5 >> 0x18;
      uVar14 = (unsigned long)uVar5;
      if (uVar5 != 0) {
        uVar14 = PictureSCALAR::fillLineTransparentImpl
                           (puVar16,uVar4,0x100 - uVar5,(param_5 >> 0x10 & 0xff) * uVar5,
                            (param_5 >> 8 & 0xff) * uVar5,(param_5 & 0xff) * uVar5,param_5,
                            (bool)this[0x4c]);
      }
    }
    else {
      uVar5 = uVar4;
      if (0xf < (int)uVar4) {
        do {
          uVar14 = (unsigned long)uVar5;
          *puVar16 = param_5;
          puVar16[1] = param_5;
          puVar16[2] = param_5;
          puVar16[3] = param_5;
          puVar16[4] = param_5;
          puVar16[5] = param_5;
          puVar16[6] = param_5;
          puVar16[7] = param_5;
          puVar16[8] = param_5;
          puVar16[9] = param_5;
          puVar16[10] = param_5;
          puVar16[0xb] = param_5;
          puVar16[0xc] = param_5;
          puVar16[0xd] = param_5;
          puVar16[0xe] = param_5;
          puVar16[0xf] = param_5;
          uVar4 = uVar5 - 0x10;
          puVar16 = puVar16 + 0x10;
          bVar3 = 0x1f < (int)uVar5;
          uVar5 = uVar4;
        } while (bVar3);
      }
      if (0 < (int)uVar4) {
        uVar14 = (unsigned long)(uVar4 - 1);
        if (6 < uVar4 - 1) {
          uVar14 = uVar14 + 1;
          uVar17 = uVar14 & 0xfffffffffffffff8;
          uVar7 = (uVar17 - 8 >> 3) + 1;
          uVar15 = (unsigned long)((uint)uVar7 & 7);
          if (uVar17 - 8 < 0x38) {
            lVar6 = 0;
          }
          else {
            lVar10 = -(uVar7 & 0xfffffffffffffff8);
            lVar6 = 0;
            do {
              puVar9 = puVar16 + lVar6;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 4;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 8;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0xc;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x10;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x14;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x18;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x1c;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x20;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x24;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x28;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x2c;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x30;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x34;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x38;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = puVar16 + lVar6 + 0x3c;
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              lVar6 = lVar6 + 0x40;
              lVar10 = lVar10 + 8;
            } while (lVar10 != 0);
          }
          if (uVar15 != 0) {
            lVar10 = 0;
            do {
              puVar9 = (uint *)((long)puVar16 + lVar10 + lVar6 * 4);
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              puVar9 = (uint *)((long)puVar16 + lVar10 + lVar6 * 4 + 0x10);
              *puVar9 = param_5;
              puVar9[1] = param_5;
              puVar9[2] = param_5;
              puVar9[3] = param_5;
              lVar10 = lVar10 + 0x20;
            } while (uVar15 << 5 != lVar10);
          }
          if (uVar14 == uVar17) {
            return uVar14;
          }
          puVar16 = puVar16 + uVar17;
          uVar4 = uVar4 - (int)uVar17;
        }
        iVar12 = uVar4 + 1;
        do {
          *puVar16 = param_5;
          puVar16 = puVar16 + 1;
          iVar12 = iVar12 + -1;
        } while (1 < iVar12);
      }
    }
  }
  else {
    uVar17 = (unsigned long)(int)uVar4;
    if (param_5 < 0xff000000) {
      uVar4 = param_5 >> 0x18;
      uVar14 = (unsigned long)uVar4;
      if ((uVar4 != 0) && (param_4 != 0)) {
        PVar2 = this[0x4c];
        do {
          uVar14 = PictureSCALAR::fillLineTransparentImpl
                             (puVar16,param_3,0x100 - uVar4,(param_5 >> 0x10 & 0xff) * uVar4,
                              (param_5 >> 8 & 0xff) * uVar4,(param_5 & 0xff) * uVar4,param_5,
                              (bool)PVar2);
          puVar16 = puVar16 + uVar17;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else if(3 param_3, 2 param_2, 1 param_1, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 2 param_2, 1 param_1, 3 param_3, 5 param_5, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 4 param_4, 4 param_4, 4 param_4, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 2 param_2, 1 param_1, 4 param_4, 5 param_5, 4 param_4, 2 param_2, 4 param_4, 4 param_4, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 3 param_3, param_4 != 0 {
      if (param_3 < 0x10 {
        uVar14 = CONCAT44(in_register_0000000c,param_3;
        if (0 < param_3 {
          uVar15 = (unsigned long(param_3 - 1U + 1;
          uVar18 = uVar15 & 0xfffffffffffffff8;
          uVar7 = (uVar18 - 8 >> 3 + 1;
          uVar19 = (unsigned long((uintuVar7 & 7;
          uVar14 = uVar17 * 4;
          lVar10 = *(long *(this + 0x30 + lVar10 * 4 + 0x10;
          do {
            puVar9 = puVar16;
            iVar12 = param_3;
            if (param_3 - 1U < 7 {
              iVar12 = iVar12 + 1;
              do {
                *puVar9 = param_5;
                puVar9 = puVar9 + 1;
                iVar12 = iVar12 + -1;
              } while (1 < iVar12;
            }
            else {
              if (uVar18 - 8 < 0x38 {
                lVar13 = 0;
              }
              else {
                lVar13 = 0;
                lVar6 = -(uVar7 & 0xfffffffffffffff8;
                do {
                  puVar9 = puVar16 + lVar13;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 4;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 8;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0xc;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x10;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x14;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x18;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x1c;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x20;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x24;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x28;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x2c;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x30;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x34;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x38;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = puVar16 + lVar13 + 0x3c;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  lVar13 = lVar13 + 0x40;
                  lVar6 = lVar6 + 8;
                } while (lVar6 != 0;
              }
              if (uVar19 != 0 {
                lVar6 = 0;
                do {
                  puVar9 = (uint *((longpuVar16 + lVar6 + lVar13 * 4;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  puVar9 = (uint *(lVar10 + lVar13 * 4 + lVar6;
                  *puVar9 = param_5;
                  puVar9[1] = param_5;
                  puVar9[2] = param_5;
                  puVar9[3] = param_5;
                  lVar6 = lVar6 + 0x20;
                } while (uVar19 << 5 != lVar6;
              }
              if (uVar15 != uVar18 {
                puVar9 = puVar16 + uVar18;
                iVar12 = param_3 - (intuVar18;
                return;
              }
            }
            puVar16 = puVar16 + uVar17;
            lVar10 = lVar10 + uVar14;
            param_4 = param_4 + -1;
          } while (param_4 != 0;
        }
      }
      else {
        puVar9 = puVar16;
        uVar4 = param_3 - 0x11U;
        iVar12 = param_3;
        do {
          do {
            iVar11 = iVar12;
            uVar5 = uVar4;
            puVar8 = puVar9;
            *puVar8 = param_5;
            puVar8[1] = param_5;
            puVar8[2] = param_5;
            puVar8[3] = param_5;
            puVar8[4] = param_5;
            puVar8[5] = param_5;
            puVar8[6] = param_5;
            puVar8[7] = param_5;
            puVar8[8] = param_5;
            puVar8[9] = param_5;
            puVar8[10] = param_5;
            puVar8[0xb] = param_5;
            puVar8[0xc] = param_5;
            puVar8[0xd] = param_5;
            puVar8[0xe] = param_5;
            puVar8[0xf] = param_5;
            iVar12 = iVar11 + -0x10;
            puVar9 = puVar8 + 0x10;
            uVar4 = uVar5 - 0x10;
          } while (0x1f < iVar11;
          if (0x10 < iVar11 {
            if (6 < iVar11 - 0x11U {
              uVar14 = (unsigned long(iVar11 - 0x11U + 1;
              uVar15 = uVar14 & 0x1fffffff8;
              if (uVar15 - 8 < 0x38 {
                lVar10 = 0;
              }
              else {
                lVar6 = -((((unsigned longuVar5 + 1 & 0xfffffffffffffff8 - 8 >> 3 + 1 &
                         0xfffffffffffffff8;
                lVar10 = 0;
                do {
                  puVar1 = puVar9 + lVar10;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x14;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x18;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x1c;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x20;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x24;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x28;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x2c;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x30;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x34;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x38;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x3c;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x40;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x44;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x48;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = puVar8 + lVar10 + 0x4c;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  lVar10 = lVar10 + 0x40;
                  lVar6 = lVar6 + 8;
                } while (lVar6 != 0;
              }
              if (((uVar15 - 8 >> 3 + 1 & 7 != 0 {
                lVar10 = lVar10 << 2;
                lVar6 = -(unsigned long((byte(((byte(((charuVar5 + 1U & 0x38 - 8 >> 3 + 1 & 7;
                do {
                  puVar1 = (uint *((longpuVar9 + lVar10;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  puVar1 = (uint *((longpuVar8 + lVar10 + 0x50;
                  *puVar1 = param_5;
                  puVar1[1] = param_5;
                  puVar1[2] = param_5;
                  puVar1[3] = param_5;
                  lVar10 = lVar10 + 0x20;
                  lVar6 = lVar6 + 1;
                } while (lVar6 != 0;
              }
              if (uVar14 == uVar15 return;
              puVar9 = puVar9 + uVar15;
              iVar12 = iVar12 - (intuVar15;
            }
            iVar12 = iVar12 + 1;
            do {
              *puVar9 = param_5;
              puVar9 = puVar9 + 1;
              iVar12 = iVar12 + -1;
            } while (1 < iVar12;
          }
          puVar16 = puVar16 + uVar17;
          param_4 = param_4 + -1;
          uVar14 = uVar17;
          puVar9 = puVar16;
          uVar4 = param_3 - 0x11U;
          iVar12 = param_3;
        } while (param_4 != 0;
      }
    }
  }
  return uVar14;
}

void Picture::getAnimationHeight( const {
unsigned long uVar1;
  uint uVar2;
  long in_RDI;
  
  uVar1 = (unsigned long)*(uint *)(in_RDI + 0x3c);
  if (*(int *)(in_RDI + 0xc) == 1) {
    uVar2 = 1;
    if (*(uint *)(in_RDI + 0x10) != 0) {
      uVar2 = *(uint *)(in_RDI + 0x10);
    }
    uVar1 = uVar1 / uVar2;
  }
  return uVar1;
}

void Picture::getAnimationWidth() const {
unsigned long uVar1;
  uint uVar2;
  long in_RDI;
  
  uVar1 = (unsigned long)*(uint *)(in_RDI + 0x38);
  if (*(int *)(in_RDI + 0xc) != 1) {
    uVar2 = 1;
    if (*(uint *)(in_RDI + 0x10) != 0) {
      uVar2 = *(uint *)(in_RDI + 0x10);
    }
    uVar1 = uVar1 / uVar2;
  }
  return uVar1;
}

void Picture::getUseLegacyAlphaCompositing() const {
return this[0x4c];
}

void Picture::initEmptyAreaFlags() {
int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  sbyte sVar8;
  int iVar9;
  uint uVar10;
  unsigned long uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  unsigned long uVar16;
  uint uVar17;
  unsigned long uVar18;
  int iVar19;
  uint local_58 [2];
  Picture *local_50;
  uint local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iVar7;
  
  if (*(long *)(this + 0x70) != *(long *)(this + 0x68)) {
    *(long *)(this + 0x70) = *(long *)(this + 0x68);
  }
  if (((*(long *)(this + 0x30) != 0) && (uVar12 = *(uint *)(this + 0x14), uVar12 != 0)) &&
     (this[8] != (Picture)0x0)) {
    uVar17 = *(uint *)(this + 0x10);
    uVar16 = 1;
    if (uVar17 != 0) {
      uVar16 = (unsigned long)uVar17;
    }
    local_48 = *(uint *)(this + 0x38);
    if (*(int *)(this + 0xc) == 1) {
      uVar15 = 1;
      if (uVar17 != 0) {
        uVar15 = uVar17;
      }
      uVar15 = *(uint *)(this + 0x3c) / uVar15;
      uVar4 = local_48;
    }
    else {
      uVar4 = 1;
      if (uVar17 != 0) {
        uVar4 = uVar17;
      }
      uVar4 = local_48 / uVar4;
      uVar15 = *(uint *)(this + 0x3c);
    }
    local_34 = 0;
    iVar19 = 0;
    iVar13 = 0;
    if ((uVar12 & 2) != 0) {
      iVar19 = *(int *)(this + 0x20);
      iVar13 = *(int *)(this + 0x24);
    }
    iVar5 = 0;
    if ((uVar12 & 1) != 0) {
      local_34 = *(int *)(this + 0x18);
      iVar5 = *(int *)(this + 0x1c);
    }
    iVar13 = (uVar4 - iVar19) - iVar13;
    if ((0 < iVar13) && (iVar5 = (uVar15 - local_34) - iVar5, 0 < iVar5)) {
      local_58[0] = 0;
      local_50 = this;
      // std code
                ((vector<unsigned_int,// std code
      ;
      iVar1 = *(int *)(local_50 + 0xc);
      lVar2 = *(long *)(local_50 + 0x30);
      lVar3 = *(long *)(local_50 + 0x68);
      iVar5 = iVar5 + local_34;
      uVar18 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = iVar1;
      do {
        *(unsigned int *)(lVar3 + uVar18 * 4) = 0x1ff;
        if (0 < (int)uVar15) {
          iVar6 = 0;
          uVar12 = 0x1ff;
          do {
            iVar9 = (uint)(iVar5 <= iVar6) * 3 + 3;
            if (iVar6 < local_34) {
              iVar9 = 0;
            }
            sVar8 = (sbyte)iVar9;
            if ((uVar12 >> sVar8 & 7) == 0) {
              iVar9 = iVar5;
              if (iVar6 < local_34) {
                iVar9 = local_34;
              }
              iVar7 = iVar9 + -1;
              if ((local_34 <= iVar6) && (iVar5 <= iVar6)) break;
            }
            else {
              uVar17 = 1 << sVar8;
              iVar14 = 0;
              iVar7 = iVar6;
              if ((uVar12 >> iVar9 & 1) == 0) {
                iVar14 = 0;
                if ((uVar12 >> sVar8 & 2) == 0) {
                  iVar14 = iVar13;
                }
                iVar14 = iVar14 + iVar19;
                if (iVar14 < (int)uVar4) return;
              }
              else if(3 param_3, 2 param_2, 1 param_1, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 2 param_2, 1 param_1, 3 param_3, 5 param_5, 5 param_5, 4 param_4, 5 param_5, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 5 param_5, 5 param_5, 2 param_2, 2 param_2, 1 param_1, 4 param_4, 4 param_4, 4 param_4, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 2 param_2, 1 param_1, 3 param_3, 2 param_2, 1 param_1, 4 param_4, 5 param_5, 4 param_4, 2 param_2, 4 param_4, 4 param_4, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 3 param_3, 0 < (intuVar4 {
                do {
                  if (0xffffff <
                      *(uint *(lVar2 + (longlocal_40 * 4 + (long(int(local_3c * local_48 * 4 +
                                (long(int(iVar6 * local_48 * 4 + (longiVar14 * 4 {
                    uVar10 = uVar17;
                    iVar9 = iVar19;
                    if ((iVar19 <= iVar14 &&
                       (uVar10 = uVar17 * 2, iVar9 = iVar13 + iVar19, iVar13 + iVar19 <= iVar14 {
                      uVar12 = uVar12 & ~(uVar17 << 2;
                      *(uint *(lVar3 + uVar18 * 4 = uVar12;
                      break;
                    }
                    uVar12 = uVar12 & ~uVar10;
                    *(uint *(lVar3 + uVar18 * 4 = uVar12;
                    iVar14 = iVar9 + -1;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < (intuVar4;
              }
            }
            iVar6 = iVar7 + 1;
          } while (iVar6 < (intuVar15;
        }
        if (iVar1 == 1 {
          local_38 = 1;
          uVar11 = (unsigned long*(uint *(local_50 + 0x10;
          if (*(uint *(local_50 + 0x10 == 0 {
            uVar11 = 1;
          }
          local_3c = local_3c + (int(*(uint *(local_50 + 0x3c / uVar11;
          uVar18 = uVar18 + 1;
          if (uVar18 == uVar16 {
            return;
          }
        }
        else {
          uVar12 = *(uint *(local_50 + 0x38;
          if (local_38 != 1 {
            uVar11 = (unsigned long*(uint *(local_50 + 0x10;
            if (*(uint *(local_50 + 0x10 == 0 {
              uVar11 = 1;
            }
            uVar12 = (uint(uVar12 / uVar11;
          }
          local_40 = local_40 + uVar12;
          uVar18 = uVar18 + 1;
          if (uVar18 == uVar16 {
            return;
          }
        }
      } while( true ;
    }
  }
  return;
}

void Picture::invertArea(int, int, int, int {
unsigned long uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  unsigned long uVar23;
  int iVar24;
  int iVar25;
  unsigned long uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  
  if (this[0x4d] == (Picture0x0 {
    if ((param_4 != 0 && (param_3 != 0 {
      iVar27 = *(int *(this + 0x38;
      puVar30 = (uint *((long((param_2 + *(int *(this + 100) * iVar27 +
                               param_1 + *(int *)(this + 0x60)) * 4 + *(long *)(this + 0x30));
      uVar1 = (unsigned long)(param_3 - 1U) + 1;
      uVar23 = uVar1 & 0xfffffffffffffff8;
      uVar26 = (uVar23 - 8 >> 3) + 1;
      do {
        iVar35 = param_3;
        if (param_3 - 1U < 7) {
          do {
            *puVar30 = *puVar30 ^ 0xffffff;
            puVar30 = puVar30 + 1;
            iVar35 = iVar35 + -1;
          } while (iVar35 != 0);
        }
        else {
          if (uVar23 - 8 == 0) {
            lVar28 = 0;
          }
          else {
            lVar28 = 0;
            lVar29 = -(uVar26 & 0xfffffffffffffffe);
            do {
              puVar2 = puVar30 + lVar28;
              uVar32 = puVar2[1];
              uVar10 = puVar2[2];
              uVar31 = puVar2[3];
              puVar3 = puVar30 + lVar28 + 4;
              uVar4 = *puVar3;
              uVar34 = puVar3[1];
              uVar22 = puVar3[2];
              uVar11 = puVar3[3];
              puVar3 = puVar30 + lVar28 + 8;
              uVar12 = *puVar3;
              uVar13 = puVar3[1];
              uVar14 = puVar3[2];
              uVar15 = puVar3[3];
              puVar3 = puVar30 + lVar28 + 0xc;
              uVar16 = *puVar3;
              uVar17 = puVar3[1];
              uVar18 = puVar3[2];
              uVar19 = puVar3[3];
              puVar3 = puVar30 + lVar28;
              *puVar3 = *puVar2 ^ 0xffffff;
              puVar3[1] = uVar32 ^ 0xffffff;
              puVar3[2] = uVar10 ^ 0xffffff;
              puVar3[3] = uVar31 ^ 0xffffff;
              puVar2 = puVar30 + lVar28 + 4;
              *puVar2 = uVar4 ^ 0xffffff;
              puVar2[1] = uVar34 ^ 0xffffff;
              puVar2[2] = uVar22 ^ 0xffffff;
              puVar2[3] = uVar11 ^ 0xffffff;
              puVar2 = puVar30 + lVar28 + 8;
              *puVar2 = uVar12 ^ 0xffffff;
              puVar2[1] = uVar13 ^ 0xffffff;
              puVar2[2] = uVar14 ^ 0xffffff;
              puVar2[3] = uVar15 ^ 0xffffff;
              puVar2 = puVar30 + lVar28 + 0xc;
              *puVar2 = uVar16 ^ 0xffffff;
              puVar2[1] = uVar17 ^ 0xffffff;
              puVar2[2] = uVar18 ^ 0xffffff;
              puVar2[3] = uVar19 ^ 0xffffff;
              lVar28 = lVar28 + 0x10;
              lVar29 = lVar29 + 2;
            } while (lVar29 != 0);
          }
          if ((uVar26 & 1) != 0) {
            puVar2 = puVar30 + lVar28;
            uVar32 = puVar2[1];
            uVar10 = puVar2[2];
            uVar31 = puVar2[3];
            puVar3 = puVar30 + lVar28 + 4;
            uVar4 = *puVar3;
            uVar34 = puVar3[1];
            uVar22 = puVar3[2];
            uVar11 = puVar3[3];
            puVar3 = puVar30 + lVar28;
            *puVar3 = *puVar2 ^ 0xffffff;
            puVar3[1] = uVar32 ^ 0xffffff;
            puVar3[2] = uVar10 ^ 0xffffff;
            puVar3[3] = uVar31 ^ 0xffffff;
            puVar2 = puVar30 + lVar28 + 4;
            *puVar2 = uVar4 ^ 0xffffff;
            puVar2[1] = uVar34 ^ 0xffffff;
            puVar2[2] = uVar22 ^ 0xffffff;
            puVar2[3] = uVar11 ^ 0xffffff;
          }
          puVar30 = puVar30 + uVar23;
          iVar35 = param_3 - (int)uVar23;
          if (uVar1 != uVar23) return;
        }
        puVar30 = puVar30 + (iVar27 - param_3);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else {
    uVar32 = param_3 + param_1;
    uVar10 = param_1;
    if (param_3 < 0) {
      uVar32 = param_1;
      uVar10 = param_3 + param_1;
    }
    iVar27 = param_4 + param_2;
    iVar35 = param_2;
    if (param_4 < 0) {
      iVar27 = param_2;
      iVar35 = param_4 + param_2;
    }
    if (((int)uVar10 < (int)uVar32) && (iVar35 < iVar27)) {
      uVar31 = *(uint *)(this + 0x50);
      uVar4 = *(uint *)(this + 0x58);
      if (((int)uVar31 < (int)uVar4) &&
         ((((iVar33 = *(int *)(this + 0x54), iVar33 < iVar27 &&
            (iVar5 = *(int *)(this + 0x5c), iVar35 < iVar5)) && ((int)uVar31 < (int)uVar32)) &&
          (((int)uVar10 < (int)uVar4 && (iVar33 < iVar5)))))) {
        uVar34 = uVar10;
        if ((int)uVar10 < (int)uVar31) {
          uVar34 = uVar31;
        }
        uVar22 = uVar32;
        if ((int)uVar4 < (int)uVar32) {
          uVar22 = uVar4;
        }
        iVar24 = iVar35;
        if (iVar35 < iVar33) {
          iVar24 = iVar33;
        }
        iVar25 = iVar27;
        if (iVar5 < iVar27) {
          iVar25 = iVar5;
        }
        if (((int)uVar34 < (int)uVar22) && (iVar24 < iVar25)) {
          bVar6 = (int)uVar31 <= (int)uVar10;
          bVar7 = iVar33 <= iVar35;
          bVar8 = (int)uVar32 <= (int)uVar4;
          bVar9 = iVar5 < iVar27;
          if (bVar9 || (!bVar8 || (!bVar7 || !bVar6))) {
            uVar32 = uVar22;
          }
          uVar31 = uVar34;
          if (!bVar9 && (bVar8 && (bVar7 && bVar6))) {
            uVar31 = uVar10;
          }
          if (bVar9 || (!bVar8 || (!bVar7 || !bVar6))) {
            iVar27 = iVar25;
          }
          iVar33 = iVar24;
          if (!bVar9 && (bVar8 && (bVar7 && bVar6))) {
            iVar33 = iVar35;
          }
          if (uVar10 == param_1) {
            uVar31 = uVar22;
            uVar32 = uVar34;
          }
          if (iVar35 == param_2) {
            iVar33 = iVar25;
            iVar27 = iVar24;
          }
          iVar33 = iVar33 - iVar27;
          if ((iVar33 != 0) && (iVar35 = uVar31 - uVar32, iVar35 != 0)) {
            iVar5 = *(int *)(this + 0x38);
            puVar30 = (uint *)((long)(int)((iVar27 + *(int *)(this + 100)) * iVar5 +
                                          *(int *)(this + 0x60) + uVar32) * 4 +
                              *(long *)(this + 0x30));
            uVar1 = (unsigned long)(uVar31 + ~uVar32) + 1;
            uVar23 = uVar1 & 0xfffffffffffffff8;
            uVar26 = (uVar23 - 8 >> 3) + 1;
            do {
              iVar27 = iVar35;
              if (uVar31 + ~uVar32 < 7) {
                do {
                  *puVar30 = *puVar30 ^ 0xffffff;
                  puVar30 = puVar30 + 1;
                  iVar27 = iVar27 + -1;
                } while (iVar27 != 0);
              }
              else {
                if (uVar23 - 8 == 0) {
                  lVar28 = 0;
                }
                else {
                  lVar28 = 0;
                  lVar29 = -(uVar26 & 0xfffffffffffffffe);
                  do {
                    puVar2 = puVar30 + lVar28;
                    uVar10 = puVar2[1];
                    uVar4 = puVar2[2];
                    uVar34 = puVar2[3];
                    puVar3 = puVar30 + lVar28 + 4;
                    uVar22 = *puVar3;
                    uVar11 = puVar3[1];
                    uVar12 = puVar3[2];
                    uVar13 = puVar3[3];
                    puVar3 = puVar30 + lVar28 + 8;
                    uVar14 = *puVar3;
                    uVar15 = puVar3[1];
                    uVar16 = puVar3[2];
                    uVar17 = puVar3[3];
                    puVar3 = puVar30 + lVar28 + 0xc;
                    uVar18 = *puVar3;
                    uVar19 = puVar3[1];
                    uVar20 = puVar3[2];
                    uVar21 = puVar3[3];
                    puVar3 = puVar30 + lVar28;
                    *puVar3 = *puVar2 ^ 0xffffff;
                    puVar3[1] = uVar10 ^ 0xffffff;
                    puVar3[2] = uVar4 ^ 0xffffff;
                    puVar3[3] = uVar34 ^ 0xffffff;
                    puVar2 = puVar30 + lVar28 + 4;
                    *puVar2 = uVar22 ^ 0xffffff;
                    puVar2[1] = uVar11 ^ 0xffffff;
                    puVar2[2] = uVar12 ^ 0xffffff;
                    puVar2[3] = uVar13 ^ 0xffffff;
                    puVar2 = puVar30 + lVar28 + 8;
                    *puVar2 = uVar14 ^ 0xffffff;
                    puVar2[1] = uVar15 ^ 0xffffff;
                    puVar2[2] = uVar16 ^ 0xffffff;
                    puVar2[3] = uVar17 ^ 0xffffff;
                    puVar2 = puVar30 + lVar28 + 0xc;
                    *puVar2 = uVar18 ^ 0xffffff;
                    puVar2[1] = uVar19 ^ 0xffffff;
                    puVar2[2] = uVar20 ^ 0xffffff;
                    puVar2[3] = uVar21 ^ 0xffffff;
                    lVar28 = lVar28 + 0x10;
                    lVar29 = lVar29 + 2;
                  } while (lVar29 != 0);
                }
                if ((uVar26 & 1) != 0) {
                  puVar2 = puVar30 + lVar28;
                  uVar10 = puVar2[1];
                  uVar4 = puVar2[2];
                  uVar34 = puVar2[3];
                  puVar3 = puVar30 + lVar28 + 4;
                  uVar22 = *puVar3;
                  uVar11 = puVar3[1];
                  uVar12 = puVar3[2];
                  uVar13 = puVar3[3];
                  puVar3 = puVar30 + lVar28;
                  *puVar3 = *puVar2 ^ 0xffffff;
                  puVar3[1] = uVar10 ^ 0xffffff;
                  puVar3[2] = uVar4 ^ 0xffffff;
                  puVar3[3] = uVar34 ^ 0xffffff;
                  puVar2 = puVar30 + lVar28 + 4;
                  *puVar2 = uVar22 ^ 0xffffff;
                  puVar2[1] = uVar11 ^ 0xffffff;
                  puVar2[2] = uVar12 ^ 0xffffff;
                  puVar2[3] = uVar13 ^ 0xffffff;
                }
                puVar30 = puVar30 + uVar23;
                iVar27 = iVar35 - (int)uVar23;
                if (uVar1 != uVar23) return;
              }
              puVar30 = puVar30 + (iVar5 - iVar35);
              iVar33 = iVar33 + -1;
            } while (iVar33 != 0);
          }
        }
      }
    }
  }
  return;
}

Picture::Picture() {
this[8] = (Picture)0x0;
  *(unsigned int *)(this + 0xc) = 1;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__Picture_101b24410;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x46) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  
}

void Picture::reallocData(int, int, bool) {
void *pvVar1;
  uint uVar2;
  unsigned long uVar3;
  
  uVar2 = param_1 * param_2 * 4 + *(int *)(this + 0x44);
  pvVar1 = *(void **)(this + 0x28);
  if ((*(uint *)(this + 0x40) == uVar2) || (uVar2 <= *(uint *)(this + 0x40) && !param_3)) {
    if (pvVar1 == (void *)0x0) {
      *(unsigned int *)(this + 0x40) = 0;
      return 0;
    }
  }
  else {
    if (pvVar1 != (void *)0x0) {
      delete__(pvVar1);
      *(unsigned long long *)(this + 0x34) = 0;
      *(unsigned long long *)(this + 0x3c) = 0;
      *(unsigned long long *)(this + 0x28) = 0;
      *(unsigned long long *)(this + 0x30) = 0;
    }
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = (unsigned long)uVar2;
    }
    pvVar1 = new__(uVar3);
    *(void **)(this + 0x28) = pvVar1;
    *(int *)(this + 0x40) = (int)uVar3;
  }
  *(unsigned long *)(this + 0x30) = (unsigned long)*(uint *)(this + 0x44) + (long)pvVar1;
  return 1;
}

void Picture::resetClipRect() {
this[0x4d] = (Picture)0x0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = *(unsigned long long *)(this + 0x38);
  return;
}

void Picture::setPixelUC(int, int, unsigned int) {
char cVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 < 0xff000000) {
    cVar1 = getUseLegacyAlphaCompositing(this);
    if (cVar1 == '\0') {
      lVar2 = (long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) + param_1) +
              (long)*(int *)(this + 0x60);
      uVar6 = param_3 >> 0x18;
      uVar3 = *(uint *)(*(long *)(this + 0x30) + lVar2 * 4);
      iVar5 = (uVar6 ^ 0xff) * (uVar3 >> 0x18);
      uVar4 = (iVar5 + 0x7fU) / 0xff + uVar6;
      if (uVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar9 = uVar4 >> 1;
        uVar8 = (((uVar3 >> 0x10 & 0xff) * iVar5 + 0x7f) / 0xff + (param_3 >> 0x10 & 0xff) * uVar6 +
                uVar9) / uVar4;
        uVar7 = (((uVar3 >> 8 & 0xff) * iVar5 + 0x7f) / 0xff + (param_3 >> 8 & 0xff) * uVar6 + uVar9
                ) / uVar4;
        uVar3 = (((uVar3 & 0xff) * iVar5 + 0x7f) / 0xff + (param_3 & 0xff) * uVar6 + uVar9) / uVar4;
        if (0xfe < uVar4) {
          uVar4 = 0xff;
        }
        if (0xfe < uVar8) {
          uVar8 = 0xff;
        }
        if (0xfe < uVar7) {
          uVar7 = 0xff;
        }
        uVar6 = 0xff;
        if (uVar3 < 0xff) {
          uVar6 = uVar3;
        }
        uVar3 = uVar6 | uVar7 << 8 | uVar8 << 0x10 | uVar4 << 0x18;
      }
      *(uint *)(*(long *)(this + 0x30) + lVar2 * 4) = uVar3;
    }
    else {
      uVar3 = param_3 >> 0x18;
      if (uVar3 != 0) {
        iVar5 = 0x100 - uVar3;
        lVar2 = (long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) + param_1) +
                (long)*(int *)(this + 0x60);
        uVar4 = *(uint *)(*(long *)(this + 0x30) + lVar2 * 4);
        *(uint *)(*(long *)(this + 0x30) + lVar2 * 4) =
             ((uVar4 >> 0x10 & 0xff) * iVar5 + (param_3 >> 0x10 & 0xff) * uVar3 & 0x3ff00) * 0x100 +
             ((uVar4 & 0xff) * iVar5 + (param_3 & 0xff) * uVar3 >> 8) +
             ((uVar4 >> 8 & 0xff) * iVar5 + (param_3 >> 8 & 0xff) * uVar3 & 0x3ff00);
      }
    }
  }
  else {
    *(uint *)(*(long *)(this + 0x30) +
             ((long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) + param_1) +
             (long)*(int *)(this + 0x60)) * 4) = param_3;
  }
  return;
}

void Picture::setUseLegacyAlphaCompositing(bool param_1) {
}

Picture::~Picture() {
void *pvVar1;
  
  *(void ***)this = &PTR__Picture_101b24410;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    delete__(*(void **)(this + 0x28));
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    delete(pvVar1);
  }
  delete(this);
  return;
}
}
