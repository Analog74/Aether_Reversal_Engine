#include <ni/controller_editor/actionFromString_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void actionFromString(1 param_1, std::string const& {
int iVar1;
  unsigned long uVar2;
  byte bVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  
  uVar2 = (unsigned long)((byte)*param_1 >> 1);
  bVar3 = (byte)*param_1 & 1;
  uVar4 = *(unsigned long *)(param_1 + 8);
  uVar5 = uVar4;
  if (bVar3 == 0) {
    uVar5 = uVar2;
  }
  if (uVar5 == 5) {
    iVar1 = // std code
    if (iVar1 == 0) {
      return (bool)2;
    }
    uVar4 = *(unsigned long *)(param_1 + 8);
    bVar3 = (byte)*param_1 & 1;
    uVar2 = (unsigned long)((byte)*param_1 >> 1);
  }
  if (bVar3 != 0) {
    uVar2 = uVar4;
  }
  if (uVar2 != 7) {
    return false;
  }
  iVar1 = // std code
  return iVar1 == 0;
}
}
