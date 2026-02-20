#include <ni/controller_editor/loadDefault_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleSheetManager {

void loadDefault(std::string const&) {
byte bVar1;
  string sVar2;
  long lVar3;
  string *psVar4;
  int iVar5;
  size_t sVar6;
  unsigned long uVar7;
  size_t sVar8;
  bool bVar9;
  string *local_38;
  unsigned long local_30;
  
  lVar3 = *(long *)(this + 0x10);
  bVar1 = *(byte *)(lVar3 + 0x10);
  sVar6 = (unsigned long)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    sVar6 = *(size_t *)(lVar3 + 0x18);
  }
  sVar2 = *param_1;
  if (((byte)sVar2 & 1) == 0) {
    sVar8 = (size_t)((byte)sVar2 >> 1);
  }
  else {
    sVar8 = *(size_t *)(param_1 + 8);
  }
  if (sVar6 == sVar8) {
    if (((byte)sVar2 & 1) == 0) {
      psVar4 = param_1 + 1;
    }
    else {
      psVar4 = *(string **)(param_1 + 0x10);
    }
    if ((bVar1 & 1) == 0) {
      if (sVar6 == 0) {
        return;
      }
      uVar7 = 0;
      while (*(string *)(lVar3 + 0x11 + uVar7) == psVar4[uVar7]) {
        uVar7 = uVar7 + 1;
        if (bVar1 >> 1 == uVar7) {
          return;
        }
      }
    }
    else {
      if (sVar6 == 0) {
        return;
      }
      iVar5 = _memcmp(*(void **)(lVar3 + 0x20),psVar4,sVar6);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  // std code
  bVar9 = ((byte)*param_1 & 1) != 0;
  local_38 = param_1 + 1;
  if (bVar9 param_1) {
  }
  local_30 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar9 param_1) {
  }
  StyleSheet::load((StyleSheet *)(*(long *)(this + 0x10) + 0x28),(CharSequence *)&local_38);
  return;
}
}
