#include <ni/controller_editor/Picture.hpp>
namespace NI::UIA {

void Picture::drawLine(int, int, int, int, unsigned int) {
bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  
  if (this[0x4d] == (Picture)0x0) {
    iVar2 = *(int *)(this + 0x38) - *(int *)(this + 0x60);
    iVar6 = -*(int *)(this + 0x60);
    iVar8 = *(int *)(this + 0x3c) - *(int *)(this + 100);
    iVar5 = -*(int *)(this + 100);
  }
  else {
    iVar6 = *(int *)(this + 0x50);
    iVar5 = *(int *)(this + 0x54);
    iVar2 = *(int *)(this + 0x58);
    iVar8 = *(int *)(this + 0x5c);
  }
  iVar3 = iVar2;
  if (param_1 < iVar6) {
    if (param_3 < iVar6) {
      return;
    }
    if (param_3 < iVar2) {
      iVar3 = param_3;
    }
    bVar9 = iVar2 <= param_3;
    iVar4 = iVar6;
    bVar1 = true;
  }
  else if (param_1 < iVar2) {
    iVar4 = param_1;
    if (param_3 < iVar6) {
      iVar3 = iVar6 + -1;
      bVar9 = true;
      bVar1 = true;
    }
    else {
      if (param_3 < iVar2) {
        iVar3 = param_3;
      }
      bVar9 = iVar2 <= param_3;
      bVar1 = bVar9;
    }
  }
  else {
    if (iVar2 <= param_3) {
      return;
    }
    iVar4 = iVar2 + -1;
    bVar9 = param_3 < iVar6;
    iVar3 = iVar6 + -1;
    if (iVar6 <= param_3) {
      iVar3 = param_3;
    }
    bVar1 = true;
  }
  iVar6 = iVar8;
  if (param_2 < iVar5) {
    if (param_4 < iVar5) {
      return;
    }
    bVar7 = iVar8 <= param_4;
    if (param_4 < iVar8) {
      iVar6 = param_4;
    }
  }
  else if (param_2 < iVar8) {
    if (param_4 < iVar5) {
      iVar6 = iVar5 + -1;
      bVar7 = true;
      iVar5 = param_2;
    }
    else {
      bVar7 = true;
      iVar5 = param_2;
      if (param_4 < iVar8) {
        if (!bVar1) {
          drawLineUC(this,param_1,param_2,param_3,param_4,param_5);
          return;
        }
        bVar7 = false;
        iVar6 = param_4;
      }
    }
  }
  else {
    if (iVar8 <= param_4) {
      return;
    }
    iVar6 = iVar5 + -1;
    bVar7 = param_4 < iVar5;
    bVar1 = iVar5 <= param_4;
    iVar5 = iVar8 + -1;
    if (bVar1) {
      iVar6 = param_4;
    }
  }
  PICTURE_DETAIL::drawLineBresenham
            (this,param_1,param_2,param_3,param_4,param_5,iVar4,iVar5,iVar3,iVar6,bVar9,bVar7);
  return;
}

void Picture::drawLineAA(float, float, float, float, unsigned int) {
int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  
  if (this[0x4d] != (Picture)0x0) {
    if (*(int *)(this + 0x58) <= *(int *)(this + 0x50)) {
      return;
    }
    if ((int)ABS(param_1 - param_3) < 0) {
      return;
    }
    if (*(int *)(this + 0x5c) <= *(int *)(this + 0x54)) {
      return;
    }
    fVar22 = param_3;
    if (param_1 <= param_3) {
      fVar22 = param_1;
    }
    if (*(int *)(this + 0x58) <= (int)fVar22) {
      return;
    }
    if ((int)ABS(param_2 - param_4) < 0) {
      return;
    }
    if ((int)fVar22 + 1 + (int)ABS(param_1 - param_3) <= *(int *)(this + 0x50)) {
      return;
    }
    fVar22 = param_4;
    if (param_2 <= param_4) {
      fVar22 = param_2;
    }
    if ((int)fVar22 + 1 + (int)ABS(param_2 - param_4) <= *(int *)(this + 0x54)) {
      return;
    }
    if (*(int *)(this + 0x5c) <= (int)fVar22) {
      return;
    }
  }
  uVar17 = param_5 >> 0x18;
  uVar11 = (uint)((param_3 - param_1) * (float)uVar17);
  uVar3 = -uVar11;
  if (0 < (int)uVar11) {
    uVar3 = uVar11;
  }
  uVar14 = (uint)((param_4 - param_2) * (float)uVar17);
  uVar9 = -uVar14;
  if (0 < (int)uVar14) {
    uVar9 = uVar14;
  }
  fVar22 = param_1;
  uVar10 = uVar11;
  fVar21 = param_3;
  if ((int)uVar3 < (int)uVar9) {
    fVar22 = param_2;
    uVar10 = uVar14;
    fVar21 = param_4;
    param_4 = param_3;
    param_2 = param_1;
    uVar14 = uVar11;
  }
  fVar12 = param_4;
  fVar4 = fVar22;
  if (fVar21 < fVar22) {
    uVar10 = -uVar10;
    uVar14 = -uVar14;
    fVar12 = param_2;
    fVar4 = fVar21;
    param_2 = param_4;
    fVar21 = fVar22;
  }
  if (uVar10 == 0) {
    return;
  }
  iVar5 = (int)(fVar4 + 0.5);
  fVar22 = (float)(int)uVar10;
  iVar13 = (int)(((float)iVar5 - fVar4) * (float)(int)uVar14 + param_2 * fVar22);
  iVar18 = (int)((fVar4 + 0.5) * fVar22) % (int)uVar10;
  iVar19 = iVar13 / (int)uVar10;
  iVar16 = 0;
  if (iVar13 < 0) {
    iVar16 = (-iVar13 / (int)uVar10 + 1) * uVar10;
  }
  iVar6 = iVar16 + iVar13;
  uVar11 = param_5 & 0xffffff;
  if (iVar16 + iVar18 < 0) {
    iVar16 = (-iVar18 / (int)uVar10 + 1) * uVar10;
  }
  uVar7 = ((uVar10 - (iVar16 + iVar18) % (int)uVar10) *
          (((uVar10 - iVar6 % (int)uVar10) * uVar17) / uVar10 & 0xff)) / uVar10 << 0x18 | uVar11;
  iVar6 = *(int *)(this + 0x50);
  iVar20 = *(int *)(this + 0x58);
  if ((int)uVar3 < (int)uVar9) {
    if (iVar6 < iVar20) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar6 <= iVar19)) &&
          (iVar19 < iVar20)) &&
         ((*(int *)(this + 0x54) <= iVar5 && (iVar5 < *(int *)(this + 0x5c))))) {
        setPixelUC(this,iVar19,iVar5,uVar7);
      }
    }
    if (iVar16 + iVar13 < 0) {
      iVar16 = (-iVar13 / (int)uVar10 + 1) * uVar10;
    }
    iVar6 = iVar16 + iVar13;
    if (iVar16 + iVar18 < 0) {
      iVar16 = (-iVar18 / (int)uVar10 + 1) * uVar10;
    }
    uVar7 = (uVar10 - (iVar18 + iVar16) % (int)uVar10) *
            (((iVar6 % (int)uVar10) * uVar17) / uVar10 & 0xff);
    if (*(int *)(this + 0x50) < *(int *)(this + 0x58)) {
      if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) &&
          (iVar19 = iVar19 + 1, *(int *)(this + 0x50) <= iVar19)) &&
         ((iVar19 < *(int *)(this + 0x58) &&
          ((*(int *)(this + 0x54) <= iVar5 && (iVar18 = iVar5, iVar5 < *(int *)(this + 0x5c))))))) {
LAB_1000a5fa0:
        setPixelUC(this,iVar19,iVar18,uVar7 / uVar10 << 0x18 | uVar11);
      }
    }
  }
  else {
    if (iVar6 < iVar20) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar6 <= iVar5)) && (iVar5 < iVar20)
          ) && ((*(int *)(this + 0x54) <= iVar19 && (iVar19 < *(int *)(this + 0x5c))))) {
        setPixelUC(this,iVar5,iVar19,uVar7);
      }
    }
    if (iVar16 + iVar13 < 0) {
      iVar16 = (-iVar13 / (int)uVar10 + 1) * uVar10;
    }
    iVar6 = iVar16 + iVar13;
    if (iVar16 + iVar18 < 0) {
      iVar16 = (-iVar18 / (int)uVar10 + 1) * uVar10;
    }
    uVar7 = (uVar10 - (iVar18 + iVar16) % (int)uVar10) *
            (((iVar6 % (int)uVar10) * uVar17) / uVar10 & 0xff);
    if (*(int *)(this + 0x50) < *(int *)(this + 0x58)) {
      if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (*(int *)(this + 0x50) <= iVar5)) &&
         ((iVar5 < *(int *)(this + 0x58) &&
          ((iVar18 = iVar19 + 1, *(int *)(this + 0x54) <= iVar18 &&
           (iVar19 = iVar5, iVar18 < *(int *)(this + 0x5c))))))) goto LAB_1000a5fa0;
    }
  }
  iVar6 = (int)(fVar21 + 0.5);
  iVar20 = (int)((float)(int)uVar14 * ((float)iVar6 - fVar21) + fVar12 * fVar22);
  iVar18 = (int)((fVar21 + 0.5) * fVar22) % (int)uVar10;
  iVar19 = iVar20 / (int)uVar10;
  if (iVar16 + iVar20 < 0) {
    iVar16 = (-iVar20 / (int)uVar10 + 1) * uVar10;
  }
  iVar15 = iVar16 + iVar20;
  if (iVar16 + iVar18 < 0) {
    iVar16 = (-iVar18 / (int)uVar10 + 1) * uVar10;
  }
  uVar7 = ((((uVar10 - iVar15 % (int)uVar10) * uVar17) / uVar10 & 0xff) *
          ((iVar16 + iVar18) % (int)uVar10)) / uVar10 << 0x18 | uVar11;
  iVar15 = *(int *)(this + 0x50);
  iVar1 = *(int *)(this + 0x58);
  if ((int)uVar3 < (int)uVar9) {
    if (iVar15 < iVar1) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar15 <= iVar19)) &&
          (iVar19 < iVar1)) && ((*(int *)(this + 0x54) <= iVar6 && (iVar6 < *(int *)(this + 0x5c))))
         ) {
        setPixelUC(this,iVar19,iVar6,uVar7);
      }
    }
    if (iVar16 + iVar20 < 0) {
      iVar16 = (-iVar20 / (int)uVar10 + 1) * uVar10;
    }
    iVar20 = iVar20 + iVar16;
    if (iVar16 + iVar18 < 0) {
      iVar16 = (-iVar18 / (int)uVar10 + 1) * uVar10;
    }
    uVar7 = (((iVar20 % (int)uVar10) * uVar17) / uVar10 & 0xff) * ((iVar18 + iVar16) % (int)uVar10);
    if (*(int *)(this + 0x58) <= *(int *)(this + 0x50)) goto LAB_1000a62a0;
    if (((*(int *)(this + 0x5c) <= *(int *)(this + 0x54)) ||
        (iVar19 = iVar19 + 1, iVar19 < *(int *)(this + 0x50))) ||
       ((*(int *)(this + 0x58) <= iVar19 ||
        ((iVar6 < *(int *)(this + 0x54) || (iVar18 = iVar6, *(int *)(this + 0x5c) <= iVar6))))))
    goto LAB_1000a62a0;
  }
  else {
    if (iVar15 < iVar1) {
      if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar15 <= iVar6)) && (iVar6 < iVar1)
          ) && ((*(int *)(this + 0x54) <= iVar19 && (iVar19 < *(int *)(this + 0x5c))))) {
        setPixelUC(this,iVar6,iVar19,uVar7);
      }
    }
    if (iVar16 + iVar20 < 0) {
      iVar16 = (-iVar20 / (int)uVar10 + 1) * uVar10;
    }
    iVar20 = iVar20 + iVar16;
    if (iVar16 + iVar18 < 0) {
      iVar16 = (-iVar18 / (int)uVar10 + 1) * uVar10;
    }
    uVar7 = (((iVar20 % (int)uVar10) * uVar17) / uVar10 & 0xff) * ((iVar18 + iVar16) % (int)uVar10);
    if (*(int *)(this + 0x58) <= *(int *)(this + 0x50)) goto LAB_1000a62a0;
    if (((*(int *)(this + 0x5c) <= *(int *)(this + 0x54)) || (iVar6 < *(int *)(this + 0x50))) ||
       ((*(int *)(this + 0x58) <= iVar6 ||
        ((iVar18 = iVar19 + 1, iVar18 < *(int *)(this + 0x54) ||
         (iVar19 = iVar6, *(int *)(this + 0x5c) <= iVar18)))))) goto LAB_1000a62a0;
  }
  setPixelUC(this,iVar19,iVar18,uVar7 / uVar10 << 0x18 | uVar11);
