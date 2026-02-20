#include <ni/controller_editor/FX2ERP.hpp>
namespace NI::NHL2::SERVER {

void FX2ERP::hasChanged(unsigned char, unsigned char) {
FX2ERP FVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  unsigned int uVar6;
  unsigned long uVar7;
  int iVar8;
  int iVar9;
  unsigned char auVar10 [16];
  
  if ((this[0x48] == (FX2ERP)0x0) && (this[0x49] == (FX2ERP)0x0)) {
    this[0x48] = (FX2ERP)param_1;
    this[0x4a] = (FX2ERP)param_1;
    this[0x49] = (FX2ERP)param_2;
    this[0x4b] = (FX2ERP)param_2;
    return 0;
  }
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + (int)(long)(1000.0 / *(double *)(this + 0x20));
  auVar10 = pblendw((unsigned char  [16])0x0,ZEXT216(*(ushort *)(this + 0x4a)),1);
  auVar10 = psadbw(ZEXT216(CONCAT11(param_2,param_1)),auVar10);
  iVar9 = auVar10._0_4_;
  if (iVar9 == 0) {
    return 0;
  }
  bVar4 = (**(code **)(**(long **)this + 600))();
  uVar2 = *(uint *)(this + 0x4c);
  uVar5 = ((uint)bVar4 - (uint)(uVar2 < 5000)) - (uint)(uVar2 < 1000);
  uVar7 = (unsigned long)uVar5;
  if (uVar2 < 10000) {
    if (((byte)this[0x4a] < param_1) && (*(int *)(this + 0x58) == 1)) {
      uVar7 = (unsigned long)(uVar5 - 1);
    }
    else if (param_1 < (byte)this[0x4a]) {
      uVar7 = (unsigned long)(uVar5 - (*(int *)(this + 0x58) == -1));
    }
    if (((byte)this[0x4b] < param_2) && (*(int *)(this + 0x5c) == 1)) {
      uVar7 = (unsigned long)((int)uVar7 - 1);
    }
    else if (param_2 < (byte)this[0x4b]) {
      uVar7 = (unsigned long)((int)uVar7 - (uint)(*(int *)(this + 0x5c) == -1));
    }
  }
  if (param_1 < 0x6e) {
    bVar3 = true;
    if (param_2 < 0x97) {
      if (0x6d < param_2) goto LAB_10000ff59;
LAB_10000fef7:
      bVar3 = false;
    }
  }
  else {
    if (param_1 < 0x97) goto LAB_10000ff59;
    if (0x96 < param_2) goto LAB_10000fef7;
    bVar3 = true;
    if (0x6d < param_2) goto LAB_10000ff59;
  }
  FVar1 = this[0x4a];
  if ((((byte)FVar1 < param_1) && ((byte)this[0x4b] < param_2)) ||
     ((param_1 < (byte)FVar1 && (param_2 < (byte)this[0x4b])))) {
    if (!bVar3) {
LAB_10000ff56:
      uVar7 = (unsigned long)((int)uVar7 + 3);
      goto LAB_10000ff59;
    }
  }
  else {
    if (((param_1 <= (byte)FVar1) || ((byte)this[0x4b] <= param_2)) &&
       (((byte)FVar1 <= param_1 || (param_2 <= (byte)this[0x4b])))) goto LAB_10000ff59;
    if (bVar3) goto LAB_10000ff56;
  }
  uVar7 = (unsigned long)((int)uVar7 - 1);
LAB_10000ff59:
  if ((byte)(param_1 + 1) < 2) {
    *(unsigned int *)(this + 0x50) = 0;
    uVar7 = (unsigned long)((int)uVar7 - 1);
  }
  if ((byte)(param_2 + 1) < 2) {
    *(unsigned int *)(this + 0x54) = 0;
    uVar7 = (unsigned long)((int)uVar7 - 1);
  }
  if ((byte)this[0x48] < param_1) {
    uVar7 = (unsigned long)(uint)((int)uVar7 - *(int *)(this + 0x50));
    *(unsigned int *)(this + 0x50) = 1;
  }
  else if (param_1 < (byte)this[0x48]) {
    uVar7 = (unsigned long)(uint)((int)uVar7 + *(int *)(this + 0x50));
    *(unsigned int *)(this + 0x50) = 0xffffffff;
  }
  if ((byte)this[0x49] < param_2) {
    uVar7 = (unsigned long)(uint)((int)uVar7 - *(int *)(this + 0x54));
    *(unsigned int *)(this + 0x54) = 1;
  }
  else if (param_2 < (byte)this[0x49]) {
    uVar7 = (unsigned long)(uint)((int)uVar7 + *(int *)(this + 0x54));
    *(unsigned int *)(this + 0x54) = 0xffffffff;
  }
  iVar8 = (int)uVar7 + -3;
  if (this[0x2c] == (FX2ERP)0x0) {
    iVar8 = (int)uVar7;
  }
  if (iVar9 < iVar8) {
    this[0x48] = (FX2ERP)param_1;
    this[0x49] = (FX2ERP)param_2;
  }
  else {
    uVar6 = 1;
    if (((byte)this[0x4a] < param_1) || (uVar6 = 0xffffffff, param_1 < (byte)this[0x4a])) {
      *(unsigned int *)(this + 0x58) = uVar6;
    }
    uVar7 = 1;
    if (((byte)this[0x4b] < param_2) || (uVar7 = 0xffffffff, param_2 < (byte)this[0x4b])) {
      *(int *)(this + 0x5c) = (int)uVar7;
    }
    this[0x4a] = (FX2ERP)param_1;
    this[0x48] = (FX2ERP)param_1;
    this[0x4b] = (FX2ERP)param_2;
    this[0x49] = (FX2ERP)param_2;
    *(unsigned int *)(this + 0x4c) = 0;
  }
  return 0((int7)(uVar7 >> 8),iVar8 <= iVar9);
}

void FX2ERP::setERPPeaks(short, short) {
*(short *)(this + 0x18) = param_1;
  *(short *)(this + 0x1a) = param_2;
  return;
}

void FX2ERP::setResolution(unsigned int) {
uint uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = param_1;
  }
  uVar2 = 1000;
  if (uVar1 < 1000) {
    uVar2 = uVar1;
  }
  *(uint *)(this + 0xc) = uVar2;
  *(double *)(this + 0x10) = 1.0 / (double)uVar2;
  return;
}

void FX2ERP::setTouchSensitivity(float param_1) {
}

void FX2ERP::setTouchThresholdUC(unsigned char) {
FX2ERP FVar1;
  
  FVar1 = this[0x1c];
  if (FVar1 != (FX2ERP)param_1) {
    this[0x1c] = (FX2ERP)param_1;
  }
  return FVar1 != (FX2ERP)param_1;
}

FX2ERP::~FX2ERP() {
return;
}
}
