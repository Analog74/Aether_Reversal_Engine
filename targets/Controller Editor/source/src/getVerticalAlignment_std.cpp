#include <ni/controller_editor/getVerticalAlignment_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void getVerticalAlignment(1 param_1, std::string const& {
byte bVar1;
  int iVar2;
  long lVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  
  uVar4 = (unsigned long)((byte)*param_1 >> 1);
  bVar1 = (byte)*param_1 & 1;
  uVar5 = *(unsigned long *)(param_1 + 8);
  uVar6 = uVar5;
  if (bVar1 == 0) {
    uVar6 = uVar4;
  }
  if (uVar6 == 3) {
    iVar2 = // std code
    if (iVar2 == 0) {
      return 0x100;
    }
    uVar5 = *(unsigned long *)(param_1 + 8);
    bVar1 = (byte)*param_1 & 1;
    uVar4 = (unsigned long)((byte)*param_1 >> 1);
  }
  uVar6 = uVar5;
  if (bVar1 == 0) {
    uVar6 = uVar4;
  }
  if (uVar6 == 6) {
    iVar2 = // std code
    if (iVar2 == 0) {
      return 0x10;
    }
    uVar5 = *(unsigned long *)(param_1 + 8);
    bVar1 = (byte)*param_1 & 1;
    uVar4 = (unsigned long)((byte)*param_1 >> 1);
  }
  if (bVar1 != 0) {
    uVar4 = uVar5;
  }
  lVar3 = 0x1000;
  if (uVar4 == 6) {
    iVar2 = // std code
    lVar3 = (unsigned long)(iVar2 != 0) << 0xc;
  }
  return lVar3;
}
}