LAB_1000a62a0:
  iVar5 = iVar5 + 1;
  if (iVar5 < iVar6) {
    iVar19 = -(uVar14 + iVar13);
    uVar7 = uVar14;
    do {
      iVar20 = iVar13 + uVar7;
      iVar18 = iVar20 / (int)uVar10;
      if (iVar20 + iVar16 < 0) {
        iVar16 = (iVar19 / (int)uVar10 + 1) * uVar10;
      }
      iVar15 = iVar20 + iVar16;
      uVar8 = ((uVar10 - iVar15 % (int)uVar10) * uVar17) / uVar10 << 0x18 | uVar11;
      iVar1 = *(int *)(this + 0x50);
      iVar2 = *(int *)(this + 0x58);
      if ((int)uVar3 < (int)uVar9) {
        if (iVar1 < iVar2) {
          if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar1 <= iVar18)) &&
              (iVar18 < iVar2)) &&
             ((*(int *)(this + 0x54) <= iVar5 && (iVar5 < *(int *)(this + 0x5c))))) {
            setPixelUC(this,iVar18,iVar5,uVar8);
          }
        }
        if (iVar15 < 0) {
          iVar16 = (iVar19 / (int)uVar10 + 1) * uVar10;
        }
        if (*(int *)(this + 0x50) < *(int *)(this + 0x58)) {
          if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) &&
              (iVar18 = iVar18 + 1, *(int *)(this + 0x50) <= iVar18)) &&
             ((iVar18 < *(int *)(this + 0x58) &&
              ((*(int *)(this + 0x54) <= iVar5 && (iVar15 = iVar5, iVar5 < *(int *)(this + 0x5c)))))
             )) {
LAB_1000a64bf:
            setPixelUC(this,iVar18,iVar15,
                       (((iVar20 + iVar16) % (int)uVar10) * uVar17) / uVar10 << 0x18 | uVar11);
          }
        }
      }
      else {
        if (iVar1 < iVar2) {
          if ((((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (iVar1 <= iVar5)) &&
              (iVar5 < iVar2)) &&
             ((*(int *)(this + 0x54) <= iVar18 && (iVar18 < *(int *)(this + 0x5c))))) {
            setPixelUC(this,iVar5,iVar18,uVar8);
          }
        }
        if (iVar15 < 0) {
          iVar16 = (iVar19 / (int)uVar10 + 1) * uVar10;
        }
        if (*(int *)(this + 0x50) < *(int *)(this + 0x58)) {
          if (((*(int *)(this + 0x54) < *(int *)(this + 0x5c)) && (*(int *)(this + 0x50) <= iVar5))
             && ((iVar5 < *(int *)(this + 0x58) &&
                 ((iVar15 = iVar18 + 1, *(int *)(this + 0x54) <= iVar15 &&
                  (iVar18 = iVar5, iVar15 < *(int *)(this + 0x5c))))))) goto LAB_1000a64bf;
        }
      }
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 + uVar14;
      iVar19 = iVar19 - uVar14;
    } while (iVar6 != iVar5);
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
  bool bVar8;
  
  if (this[0x4d] == (Picture)0x0) {
LAB_1000a4f7d:
    drawLineHUC(this,param_1,param_2,param_3,param_4);
    return;
  }
  iVar6 = param_3 + param_1;
  iVar4 = param_1;
  if (-1 < param_3) {
    iVar6 = param_1;
    iVar4 = param_3 + param_1;
  }
  if (iVar6 < iVar4) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x58);
    if (((((iVar1 < iVar2) && (*(int *)(this + 0x54) <= param_2)) &&
         (iVar3 = *(int *)(this + 0x5c), param_2 < iVar3)) && ((iVar1 < iVar4 && (iVar6 < iVar2))))
       && (*(int *)(this + 0x54) < iVar3)) {
      iVar7 = param_2 + 1;
      if (iVar1 <= iVar6) {
        iVar1 = iVar6;
      }
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
      if (iVar7 < iVar3) {
        iVar3 = iVar7;
      }
      if ((iVar1 < iVar2) && (param_2 < iVar3)) {
        iVar5 = iVar1;
        if (iVar7 == iVar3 && (iVar4 == iVar2 && iVar6 == iVar1)) {
          iVar5 = iVar6;
        }
        if (iVar7 != iVar3 || (iVar4 != iVar2 || iVar6 != iVar1)) {
          iVar4 = iVar2;
        }
        bVar8 = iVar6 == param_1;
        param_1 = iVar4;
        if (bVar8 param_1) {
        }
        param_3 = iVar5 - param_1;
        goto LAB_1000a4f7d;
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
  
  iVar3 = param_3 - param_1;
  iVar8 = -iVar3;
  if (0 < iVar3) {
    iVar8 = iVar3;
  }
  iVar5 = param_4 - param_2;
  iVar7 = -iVar5;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  uVar4 = iVar3 >> 0x1f | 1;
  iVar3 = iVar8 * 2;
  uVar6 = iVar5 >> 0x1f | 1;
  iVar5 = iVar7 * 2;
  if (iVar3 == iVar5 || SBORROW4(iVar3,iVar5) != iVar3 + iVar7 * -2 < 0) {
    if ((iVar5 != 0) && (param_4 != param_2)) {
      setPixelUC(this,param_1,param_2,param_5);
      iVar8 = param_2 + uVar6;
      if (iVar8 != param_4) {
        iVar5 = iVar3 - (iVar5 >> 1);
        do {
          uVar1 = 0;
          if (-1 < iVar5) {
            uVar1 = uVar4;
          }
          iVar2 = 0;
          if (-1 < iVar5) {
            iVar2 = iVar7 * -2;
          }
          param_1 = param_1 + uVar1;
          iVar5 = iVar5 + iVar3 + iVar2;
          setPixelUC(this,param_1,iVar8,param_5);
          iVar8 = iVar8 + uVar6;
        } while (param_4 != iVar8);
      }
    }
  }
  else {
    setPixelUC(this,param_1,param_2,param_5);
    iVar7 = param_1 + uVar4;
    if (iVar7 != param_3) {
      iVar3 = iVar5 - (iVar3 >> 1);
      do {
        uVar1 = 0;
        if (-1 < iVar3) {
          uVar1 = uVar6;
        }
        iVar2 = 0;
        if (-1 < iVar3) {
          iVar2 = iVar8 * -2;
        }
        param_2 = param_2 + uVar1;
        iVar3 = iVar3 + iVar5 + iVar2;
        setPixelUC(this,iVar7,param_2,param_5);
        iVar7 = iVar7 + uVar4;
      } while (param_3 != iVar7);
    }
  }
  return;
}

void Picture::drawLineV(int, int, int, unsigned int) {
int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (this[0x4d] == (Picture)0x0) {
LAB_1000a4aa7:
    drawLineVUC(this,param_1,param_2,param_3,param_4);
    return;
  }
  iVar6 = param_3 + param_2;
  iVar4 = param_2;
  if (-1 < param_3) {
    iVar6 = param_2;
    iVar4 = param_3 + param_2;
  }
  if (iVar6 < iVar4) {
    iVar1 = *(int *)(this + 0x58);
    if (((((*(int *)(this + 0x50) < iVar1) && (iVar2 = *(int *)(this + 0x54), iVar2 < iVar4)) &&
         (iVar3 = *(int *)(this + 0x5c), iVar6 < iVar3)) &&
        ((*(int *)(this + 0x50) <= param_1 && (param_1 < iVar1)))) && (iVar2 < iVar3)) {
      iVar7 = param_1 + 1;
      if (iVar7 < iVar1) {
        iVar1 = iVar7;
      }
      if (iVar2 <= iVar6) {
        iVar2 = iVar6;
      }
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      if ((param_1 < iVar1) && (iVar2 < iVar3)) {
        iVar5 = iVar2;
        if (iVar4 == iVar3 && (iVar7 == iVar1 && iVar6 == iVar2)) {
          iVar5 = iVar6;
        }
        if (iVar4 != iVar3 || (iVar7 != iVar1 || iVar6 != iVar2)) {
          iVar4 = iVar3;
        }
        bVar8 = iVar6 == param_2;
        param_2 = iVar4;
        if (bVar8) {
          param_2 = iVar2;
          iVar5 = iVar3;
        }
        param_3 = iVar5 - param_2;
        goto LAB_1000a4aa7;
      }
    }
  }
  return;
}

void Picture::drawLineVUC(int, int, int, unsigned int) {
byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  bVar1 = (byte)(param_4 >> 8);
  if (param_4 < 0xff000000) {
    uVar7 = param_4 >> 0x18;
    if (uVar7 != 0) {
      if (this[0x4c] == (Picture)0x0) {
        if (0 < param_3) {
          puVar4 = (uint *)(((long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) +
                                   param_1) + (long)*(int *)(this + 0x60)) * 4 +
                           *(long *)(this + 0x30));
          iVar3 = param_3 + 1;
          do {
            uVar2 = *puVar4;
            iVar10 = (uVar2 >> 0x18) * (uVar7 ^ 0xff);
            uVar9 = (iVar10 + 0x7fU) / 0xff + uVar7;
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar8 = uVar9 >> 1;
              uVar6 = (((uVar2 >> 0x10 & 0xff) * iVar10 + 0x7f) / 0xff +
                       (param_4 >> 0x10 & 0xff) * uVar7 + uVar8) / uVar9;
              uVar5 = (((uVar2 >> 8 & 0xff) * iVar10 + 0x7f) / 0xff + bVar1 * uVar7 + uVar8) / uVar9
              ;
              uVar2 = (((uVar2 & 0xff) * iVar10 + 0x7f) / 0xff + (param_4 & 0xff) * uVar7 + uVar8) /
                      uVar9;
              if (0xfe < uVar9) {
                uVar9 = 0xff;
              }
              if (0xfe < uVar6) {
                uVar6 = 0xff;
              }
              if (0xfe < uVar5) {
                uVar5 = 0xff;
              }
              if (0xfe < uVar2) {
                uVar2 = 0xff;
              }
              uVar5 = uVar2 | uVar5 << 8 | uVar6 << 0x10 | uVar9 << 0x18;
            }
            *puVar4 = uVar5;
            puVar4 = puVar4 + *(int *)(this + 0x38);
            iVar3 = iVar3 + -1;
          } while (1 < iVar3);
        }
      }
      else if (0 < param_3) {
        iVar10 = 0x100 - uVar7;
        puVar4 = (uint *)(((long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) + param_1
                                 ) + (long)*(int *)(this + 0x60)) * 4 + *(long *)(this + 0x30));
        iVar3 = param_3 + 1;
        do {
          uVar2 = *puVar4;
          *puVar4 = ((uVar2 & 0xff) * iVar10 + (param_4 & 0xff) * uVar7 >> 8) +
                    ((uVar2 >> 8 & 0xff) * iVar10 + bVar1 * uVar7 & 0x3ff00) +
                    ((uVar2 >> 0x10 & 0xff) * iVar10 + (param_4 >> 0x10 & 0xff) * uVar7 & 0xffff00)
                    * 0x100;
          puVar4 = puVar4 + *(int *)(this + 0x38);
          iVar3 = iVar3 + -1;
        } while (1 < iVar3);
      }
    }
  }
  else if (0 < param_3) {
    iVar3 = *(int *)(this + 0x38);
    puVar4 = (uint *)(((long)((param_2 + *(int *)(this + 100)) * iVar3 + param_1) +
                      (long)*(int *)(this + 0x60)) * 4 + *(long *)(this + 0x30));
    iVar10 = param_3 + 1;
    do {
      *puVar4 = param_4;
      iVar10 = iVar10 + -1;
      puVar4 = puVar4 + iVar3;
    } while (1 < iVar10);
  }
  return;
}

