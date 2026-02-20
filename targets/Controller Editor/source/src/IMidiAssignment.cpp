#include <ni/controller_editor/IMidiAssignment.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Assignment::setMidiType(NI::NHL2 {

void IMidiAssignment::eMidiRemoteType) {
uint uVar1;
  uint uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned long long *puVar7;
  unsigned long long uVar8;
  unsigned long long *puVar9;
  
  iVar4 = *(int *)(this + 0x84);
  if (iVar4 == param_2) {
    return;
  }
  if (iVar4 - 0xfaU < 2) {
    *(unsigned int *)(this + 0x7c) = 0;
    if (param_2 != 0xf2) return;
    uVar3 = 0;
    uVar5 = 0;
    *(unsigned int *)(this + 0x8c) = uVar3;
    *(unsigned int *)(this + 0x90) = uVar5;
    *(unsigned int *)(this + 0x94) = 0x3fff;
    *(unsigned int *)(this + 0x78) = 0;
    *(int *)(this + 0x84) = param_2;
    this[0xa3] = (Assignment)0x0;
    iVar4 = *(int *)(this + 0x8c);
    if (iVar4 < 0) return;
    if (((param_2 - 0x12U < 2) || (param_2 == 0xf2)) || (param_2 == 0xe0)) {
      if (0x3fff < iVar4) {
        *(unsigned int *)(this + 0x8c) = 0x3fff;
      }
    }
    else if(2 param_2, 2 param_2, 2 param_2, 2 param_2, 0x7f < iVar4 {
      *(unsigned int *(this + 0x8c = 0x7f;
    }
  }
  else {
    if (iVar4 == 0xfc {
      *(unsigned int *)(this + 0x7c) = 0x7f;
    }
    else {
      if (iVar4 != 0xe0) return;
      *(unsigned long long *)(this + 0x8c) = 0;
    }
    if (param_2 == 0xf2) return;
    uVar3 = 0;
    if (param_2 == 0xe0) {
      if ((*(int *)(this + 0x60) != 0) || (uVar5 = 0x2000, ((byte)this[0x70] & 0x10) != 0)) {
        uVar3 = 0x2000;
        uVar5 = 0x2000;
      }
      return;
    }
    *(int *)(this + 0x84) = param_2;
    this[0xa3] = (Assignment)0x0;
    if (param_2 != 0x12) {
      if (param_2 == 0x11) {
        this[0xa1] = (Assignment)0x10;
        iVar4 = *(int *)(this + 0x8c);
        goto joined_r0x0001002d3f0c;
      }
      if (param_2 == 0x10) return;
      return;
    }
    this[0xa1] = (Assignment)0x0;
    iVar4 = *(int *)(this + 0x8c);
joined_r0x0001002d3f0c:
    if (-1 < iVar4) return;
    *(unsigned int *)(this + 0x8c) = 0;
  }
  iVar4 = *(int *)(this + 0x94);
  if (iVar4 < 0) {
    *(unsigned int *)(this + 0x94) = 0;
  }
  else if(2 param_2, 2 param_2, 2 param_2, 2 param_2, ((param_2 - 0x12U < 2 || (param_2 == 0xf2 || (param_2 == 0xe0) {
    if (0x3fff < iVar4) {
      *(unsigned int *)(this + 0x94) = 0x3fff;
    }
  }
  else if(2 param_2, 2 param_2, 2 param_2, 2 param_2, 0x7f < iVar4 {
    *(unsigned int *(this + 0x94 = 0x7f;
  }
  iVar4 = *(int *(this + 0x90);
  if (iVar4 < 0) {
    *(unsigned int *)(this + 0x90) = 0;
  }
  else if(2 param_2, 2 param_2, 2 param_2, 2 param_2, ((param_2 - 0x12U < 2 || (param_2 == 0xf2 || (param_2 == 0xe0) {
    if (0x3fff < iVar4) {
      *(unsigned int *)(this + 0x90) = 0x3fff;
    }
  }
  else if(2 param_2, 2 param_2, 2 param_2, 2 param_2, 0x7f < iVar4 {
    *(unsigned int *(this + 0x90 = 0x7f;
  }
  iVar4 = -0x7f;
  if (param_2 == 0xf2 || param_2 == 0xe0 {
    iVar4 = -0x3fff;
  }
  iVar6 = 0x7f;
  if (param_2 == 0xf2 || param_2 == 0xe0) {
    iVar6 = 0x3fff;
  }
  if (iVar4 <= *(int *)(this + 0x98)) {
    iVar4 = *(int *)(this + 0x98);
  }
  if (iVar6 < iVar4) {
    iVar4 = iVar6;
  }
  *(int *)(this + 0x98) = iVar4;
  if (param_2 - 0x10U < 5) {
    setExternalMidiValue(this,*(int *)(this + 0x80));
    uVar1 = *(uint *)(this + 0x60);
  }
  else {
    uVar1 = *(uint *)(this + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      if (*(int *)(this + (unsigned long)((uVar1 & 0xfffffffe) != 2) * 8) - 1U < 2) return;
    }
    else if(2 param_2, 2 param_2, 2 param_2, 2 param_2, (uVar1 == 0 &&
            (((*(uint *(this + 0x70 & 8 != 0 ||
             (((*(uint *)(this + 0x70) & 2) != 0 && (*(int *)(this + 4) == 1))))))
    return;
    *(unsigned int *)(this + 0x80) = 0;
  }
  if ((uVar1 < 6) && ((0x2cU >> (uVar1 & 0x1f) & 1) != 0)) {
    iVar4 = *(int *)(this + 0x84);
    if (iVar4 < 0xfa) {
      if (iVar4 != 0x10) {
        if (iVar4 == 0x90) {
          if ((*(uint *)(this + (unsigned long)((uVar1 & 0xfffffffe) != 2) * 8) | 2) == 2)
          return;
          uVar8 = 2;
        }
        else {
          if ((iVar4 != 0xe0) || (*(int *)(this + (unsigned long)((uVar1 & 0xfffffffe) != 2) * 8) != 3))
          return;
          uVar8 = 0;
        }
        setButtonBehavior(this,uVar8,1);
        return;
      }
      uVar8 = 2;
    }
    else {
      if (2 < iVar4 - 0xfaU) return;
      uVar8 = 1;
    }
    setButtonBehavior(this,uVar8,1);
    uVar1 = *(uint *)(this + 0x60);
    if (((uVar1 & 0xfffffffe) == 2) || (uVar2 = *(uint *)(this + 0x70), (uVar2 & 0x21) == 0x21)) {
      *(unsigned int *)(this + 0xc) = 0;
    }
    else if(2 param_2, 2 param_2, 2 param_2, 2 param_2, uVar1 - 5 < 2 {
      *(unsigned int *(this + 0x14 = 0;
    }
    else if(2 param_2, 2 param_2, 2 param_2, (uVar1 == 0 &&
            (((uVar2 & 8 != 0 || (((uVar2 & 2 != 0 && (*(int *(this + 4) == 1)))))) {
      this[0x14] = (Assignment)((byte)this[0x14] & 0xfe);
    }
  }
  if (((byte)this[0x48] & 1) == 0) {
    *(void2 *)(this + 0x48) = 0;
    puVar7 = *(unsigned long long **)(this + 0x18);
    puVar9 = *(unsigned long long **)(this + 0x20);
    if (puVar7 == puVar9) {
      return;
    }
  }
  else {
    **(unsigned char **)(this + 0x58) = 0;
    *(unsigned long long *)(this + 0x50) = 0;
    puVar7 = *(unsigned long long **)(this + 0x18);
    puVar9 = *(unsigned long long **)(this + 0x20);
    if (puVar7 == puVar9) {
      return;
    }
  }
  do {
    setMidiType((Assignment *)*puVar7,param_2);
    puVar7 = puVar7 + 1;
  } while (puVar9 != puVar7);
  return;
}
}
