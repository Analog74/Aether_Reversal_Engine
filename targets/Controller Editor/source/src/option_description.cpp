#include <ni/controller_editor/option_description.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

void option_description::canonical_display_name(int) const {
string *psVar1;
  int in_EDX;
  long in_RSI;
  char *pcVar2;
  string *psVar3;
  unsigned int in_register_0000003c;
  string *this;
  ushort local_30;
  void5 uStack_2d;
  unsigned long long uStack_28;
  unsigned long long local_20;
  
  this = (string *)CONCAT44(in_register_0000003c,param_1);
  psVar1 = *(string **)(in_RSI + 0x20);
  if (psVar1 != *(string **)(in_RSI + 0x28)) {
    if (in_EDX == 0x1000) {
      pcVar2 = "-";
      // std code
      return this;
    }
    if (in_EDX == 1) {
      pcVar2 = "--";
      return;
    }
  }
  if ((*(byte *)(in_RSI + 8) & 1) == 0) {
    if (*(byte *)(in_RSI + 8) >> 1 != 2) return;
  }
  else if (*(long *)(in_RSI + 0x10) != 2) return;
  if (in_EDX == 4) {
    local_30 = 0x2d02;
    // std code
  }
  else {
    if (in_EDX != 8) {
      psVar3 = (string *)(in_RSI + 8);
      if (psVar1 != *(string **)(in_RSI + 0x28)) {
        psVar3 = psVar1;
      }
      // std code
      return this;
    }
    local_30 = 0x2f02;
    // std code
  }
  *(unsigned long long *)(this + 0x10) = local_20;
  *(unsigned long *)this = CONCAT53(uStack_2d,(uint3)local_30);
  *(unsigned long long *)(this + 8) = uStack_28;
  return this;
}

void option_description::set_names(char const*) {
byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  istream *piVar9;
  unsigned long uVar10;
  void *puVar11;
  unsigned long long local_180;
  unsigned long long uStack_178;
  unsigned long long local_170;
  void *local_168;
  unsigned long long local_160;
  void *local_158 [8];
  unsigned long local_118;
  unsigned long long uStack_110;
  void *local_108;
  unsigned long long uStack_100;
  unsigned int local_f8;
  void *local_f0 [17];
  unsigned long long local_68;
  unsigned int local_60;
  void *local_58;
  void *local_50;
  unsigned long long local_48;
  size_t sStack_40;
  void *local_38;
  
  lVar2 = *(long *)(this + 0x20);
  lVar6 = *(long *)(this + 0x28);
  while (lVar4 = lVar6, lVar4 != lVar2) {
    lVar6 = lVar4 + -0x18;
    if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
      delete(*(void **)(lVar4 + -8));
    }
  }
  *(long *)(this + 0x28) = lVar2;
  sVar7 = strlen(param_1);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar7 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)sVar7 * '\x02');
    pvVar8 = (void *)((long)&local_48 + 1);
    if (sVar7 != 0) return;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = new char[uVar10];
    local_48 = uVar10 | 1;
    sStack_40 = sVar7;
    local_38 = pvVar8;
    memcpy(pvVar8,param_1,sVar7);
  }
  *(unsigned char *)((long)pvVar8 + sVar7) = 0;
  local_168 = (char*)PTR_construction_vtable_101ab4168 + 0x18;
  local_f0[0] = (char*)PTR_construction_vtable_101ab4168 + 0x40;
  local_160 = 0;
  // std code
  local_68 = 0;
  local_60 = 0xffffffff;
  local_168 = (char*)PTR_vtable_101ab45b8 + 0x18;
  puVar11 = (char*)PTR_vtable_101ab45b8 + 0x40;
  local_f0[0] = puVar11;
  local_58 = local_168;
  // std code
  local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = (void *)0x0;
  uStack_100 = 0;
  local_f8 = 8;
  local_50 = local_158[0];
  // std code
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  local_48 = 0;
  sStack_40 = 0;
  local_38 = (void *)0x0;
  while (piVar9 = // std code
                            ((istream *)&local_168,(string *)&local_48,','),
        ((byte)piVar9[*(long *)(*(long *)piVar9 + -0x18) + 0x20] & 5) == 0) {
    // std code
              ((vector<// std code
    ;
  }
  lVar2 = *(long *)(this + 0x28);
  if (1 < (unsigned long)((lVar2 - *(long *)(this + 0x20) >> 3) * -0x5555555555555555)) {
    if ((*(byte *)(lVar2 + -0x18) & 1) == 0) {
      if (*(byte *)(lVar2 + -0x18) >> 1 != 1) return;
    }
    else if (*(long *)(lVar2 + -0x10) != 1) return;
    // std code
    // FIXED: if ((byte)this[8] & 1) != 0) {
      delete(*(void **)(this + 0x18));
    }
    *(unsigned long long *)(this + 0x18) = local_170;
    *(unsigned long long *)(this + 8) = local_180;
    *(unsigned long long *)(this + 0x10) = uStack_178;
    lVar2 = *(long *)(this + 0x28);
    pbVar1 = (byte *)(lVar2 + -0x18);
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      delete(*(void **)(lVar2 + -8));
    }
    *(byte **)(this + 0x28) = pbVar1;
    pbVar3 = *(byte **)(this + 0x20);
    if ((long)pbVar1 - (long)pbVar3 == 0x18) {
      if ((*pbVar3 & 1) == 0) {
        if (*pbVar3 >> 1 != 0) return;
      }
      else if (*(long *)(pbVar3 + 8) != 0) return;
      while (pbVar5 = pbVar1, pbVar5 != pbVar3) {
        pbVar1 = pbVar5 + -0x18;
        if ((pbVar5[-0x18] & 1) != 0) {
          delete(*(void **)(pbVar5 + -8));
        }
      }
      *(byte **)(this + 0x28) = pbVar3;
    }
  }
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  local_168 = local_58;
  local_158[0] = local_50;
  local_f0[0] = puVar11;
  if ((local_118 & 1) != 0) {
    delete(local_108);
  }
  // std code
  // std code
  // std code
  return this;
}

option_description::~option_description() {
~option_description(this);
  delete(this);
  return;
}
}