void Picture::drawRectangle(int, int, int, int, unsigned int) {
int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  if (this[0x4d] == (Picture)0x0) {
    drawLineHUC(this,param_1,param_2,param_3,param_5);
    if (param_4 < 2) {
      return;
    }
    drawLineHUC(this,param_1,param_2 + -1 + param_4,param_3,param_5);
    if (param_4 == 2) {
      return;
    }
    drawLineVUC(this,param_1,param_2 + 1,param_4 + -2,param_5);
  }
  else {
    iVar10 = param_3 + param_1;
    iVar11 = param_4 + param_2;
    iVar12 = param_1;
    iVar5 = iVar10;
    if (param_3 < 0) {
      iVar12 = iVar10;
      iVar5 = param_1;
    }
    iVar9 = param_2;
    iVar6 = iVar11;
    if (param_4 < 0) {
      iVar9 = iVar11;
      iVar6 = param_2;
    }
    if ((iVar5 <= iVar12) || (iVar6 <= iVar9)) {
      return;
    }
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x58);
    if (iVar2 <= iVar1) {
      return;
    }
    iVar3 = *(int *)(this + 0x54);
    if (iVar6 <= iVar3) {
      return;
    }
    iVar4 = *(int *)(this + 0x5c);
    if (iVar4 <= iVar9) {
      return;
    }
    if (iVar5 <= iVar1) {
      return;
    }
    if (iVar2 <= iVar12) {
      return;
    }
    if (iVar4 <= iVar3) {
      return;
    }
    if (iVar1 <= iVar12) {
      iVar1 = iVar12;
    }
    if (iVar5 < iVar2) {
      iVar2 = iVar5;
    }
    if (iVar3 <= iVar9) {
      iVar3 = iVar9;
    }
    if (iVar6 < iVar4) {
      iVar4 = iVar6;
    }
    if (iVar2 <= iVar1) {
      return;
    }
    if (iVar4 <= iVar3) {
      return;
    }
    bVar13 = iVar12 == iVar1;
    bVar14 = iVar9 == iVar3;
    bVar15 = iVar5 == iVar2;
    bVar16 = iVar6 != iVar4;
    iVar7 = iVar1;
    if (!bVar16 && (bVar15 && (bVar14 && bVar13))) {
      iVar7 = iVar12;
    }
    if (bVar16 || (!bVar15 || (!bVar14 || !bVar13))) {
      iVar5 = iVar2;
    }
    iVar8 = iVar3;
    if (!bVar16 && (bVar15 && (bVar14 && bVar13))) {
      iVar8 = iVar9;
    }
    if (bVar16 || (!bVar15 || (!bVar14 || !bVar13))) {
      iVar6 = iVar4;
    }
    if (iVar12 == param_1) {
      iVar5 = iVar1;
      iVar7 = iVar2;
    }
    if (iVar9 == param_2) {
      iVar6 = iVar3;
      iVar8 = iVar4;
    }
    if ((((iVar8 != iVar11) || (iVar7 != iVar10)) || (iVar5 != param_1)) || (iVar6 != param_2)) {
      iVar12 = 0;
      if (iVar6 == param_2) {
        drawLineHUC(this,iVar5,param_2,iVar7 - iVar5,param_5);
        iVar12 = 1;
        if (iVar8 - param_2 < 2) {
          return;
        }
      }
      iVar9 = iVar12;
      if (iVar8 == iVar11) {
        drawLineHUC(this,iVar5,iVar11 + -1,iVar7 - iVar5,param_5);
        iVar9 = iVar12 + 1;
      }
      iVar11 = (iVar8 - iVar6) - iVar9;
      if (iVar11 == 0 || iVar8 - iVar6 < iVar9) {
        return;
      }
      if (iVar5 == param_1) {
        drawLineVUC(this,param_1,iVar12 + iVar6,iVar11,param_5);
      }
      if (iVar7 != iVar10) {
        return;
      }
      iVar10 = iVar10 + -1;
      iVar12 = iVar12 + iVar6;
      goto LAB_1000a678c;
    }
    drawLineHUC(this,param_1,param_2,param_3,param_5);
    if (param_4 < 2) {
      return;
    }
    drawLineHUC(this,param_1,param_2 + -1 + param_4,param_3,param_5);
    if (param_4 == 2) {
      return;
    }
    drawLineVUC(this,param_1,param_2 + 1,param_4 + -2,param_5);
  }
  iVar12 = param_2 + 1;
  iVar10 = param_1 + -1 + param_3;
  iVar11 = param_4 + -2;
