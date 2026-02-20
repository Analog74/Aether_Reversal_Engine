#include <ni/controller_editor/HttpHeader.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::internal {

HttpHeader::HttpHeader() {
*(void ***)this = &PTR__HttpHeader_101b82e28;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(void2 *)(this + 8) = 0;
  *(void2 *)(this + 0x20) = 0;
  *(unsigned int *)(this + 0x38) = 0xffffffff;
  this[0x3c] = (HttpHeader)0x1;
  *(unsigned int *)(this + 0x48) = 1;
  
}

void HttpHeader::Initialize() {
HttpHeader HVar1;
  
  *(unsigned long long *)(this + 0x40) = 0;
  // FIXED: if ((byte)this[8] & 1) == 0) {
    *(void2 *)(this + 8) = 0;
    HVar1 = this[0x20];
  }
  else {
    **(unsigned char **)(this + 0x18) = 0;
    *(unsigned long long *)(this + 0x10) = 0;
    HVar1 = this[0x20];
  }
  if (((byte)HVar1 & 1) == 0) {
    *(void2 *)(this + 0x20) = 0;
  }
  else {
    **(unsigned char **)(this + 0x30) = 0;
    *(unsigned long long *)(this + 0x28) = 0;
  }
  *(unsigned int *)(this + 0x38) = 0xffffffff;
  this[0x3c] = (HttpHeader)0x1;
  *(unsigned int *)(this + 0x48) = 1;
  return;
}

void HttpHeader::ProcessHeaderData(char const*, unsigned long, bool) {
char *pcVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  void *pvVar4;
  long lVar5;
  void7 in_register_00000009;
  unsigned long uVar6;
  long lVar7;
  unsigned long uVar8;
  unsigned long long local_58;
  unsigned long local_50;
  void *local_48;
  void *local_40;
  uint local_34;
  
  uVar2 = *(unsigned long *)(this + 0x40);
  if (uVar2 <= param_2) {
    if (*(uint *)(this + 0x48) != 1) {
      return (unsigned long)*(uint *)(this + 0x48);
    }
    uVar6 = 0(in_register_00000009,param_3) & 0xffffffff;
    uVar3 = local_58;
    while (param_2 != uVar2) {
      pcVar1 = param_1 + uVar2;
      lVar7 = 0;
      while (pcVar1[lVar7] != '\n') {
        lVar7 = lVar7 + 1;
        if (param_2 - uVar2 == lVar7) return;
      }
      local_34 = (uint)uVar6;
      local_58._1_7_ = (uint7)(uVar3 >> 8);
      if (lVar7 == 0) {
        local_58 = (unsigned long)local_58._1_7_ << 8;
        local_58._0_2_ = (ushort)(byte)local_58;
        lVar5 = *(long *)this;
        if (*(long *)(this + 0x40) != 0) return;
        uVar3 = (**(code **)(lVar5 + 0x18))(this,&local_58);
      }
      else {
        uVar6 = (unsigned long)(pcVar1[lVar7 + -1] == '\r');
        uVar8 = lVar7 - uVar6;
        local_58 = uVar3;
        if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (uVar8 < 0x17) {
          local_58 = 0(local_58._1_7_,((char)lVar7 - (pcVar1[lVar7 + -1] == '\r')) * '\x02');
          pvVar4 = (void *)((long)&local_58 + 1);
          if (uVar8 == 0) return;
        }
        else {
          local_40 = (void *)((lVar7 - uVar6) + 0x10 & 0xfffffffffffffff0);
          pvVar4 = new char[(unsigned long]local_40);
          local_58 = (unsigned long)local_40 | 1;
          local_50 = uVar8;
          local_48 = pvVar4;
        }
        local_40 = pvVar4;
        memcpy(pvVar4,pcVar1,uVar8);
        *(unsigned char *)((long)local_40 + uVar8) = 0;
        lVar5 = *(long *)this;
        if (*(long *)(this + 0x40) == 0) return;
        uVar3 = (**(code **)(lVar5 + 0x20))(this,&local_58);
      }
      uVar6 = (unsigned long)local_34;
      *(int *)(this + 0x48) = (int)uVar3;
      *(unsigned long *)(this + 0x40) = uVar2 + lVar7 + 1;
      if ((local_58 & 1) != 0) {
        delete(local_48);
        uVar3 = (unsigned long)*(uint *)(this + 0x48);
      }
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar3 = local_58;
      uVar2 = *(unsigned long *)(this + 0x40);
    }
    if ((char)uVar6 == '\0') {
      return 1;
    }
  }
  *(unsigned int *)(this + 0x48) = 2;
  return 2;
}

HttpHeader::~HttpHeader() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
