#include <ni/controller_editor/FileName.hpp>
namespace NI::GP::FileName::setPath(std::string const&, NI::GP {

void FileName::eWithVolume) {
byte bVar1;
  unsigned long uVar2;
  unsigned long *puVar3;
  unsigned char *puVar4;
  FileName *pFVar5;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long local_58;
  unsigned long uStack_50;
  unsigned char *local_48;
  unsigned long long local_38;
  unsigned long uStack_30;
  unsigned char *local_28;
  
  if ((*(int *)(this + 0x98) == 3) || (*(int *)(this + 0x98) == 0)) {
    *(unsigned int *)(this + 0x98) = 2;
  }
  // std code
  uVar2 = local_38 >> 1 & 0x7f;
  if ((local_38 & 1) != 0) {
    uVar2 = uStack_30;
  }
  if (uVar2 != 0) {
    puVar4 = (unsigned char *)((long)&local_38 + 1);
    if ((local_38 & 1) != 0) {
      puVar4 = local_28;
    }
    if (puVar4[uVar2 - 1] != ':') {
      // std code
    }
  }
  if (param_3 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = (unsigned char *)0x0;
    bVar1 = (byte)this[0x18] & 1;
    pFVar5 = this + 0x19;
    if (bVar1 != 0) {
      pFVar5 = *(FileName **)(this + 0x28);
    }
    uVar2 = (unsigned long)((byte)this[0x18] >> 1);
    if (bVar1 != 0) {
      uVar2 = *(unsigned long *)(this + 0x20);
    }
    // std code
    puVar4 = local_28;
    if ((local_38 & 1) == 0) {
      puVar4 = (unsigned char *)((long)&local_38 + 1);
    }
    // std code
    if ((local_38 & 1) == 0) {
      local_38 = local_38 & 0xffffffffffff0000;
    }
    else {
      *local_28 = 0;
      uStack_30 = 0;
    }
    // std code
    local_28 = local_48;
    local_38 = local_58;
    uStack_30 = uStack_50;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = (unsigned char *)0x0;
    // std code
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uVar2 = local_38 >> 1 & 0x7f;
  if ((local_38 & 1) != 0) {
    uVar2 = uStack_30;
  }
  puVar4 = (unsigned char *)((long)&local_38 + 1);
  if ((local_38 & 1) != 0) {
    puVar4 = local_28;
  }
  // std code
  pFVar5 = this + 0x49;
  if (((byte)this[0x48] & 1) != 0) {
    pFVar5 = *(FileName **)(this + 0x58);
  }
  // std code
  pFVar5 = this + 0x61;
  if (((byte)this[0x60] & 1) != 0) {
    pFVar5 = *(FileName **)(this + 0x70);
  }
  puVar3 = (unsigned long *)// std code
  local_48 = (unsigned char *)puVar3[2];
  local_58 = *puVar3;
  uStack_50 = puVar3[1];
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  if (((byte)*this & 1) == 0) {
    *(void2 *)this = 0;
  }
  else {
    **(unsigned char **)(this + 0x10) = 0;
    *(unsigned long long *)(this + 8) = 0;
  }
  // std code
  *(unsigned char **)(this + 0x10) = local_48;
  *(unsigned long *)(this + 8) = uStack_50;
  *(unsigned long *)this = local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (unsigned char *)0x0;
  // std code
  // std code
  init(this,true);
  // std code
  return;
}
}