LAB_1000a678c:
  drawLineVUC(this,iVar10,iVar12,iVar11,param_5);
  return;
}

void Picture::fillArea(int, int, int, int, unsigned int) {
int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  if (this[0x4d] == (Picture)0x0) {
LAB_1000a69a1:
    fillAreaUC(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  iVar10 = param_3 + param_1;
  iVar5 = param_1;
  if (-1 < param_3) {
    iVar10 = param_1;
    iVar5 = param_3 + param_1;
  }
  iVar9 = param_4 + param_2;
  iVar6 = param_2;
  if (-1 < param_4) {
    iVar9 = param_2;
    iVar6 = param_4 + param_2;
  }
  if ((iVar10 < iVar5) && (iVar9 < iVar6)) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x58);
    if ((iVar1 < iVar2) &&
       ((((iVar3 = *(int *)(this + 0x54), iVar3 < iVar6 &&
          (iVar4 = *(int *)(this + 0x5c), iVar9 < iVar4)) && (iVar1 < iVar5)) &&
        ((iVar10 < iVar2 && (iVar3 < iVar4)))))) {
      if (iVar1 <= iVar10) {
        iVar1 = iVar10;
      }
      if (iVar5 < iVar2) {
        iVar2 = iVar5;
      }
      if (iVar3 <= iVar9) {
        iVar3 = iVar9;
      }
      if (iVar6 < iVar4) {
        iVar4 = iVar6;
      }
      if ((iVar1 < iVar2) && (iVar3 < iVar4)) {
        bVar11 = iVar10 == iVar1;
        bVar12 = iVar9 == iVar3;
        bVar13 = iVar5 == iVar2;
        bVar14 = iVar6 == iVar4;
        iVar7 = iVar1;
        if (bVar14 && (bVar13 && (bVar12 && bVar11))) {
          iVar7 = iVar10;
        }
        if (!bVar14 || (!bVar13 || (!bVar12 || !bVar11))) {
          iVar5 = iVar2;
        }
        iVar8 = iVar3;
        if (bVar14 && (bVar13 && (bVar12 && bVar11))) {
          iVar8 = iVar9;
        }
        if (!bVar14 || (!bVar13 || (!bVar12 || !bVar11))) {
          iVar6 = iVar4;
        }
        bVar11 = iVar10 == param_1;
        param_1 = iVar5;
        if (bVar11 param_1) {
        }
        bVar11 = iVar9 == param_2;
        param_2 = iVar6;
        if (bVar11) {
          param_2 = iVar3;
          iVar8 = iVar4;
        }
        param_3 = iVar7 - param_1;
        param_4 = iVar8 - param_2;
        goto LAB_1000a69a1;
      }
    }
  }
  return;
}

