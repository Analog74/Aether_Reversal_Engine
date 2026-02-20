#include <ni/controller_editor/removeCharacter_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void removeCharacter(1 param_1, std::string&, char, unsigned long, unsigned long {
string sVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  
  sVar1 = *param_1;
  uVar2 = (unsigned long)((byte)sVar1 >> 1);
  uVar3 = *(unsigned long *)(param_1 + 8);
  uVar5 = uVar3;
  if (((byte)sVar1 & 1) == 0) {
    uVar5 = uVar2;
  }
  if (uVar5 <= param_3) {
    return;
  }
  if (param_4 == 0xffffffffffffffff) {
joined_r0x000100726465:
    uVar4 = uVar3;
    if (((byte)sVar1 & 1) != 0) return;
  }
  else {
    if (((byte)sVar1 & 1) != 0) {
      uVar5 = uVar3;
      uVar4 = uVar3;
      if (uVar3 <= param_4) return;
      uVar4 = param_4 + param_3;
      if (uVar4 < uVar5) return;
      goto joined_r0x000100726465;
    }
    uVar5 = uVar2;
    if (param_4 < uVar2) return;
  }
  uVar4 = uVar2;
  uVar3 = // std code
  while (uVar3 < uVar4) {
    // std code
    uVar3 = // std code
  }
  return;
}
}
