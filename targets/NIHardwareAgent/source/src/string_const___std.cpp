#include <ni/controller_editor/string_const___std.hpp>
namespace NI::NHL2::MsgDeviceConnect::setInOutPortNames(std {

void string const&, std::string const&) {
string sVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  MsgDeviceConnect *pMVar5;
  string *psVar6;
  unsigned long uVar7;
  unsigned long uVar8;
  unsigned long uVar9;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar8 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar8 = *(unsigned long *)(param_1 + 8);
  }
  if (uVar8 != 0) {
    if (((byte)*param_2 & 1) == 0) {
      if ((byte)*param_2 >> 1 == 0) goto LAB_1001cf7a8;
    }
    else if (*(long *)(param_2 + 8) == 0) goto LAB_1001cf7a8;
    uVar2 = (int)uVar8 + 1;
    uVar8 = 0x200;
    if (uVar2 < 0x200) {
      uVar8 = (unsigned long)uVar2;
    }
    *(int *)(this + 0x1c) = (int)uVar8;
    if (((byte)*param_1 & 1) == 0) {
      psVar6 = param_1 + 1;
    }
    else {
      psVar6 = *(string **)(param_1 + 0x10);
    }
    sVar1 = *psVar6;
    pMVar5 = this + 0x20;
    if (sVar1 != (string)0x0) {
      uVar9 = 1;
      if (uVar8 != 0) {
        uVar9 = uVar8;
      }
      lVar4 = 0;
      do {
        *(string *)(this + lVar4 + 0x20) = sVar1;
        if (uVar9 - 1 == lVar4) break;
        sVar1 = psVar6[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (sVar1 != (string)0x0);
      pMVar5 = this + lVar4 + 0x20;
    }
    *pMVar5 = (MsgDeviceConnect)0x0;
    uVar2 = *(uint *)(this + 0x1c);
    uVar8 = (unsigned long)uVar2;
    if (((byte)*param_2 & 1) == 0) {
      uVar3 = (uint)((byte)*param_2 >> 1);
    }
    else {
      uVar3 = *(uint *)(param_2 + 8);
    }
    uVar9 = 0x1fc;
    if (uVar3 + 1 < 0x1fc) {
      uVar9 = (unsigned long)(uVar3 + 1);
    }
    *(int *)(this + uVar8 + 0x20) = (int)uVar9;
    if (((byte)*param_2 & 1) == 0) {
      psVar6 = param_2 + 1;
      sVar1 = *psVar6;
    }
    else {
      psVar6 = *(string **)(param_2 + 0x10);
      sVar1 = *psVar6;
    }
    if (sVar1 == (string)0x0) {
      pMVar5 = this + 0x20 + uVar8 + 4;
    }
    else {
      uVar7 = 1;
      if (uVar9 != 0) {
        uVar7 = uVar9;
      }
      lVar4 = 0;
      do {
        *(string *)(this + lVar4 + uVar8 + 0x24) = sVar1;
        if (uVar7 - 1 == lVar4) break;
        sVar1 = psVar6[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (sVar1 != (string)0x0);
      pMVar5 = this + lVar4 + uVar8 + 0x24;
    }
    *pMVar5 = (MsgDeviceConnect)0x0;
    *(unsigned int *)(this + 0x18) = 0x74727565;
    *(unsigned int *)(this + 4) = 0x18;
    *(uint *)(this + 8) = uVar2 + 0x10 + (int)uVar9;
    return;
  }
LAB_1001cf7a8:
  this[0x20] = (MsgDeviceConnect)0x0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned int *)(this + 4) = 0x18;
  *(unsigned int *)(this + 8) = 0xc;
  return;
}
}