void Picture::fillAreaUC(int, int, int, int, unsigned int) {
Picture PVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  unsigned long uVar9;
  long lVar10;
  long lVar11;
  unsigned long uVar12;
  unsigned long uVar13;
  int iVar14;
  unsigned long uVar15;
  
  iVar14 = *(int *)(this + 0x38);
  lVar8 = (long)((param_2 + *(int *)(this + 100)) * iVar14 + param_1) + (long)*(int *)(this + 0x60);
  lVar6 = *(long *)(this + 0x30);
  puVar7 = (uint *)(lVar6 + lVar8 * 4);
  if ((iVar14 == param_3) || (param_4 < 2)) {
    iVar14 = param_4 * param_3;
    if (param_5 < 0xff000000) {
      uVar4 = param_5 >> 0x18;
      if (uVar4 != 0) {
        PictureSCALAR::fillLineTransparentImpl
                  (puVar7,iVar14,0x100 - uVar4,(param_5 >> 0x10 & 0xff) * uVar4,
                   (param_5 >> 8 & 0xff) * uVar4,(param_5 & 0xff) * uVar4,param_5,(bool)this[0x4c]);
      }
    }
    else if (iVar14 != 0) {
      uVar12 = (unsigned long)(iVar14 - 1) + 1;
      if (7 < uVar12) {
        uVar13 = uVar12 & 0x1fffffff8;
        if (uVar13 != 0) {
          uVar4 = ((uint)(uVar13 - 8 >> 3) & 0x1fffffff) + 1;
          if ((uVar4 & 7) == 0) {
            lVar2 = 0;
          }
          else {
            lVar11 = lVar6 + 0x10 + lVar8 * 4;
            lVar10 = -((unsigned long)uVar4 & 7);
            lVar2 = 0;
            do {
              puVar3 = (uint *)(lVar11 + -0x10 + lVar2 * 4);
              *puVar3 = param_5;
              puVar3[1] = param_5;
              puVar3[2] = param_5;
              puVar3[3] = param_5;
              puVar3 = (uint *)(lVar11 + lVar2 * 4);
              *puVar3 = param_5;
              puVar3[1] = param_5;
              puVar3[2] = param_5;
              puVar3[3] = param_5;
              lVar2 = lVar2 + 8;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0);
          }
          if (0x37 < uVar13 - 8) {
            lVar11 = uVar13 - lVar2;
            puVar3 = (uint *)(lVar6 + 0xf0 + (lVar8 + lVar2) * 4);
            do {
              puVar3[-0x3c] = param_5;
              puVar3[-0x3b] = param_5;
              puVar3[-0x3a] = param_5;
              puVar3[-0x39] = param_5;
              puVar3[-0x38] = param_5;
              puVar3[-0x37] = param_5;
              puVar3[-0x36] = param_5;
              puVar3[-0x35] = param_5;
              puVar3[-0x34] = param_5;
              puVar3[-0x33] = param_5;
              puVar3[-0x32] = param_5;
              puVar3[-0x31] = param_5;
              puVar3[-0x30] = param_5;
              puVar3[-0x2f] = param_5;
              puVar3[-0x2e] = param_5;
              puVar3[-0x2d] = param_5;
              puVar3[-0x2c] = param_5;
              puVar3[-0x2b] = param_5;
              puVar3[-0x2a] = param_5;
              puVar3[-0x29] = param_5;
              puVar3[-0x28] = param_5;
              puVar3[-0x27] = param_5;
              puVar3[-0x26] = param_5;
              puVar3[-0x25] = param_5;
              puVar3[-0x24] = param_5;
              puVar3[-0x23] = param_5;
              puVar3[-0x22] = param_5;
              puVar3[-0x21] = param_5;
              puVar3[-0x20] = param_5;
              puVar3[-0x1f] = param_5;
              puVar3[-0x1e] = param_5;
              puVar3[-0x1d] = param_5;
              puVar3[-0x1c] = param_5;
              puVar3[-0x1b] = param_5;
              puVar3[-0x1a] = param_5;
              puVar3[-0x19] = param_5;
              puVar3[-0x18] = param_5;
              puVar3[-0x17] = param_5;
              puVar3[-0x16] = param_5;
              puVar3[-0x15] = param_5;
              puVar3[-0x14] = param_5;
              puVar3[-0x13] = param_5;
              puVar3[-0x12] = param_5;
              puVar3[-0x11] = param_5;
              puVar3[-0x10] = param_5;
              puVar3[-0xf] = param_5;
              puVar3[-0xe] = param_5;
              puVar3[-0xd] = param_5;
              puVar3[-0xc] = param_5;
              puVar3[-0xb] = param_5;
              puVar3[-10] = param_5;
              puVar3[-9] = param_5;
              puVar3[-8] = param_5;
              puVar3[-7] = param_5;
              puVar3[-6] = param_5;
              puVar3[-5] = param_5;
              puVar3[-4] = param_5;
              puVar3[-3] = param_5;
              puVar3[-2] = param_5;
              puVar3[-1] = param_5;
              *puVar3 = param_5;
              puVar3[1] = param_5;
              puVar3[2] = param_5;
              puVar3[3] = param_5;
              puVar3 = puVar3 + 0x40;
              lVar11 = lVar11 + -0x40;
            } while (lVar11 != 0);
          }
          if (uVar12 == uVar13) {
            return;
          }
          iVar14 = iVar14 - ((uint)uVar12 & 0xfffffff8);
          puVar7 = puVar7 + uVar13;
        }
      }
      do {
        *puVar7 = param_5;
        puVar7 = puVar7 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  else if (param_5 < 0xff000000) {
    uVar4 = param_5 >> 0x18;
    if ((uVar4 != 0) && (param_4 != 0)) {
      PVar1 = this[0x4c];
      do {
        PictureSCALAR::fillLineTransparentImpl
                  (puVar7,param_3,0x100 - uVar4,(param_5 >> 0x10 & 0xff) * uVar4,
                   (param_5 >> 8 & 0xff) * uVar4,(param_5 & 0xff) * uVar4,param_5,(bool)PVar1);
        puVar7 = puVar7 + iVar14;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else if ((param_4 != 0) && (param_3 != 0)) {
    uVar13 = (unsigned long)(param_3 - 1) + 1;
    uVar12 = uVar13 & 0x1fffffff8;
    uVar15 = (unsigned long)(((uint)(uVar12 - 8 >> 3) & 0x1fffffff) + 1 & 7);
    do {
      puVar3 = puVar7;
      iVar5 = param_3;
      if ((uVar13 < 8) || (uVar12 == 0)) {
LAB_1000a6c60:
        do {
          *puVar3 = param_5;
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 1;
        } while (iVar5 != 0);
      }
      else {
        if (uVar15 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          lVar6 = -uVar15;
          do {
            puVar3 = puVar7 + uVar9;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 4;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            uVar9 = uVar9 + 8;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if (0x37 < uVar12 - 8) {
          do {
            puVar3 = puVar7 + uVar9;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 4;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 8;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0xc;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x10;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x14;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x18;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x1c;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x20;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x24;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x28;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x2c;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x30;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x34;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x38;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            puVar3 = puVar7 + uVar9 + 0x3c;
            *puVar3 = param_5;
            puVar3[1] = param_5;
            puVar3[2] = param_5;
            puVar3[3] = param_5;
            uVar9 = uVar9 + 0x40;
          } while (uVar12 != uVar9);
        }
        if (uVar13 != uVar12) {
          puVar3 = puVar7 + uVar12;
          iVar5 = param_3 - (int)uVar12;
          goto LAB_1000a6c60;
        }
      }
      puVar7 = puVar7 + iVar14;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

void Picture::getAnimationHeight() const {
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
uint uVar1;
  long lVar2;
  sbyte sVar3;
  uint uVar4;
  int iVar5;
  unsigned long uVar7;
  sbyte sVar8;
  int iVar9;
  long lVar10;
  unsigned long uVar11;
  int iVar12;
  unsigned long uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int local_78;
  long local_68;
  uint local_60 [4];
  Picture *local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iVar6;
  
  lVar2 = *(long *)(this + 0x68);
  lVar10 = *(long *)(this + 0x70);
  if ((lVar10 != lVar2) && (lVar10 != lVar2)) {
    lVar10 = lVar10 + (~((lVar10 + -4) - lVar2) & 0xfffffffffffffffcU);
    *(long *)(this + 0x70) = lVar10;
  }
  local_68 = *(long *)(this + 0x30);
  if (((local_68 != 0) && (*(int *)(this + 0x14) != 0)) && ((char)*(unsigned long long *)(this + 8) != '\0')
     ) {
    local_78 = (int)((unsigned long)*(unsigned long long *)(this + 8) >> 0x20);
    uVar7 = *(unsigned long *)(this + 0x10);
    uVar1 = *(uint *)(this + 0x38);
    uVar16 = (uint)uVar7;
    if (local_78 == 1) {
      uVar13 = 1;
      if (uVar16 != 0) {
        uVar13 = uVar7 & 0xffffffff;
      }
      iVar18 = (int)(*(uint *)(this + 0x3c) / uVar13);
      uVar4 = uVar1;
    }
    else {
      uVar13 = 1;
      if (uVar16 != 0) {
        uVar13 = uVar7 & 0xffffffff;
      }
      uVar4 = (uint)(uVar1 / uVar13);
      iVar18 = *(int *)(this + 0x3c);
    }
    local_38 = 0;
    iVar19 = 0;
    iVar14 = 0;
    if ((uVar7 >> 0x20 & 2) != 0) {
      iVar19 = *(int *)(this + 0x20);
      iVar14 = *(int *)(this + 0x24);
    }
    local_34 = 0;
    if ((uVar7 >> 0x20 & 1) != 0) {
      local_38 = *(int *)(this + 0x18);
      local_34 = *(int *)(this + 0x1c);
    }
    iVar14 = (uVar4 - iVar19) - iVar14;
    if ((0 < iVar14) && (local_34 = (iVar18 - local_38) - local_34, 0 < local_34)) {
      uVar13 = 1;
      if (1 < uVar16) {
        uVar13 = uVar7 & 0xffffffff;
      }
      local_60[0] = 0;
      uVar7 = lVar10 - lVar2 >> 2;
      local_50 = this;
      if (uVar13 < uVar7 || uVar13 - uVar7 == 0) {
        if ((uVar13 < uVar7) && (lVar2 = lVar2 + uVar13 * 4, lVar10 != lVar2)) {
          *(unsigned long *)(this + 0x70) = (~((lVar10 + -4) - lVar2) & 0xfffffffffffffffcU) + lVar10;
        }
      }
      else {
        // std code
                  ((vector<unsigned_int,// std code
                   ,local_60);
        local_78 = *(int *)(local_50 + 0xc);
        local_68 = *(long *)(local_50 + 0x30);
      }
      lVar2 = *(long *)(this + 0x68);
      local_34 = local_34 + local_38;
      uVar7 = 0;
      local_40 = 0;
      local_3c = 0;
      do {
        *(unsigned int *)(lVar2 + uVar7 * 4) = 0x1ff;
        if (0 < iVar18) {
          iVar5 = 0;
          uVar16 = 0x1ff;
          do {
            sVar8 = 3;
            if (local_34 <= iVar5) {
              sVar8 = 6;
            }
            sVar3 = (local_34 <= iVar5) * '\x03' + 3;
            if (iVar5 < local_38) {
              sVar3 = 0;
              sVar8 = 0;
            }
            if ((uVar16 & 7 << sVar8) == 0) {
              iVar9 = local_34;
              if (iVar5 < local_38) {
                iVar9 = local_38;
              }
              iVar6 = iVar9 + -1;
              if ((local_38 <= iVar5) && (local_34 <= iVar5)) break;
            }
            else {
              uVar15 = 1 << sVar3;
              iVar9 = 0;
              if ((uVar16 >> sVar3 & 1) == 0) {
                iVar9 = 0;
                if ((uVar16 & 2 << sVar3) == 0) {
                  iVar9 = iVar14;
                }
                iVar9 = iVar9 + iVar19;
              }
              iVar6 = iVar5;
              if (iVar9 < (int)uVar4) {
                do {
                  if (0xffffff <
                      *(uint *)(local_68 + (long)local_40 * 4 + (long)(int)(local_3c * uVar1) * 4 +
                                (long)iVar9 * 4 + (long)(int)(iVar5 * uVar1) * 4)) {
                    uVar17 = uVar15;
                    iVar12 = iVar19;
                    if ((iVar19 <= iVar9) &&
                       (uVar17 = uVar15 * 2, iVar12 = iVar14 + iVar19, iVar14 + iVar19 <= iVar9)) {
                      uVar16 = uVar16 & ~(uVar15 << 2);
                      *(uint *)(lVar2 + uVar7 * 4) = uVar16;
                      break;
                    }
                    uVar16 = uVar16 & ~uVar17;
                    *(uint *)(lVar2 + uVar7 * 4) = uVar16;
                    iVar9 = iVar12 + -1;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)uVar4);
              }
            }
            iVar5 = iVar6 + 1;
          } while (iVar5 < iVar18);
        }
        if (local_78 == 1) {
          uVar11 = (unsigned long)*(uint *)(local_50 + 0x10);
          if (*(uint *)(local_50 + 0x10) == 0) {
            uVar11 = 1;
          }
          local_3c = local_3c + (int)(*(uint *)(local_50 + 0x3c) / uVar11);
        }
        else {
          uVar11 = (unsigned long)*(uint *)(local_50 + 0x10);
          if (*(uint *)(local_50 + 0x10) == 0) {
            uVar11 = 1;
          }
          local_40 = local_40 + (int)(*(uint *)(local_50 + 0x38) / uVar11);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar13);
    }
  }
  return;
}

void Picture::invertArea(int, int, int, int) {
unsigned long uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  unsigned long uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  unsigned long uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  unsigned long uVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  
  if (this[0x4d] == (Picture)0x0) {
    if ((param_4 != 0) && (param_3 != 0)) {
      iVar17 = *(int *)(this + 0x38);
      puVar20 = (uint *)((long)((param_2 + *(int *)(this + 100)) * iVar17 +
                               param_1 + *(int *)(this + 0x60)) * 4 + *(long *)(this + 0x30));
      uVar1 = (unsigned long)(param_3 - 1) + 1;
      uVar14 = uVar1 & 0x1fffffff8;
      uVar24 = uVar14 - 8 >> 3;
      do {
        puVar16 = puVar20;
        iVar18 = param_3;
        if ((uVar1 < 8) || (uVar14 == 0)) {
LAB_1000a70e0:
          do {
            *puVar16 = *puVar16 ^ 0xffffff;
            puVar16 = puVar16 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        else {
          if ((uVar24 & 1) == 0) {
            *puVar20 = *puVar20 ^ 0xffffff;
            puVar20[1] = puVar20[1] ^ 0xffffff;
            puVar20[2] = puVar20[2] ^ 0xffffff;
            puVar20[3] = puVar20[3] ^ 0xffffff;
            puVar20[4] = puVar20[4] ^ 0xffffff;
            puVar20[5] = puVar20[5] ^ 0xffffff;
            puVar20[6] = puVar20[6] ^ 0xffffff;
            puVar20[7] = puVar20[7] ^ 0xffffff;
            uVar19 = 8;
          }
          else {
            uVar19 = 0;
          }
          if (uVar24 != 0) {
            do {
              puVar16 = puVar20 + uVar19;
              uVar7 = puVar16[1];
              uVar8 = puVar16[2];
              uVar9 = puVar16[3];
              puVar2 = puVar20 + uVar19 + 4;
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              uVar12 = puVar2[2];
              uVar13 = puVar2[3];
              puVar2 = puVar20 + uVar19;
              *puVar2 = *puVar16 ^ 0xffffff;
              puVar2[1] = uVar7 ^ 0xffffff;
              puVar2[2] = uVar8 ^ 0xffffff;
              puVar2[3] = uVar9 ^ 0xffffff;
              puVar16 = puVar20 + uVar19 + 4;
              *puVar16 = uVar10 ^ 0xffffff;
              puVar16[1] = uVar11 ^ 0xffffff;
              puVar16[2] = uVar12 ^ 0xffffff;
              puVar16[3] = uVar13 ^ 0xffffff;
              puVar16 = puVar20 + uVar19 + 8;
              uVar7 = puVar16[1];
              uVar8 = puVar16[2];
              uVar9 = puVar16[3];
              puVar2 = puVar20 + uVar19 + 0xc;
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              uVar12 = puVar2[2];
              uVar13 = puVar2[3];
              puVar2 = puVar20 + uVar19 + 8;
              *puVar2 = *puVar16 ^ 0xffffff;
              puVar2[1] = uVar7 ^ 0xffffff;
              puVar2[2] = uVar8 ^ 0xffffff;
              puVar2[3] = uVar9 ^ 0xffffff;
              puVar16 = puVar20 + uVar19 + 0xc;
              *puVar16 = uVar10 ^ 0xffffff;
              puVar16[1] = uVar11 ^ 0xffffff;
              puVar16[2] = uVar12 ^ 0xffffff;
              puVar16[3] = uVar13 ^ 0xffffff;
              uVar19 = uVar19 + 0x10;
            } while (uVar14 != uVar19);
          }
          if (uVar1 != uVar14) {
            puVar16 = puVar20 + uVar14;
            iVar18 = param_3 - (int)uVar14;
            goto LAB_1000a70e0;
          }
        }
        puVar20 = puVar20 + (long)(iVar17 - param_3) + (unsigned long)(param_3 - 1) + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else {
    iVar18 = param_3 + param_1;
    iVar17 = param_1;
    if (-1 < param_3) {
      iVar18 = param_1;
      iVar17 = param_3 + param_1;
    }
    iVar23 = param_4 + param_2;
    iVar21 = param_2;
    if (-1 < param_4) {
      iVar23 = param_2;
      iVar21 = param_4 + param_2;
    }
    if ((iVar18 < iVar17) && (iVar23 < iVar21)) {
      iVar3 = *(int *)(this + 0x50);
      iVar4 = *(int *)(this + 0x58);
      if ((iVar3 < iVar4) &&
         ((((iVar5 = *(int *)(this + 0x54), iVar5 < iVar21 &&
            (iVar6 = *(int *)(this + 0x5c), iVar23 < iVar6)) && (iVar3 < iVar17)) &&
          ((iVar18 < iVar4 && (iVar5 < iVar6)))))) {
        if (iVar3 <= iVar18) {
          iVar3 = iVar18;
        }
        if (iVar17 < iVar4) {
          iVar4 = iVar17;
        }
        if (iVar5 <= iVar23) {
          iVar5 = iVar23;
        }
        if (iVar21 < iVar6) {
          iVar6 = iVar21;
        }
        if ((iVar3 < iVar4) && (iVar5 < iVar6)) {
          bVar25 = iVar18 == iVar3;
          bVar26 = iVar23 == iVar5;
          bVar27 = iVar17 == iVar4;
          bVar28 = iVar21 == iVar6;
          iVar15 = iVar3;
          if (bVar28 && (bVar27 && (bVar26 && bVar25))) {
            iVar15 = iVar18;
          }
          if (!bVar28 || (!bVar27 || (!bVar26 || !bVar25))) {
            iVar17 = iVar4;
          }
          iVar22 = iVar5;
          if (bVar28 && (bVar27 && (bVar26 && bVar25))) {
            iVar22 = iVar23;
          }
          if (!bVar28 || (!bVar27 || (!bVar26 || !bVar25))) {
            iVar21 = iVar6;
          }
          if (iVar18 == param_1) {
            iVar17 = iVar3;
            iVar15 = iVar4;
          }
          if (iVar23 == param_2) {
            iVar21 = iVar5;
            iVar22 = iVar6;
          }
          iVar22 = iVar22 - iVar21;
          if ((iVar22 != 0) && (iVar15 = iVar15 - iVar17, iVar15 != 0)) {
            iVar18 = *(int *)(this + 0x38);
            puVar20 = (uint *)((long)((iVar21 + *(int *)(this + 100)) * iVar18 +
                                     iVar17 + *(int *)(this + 0x60)) * 4 + *(long *)(this + 0x30));
            uVar1 = (unsigned long)(iVar15 - 1) + 1;
            uVar14 = uVar1 & 0x1fffffff8;
            uVar24 = uVar14 - 8 >> 3;
            do {
              puVar16 = puVar20;
              iVar17 = iVar15;
              if ((uVar1 < 8) || (uVar14 == 0)) {
LAB_1000a6fd0:
                do {
                  *puVar16 = *puVar16 ^ 0xffffff;
                  puVar16 = puVar16 + 1;
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
              else {
                if ((uVar24 & 1) == 0) {
                  *puVar20 = *puVar20 ^ 0xffffff;
                  puVar20[1] = puVar20[1] ^ 0xffffff;
                  puVar20[2] = puVar20[2] ^ 0xffffff;
                  puVar20[3] = puVar20[3] ^ 0xffffff;
                  puVar20[4] = puVar20[4] ^ 0xffffff;
                  puVar20[5] = puVar20[5] ^ 0xffffff;
                  puVar20[6] = puVar20[6] ^ 0xffffff;
                  puVar20[7] = puVar20[7] ^ 0xffffff;
                  uVar19 = 8;
                }
                else {
                  uVar19 = 0;
                }
                if (uVar24 != 0) {
                  do {
                    puVar16 = puVar20 + uVar19;
                    uVar7 = puVar16[1];
                    uVar8 = puVar16[2];
                    uVar9 = puVar16[3];
                    puVar2 = puVar20 + uVar19 + 4;
                    uVar10 = *puVar2;
                    uVar11 = puVar2[1];
                    uVar12 = puVar2[2];
                    uVar13 = puVar2[3];
                    puVar2 = puVar20 + uVar19;
                    *puVar2 = *puVar16 ^ 0xffffff;
                    puVar2[1] = uVar7 ^ 0xffffff;
                    puVar2[2] = uVar8 ^ 0xffffff;
                    puVar2[3] = uVar9 ^ 0xffffff;
                    puVar16 = puVar20 + uVar19 + 4;
                    *puVar16 = uVar10 ^ 0xffffff;
                    puVar16[1] = uVar11 ^ 0xffffff;
                    puVar16[2] = uVar12 ^ 0xffffff;
                    puVar16[3] = uVar13 ^ 0xffffff;
                    puVar16 = puVar20 + uVar19 + 8;
                    uVar7 = puVar16[1];
                    uVar8 = puVar16[2];
                    uVar9 = puVar16[3];
                    puVar2 = puVar20 + uVar19 + 0xc;
                    uVar10 = *puVar2;
                    uVar11 = puVar2[1];
                    uVar12 = puVar2[2];
                    uVar13 = puVar2[3];
                    puVar2 = puVar20 + uVar19 + 8;
                    *puVar2 = *puVar16 ^ 0xffffff;
                    puVar2[1] = uVar7 ^ 0xffffff;
                    puVar2[2] = uVar8 ^ 0xffffff;
                    puVar2[3] = uVar9 ^ 0xffffff;
                    puVar16 = puVar20 + uVar19 + 0xc;
                    *puVar16 = uVar10 ^ 0xffffff;
                    puVar16[1] = uVar11 ^ 0xffffff;
                    puVar16[2] = uVar12 ^ 0xffffff;
                    puVar16[3] = uVar13 ^ 0xffffff;
                    uVar19 = uVar19 + 0x10;
                  } while (uVar14 != uVar19);
                }
                if (uVar1 != uVar14) {
                  puVar16 = puVar20 + uVar14;
                  iVar17 = iVar15 - (int)uVar14;
                  goto LAB_1000a6fd0;
                }
              }
              puVar20 = puVar20 + (long)(iVar18 - iVar15) + (unsigned long)(iVar15 - 1) + 1;
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
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
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(void ***)this = &PTR__Picture_10022a390;
  *(unsigned long long *)(this + 0x46) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  
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
      *(unsigned int *)(this + 0x40) = 0;
      *(unsigned long long *)(this + 0x38) = 0;
      *(unsigned long long *)(this + 0x30) = 0;
      *(unsigned long long *)(this + 0x28) = 0;
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
  *(unsigned int *)(this + 0x50) = 0;
  *(unsigned int *)(this + 0x54) = 0;
  *(unsigned int *)(this + 0x58) = *(unsigned int *)(this + 0x38);
  *(unsigned int *)(this + 0x5c) = *(unsigned int *)(this + 0x3c);
  return;
}

void Picture::setPixelUC(int, int, unsigned int) {
char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 < 0xff000000) {
    cVar1 = getUseLegacyAlphaCompositing(this);
    if (cVar1 == '\0') {
      lVar6 = (long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) + param_1) +
              (long)*(int *)(this + 0x60);
      uVar7 = param_3 >> 0x18;
      uVar4 = *(uint *)(*(long *)(this + 0x30) + lVar6 * 4);
      iVar2 = (uVar7 ^ 0xff) * (uVar4 >> 0x18);
      uVar5 = 0;
      uVar3 = (iVar2 + 0x7fU) / 0xff + uVar7;
      if (uVar3 != 0) {
        uVar9 = uVar3 >> 1;
        uVar8 = (((uVar4 >> 0x10 & 0xff) * iVar2 + 0x7f) / 0xff + (param_3 >> 0x10 & 0xff) * uVar7 +
                uVar9) / uVar3;
        uVar5 = (((uVar4 >> 8 & 0xff) * iVar2 + 0x7f) / 0xff + (param_3 >> 8 & 0xff) * uVar7 + uVar9
                ) / uVar3;
        uVar4 = (((uVar4 & 0xff) * iVar2 + 0x7f) / 0xff + (param_3 & 0xff) * uVar7 + uVar9) / uVar3;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        if (0xfe < uVar8) {
          uVar8 = 0xff;
        }
        if (0xfe < uVar5) {
          uVar5 = 0xff;
        }
        uVar7 = 0xff;
        if (uVar4 < 0xff) {
          uVar7 = uVar4;
        }
        uVar5 = uVar7 | uVar5 << 8 | uVar8 << 0x10 | uVar3 << 0x18;
      }
      *(uint *)(*(long *)(this + 0x30) + lVar6 * 4) = uVar5;
    }
    else {
      uVar4 = param_3 >> 0x18;
      if (uVar4 != 0) {
        iVar2 = 0x100 - uVar4;
        lVar6 = (long)((param_2 + *(int *)(this + 100)) * *(int *)(this + 0x38) + param_1) +
                (long)*(int *)(this + 0x60);
        uVar5 = *(uint *)(*(long *)(this + 0x30) + lVar6 * 4);
        *(uint *)(*(long *)(this + 0x30) + lVar6 * 4) =
             ((uVar5 & 0xff) * iVar2 + (param_3 & 0xff) * uVar4 >> 8) +
             ((uVar5 >> 8 & 0xff) * iVar2 + (param_3 >> 8 & 0xff) * uVar4 & 0x3ff00) +
             ((uVar5 >> 0x10 & 0xff) * iVar2 + (param_3 >> 0x10 & 0xff) * uVar4 & 0x3ff00) * 0x100;
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

void Picture::setSize(int, int, bool) {
char cVar1;
  unsigned long long uVar2;
  void3 in_register_00000011;
  unsigned int uVar3;
  unsigned int in_register_0000003c;
  Picture *this;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  this = (Picture *)CONCAT44(in_register_0000003c,param_1);
  uVar3 = CONCAT31(in_register_00000011,param_3);
  cVar1 = (**(code **)(*(long *)this + 0x78))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    *(int *)(this + 0x38) = param_2;
    *(unsigned int *)(this + 0x3c) = uVar3;
    if (this[0x4d] == (Picture)0x0) {
      *(unsigned long long *)(this + 0x60) = 0;
    }
    else {
      local_38 = (int)*(unsigned long long *)(this + 0x50);
      iStack_34 = (int)((unsigned long)*(unsigned long long *)(this + 0x50) >> 0x20);
      iStack_30 = (int)*(unsigned long long *)(this + 0x58);
      iStack_2c = (int)((unsigned long)*(unsigned long long *)(this + 0x58) >> 0x20);
      _local_38 = CONCAT44(*(int *)(this + 100) + iStack_34,*(int *)(this + 0x60) + local_38);
      _iStack_30 = CONCAT44(*(int *)(this + 100) + iStack_2c,*(int *)(this + 0x60) + iStack_30);
      *(unsigned long long *)(this + 0x60) = 0;
      setClipRect(this,(Rect *)&local_38);
      param_2 = *(int *)(this + 0x38);
      uVar3 = *(unsigned int *)(this + 0x3c);
    }
    this[0x4d] = (Picture)0x0;
    *(unsigned int *)(this + 0x50) = 0;
    *(unsigned int *)(this + 0x54) = 0;
    *(int *)(this + 0x58) = param_2;
    *(unsigned int *)(this + 0x5c) = uVar3;
    uVar2 = 1;
  }
  return uVar2;
}

void Picture::setUseLegacyAlphaCompositing(bool param_1) {
}

Picture::~Picture() {
void *pvVar1;
  void *pvVar2;
  
  *(void ***)this = &PTR__Picture_10022a390;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    delete__(*(void **)(this + 0x28));
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x70);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x70) =
           (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  delete(this);
  return;
}
}
