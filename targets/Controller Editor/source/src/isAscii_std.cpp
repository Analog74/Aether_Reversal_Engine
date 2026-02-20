#include <ni/controller_editor/isAscii_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void isAscii(1 param_1, std::string const& {
string sVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  unsigned long uVar4;
  string *psVar5;
  
  sVar1 = *param_1;
  if (((byte)sVar1 & 1) == 0) {
    if ((byte)sVar1 < 2) {
      return 0;
    }
    uVar3 = (unsigned long)((byte)sVar1 >> 1);
  }
  else {
    uVar3 = *(unsigned long *)(param_1 + 8);
    if (uVar3 == 0) {
      return 0;
    }
  }
  if (((byte)sVar1 & 1) == 0) {
    psVar5 = param_1 + 1;
    sVar1 = *psVar5;
  }
  else {
    psVar5 = *(string **)(param_1 + 0x10);
    sVar1 = *psVar5;
  }
  if (0x7e < (int)(char)sVar1 - 1U) {
    return 0;
  }
  uVar2 = 1;
  do {
    uVar4 = uVar2;
    if (uVar3 == uVar4) break;
    uVar2 = uVar4 + 1;
  } while ((int)(char)psVar5[uVar4] - 1U < 0x7f);
  return 0((int7)(uVar3 >> 8),uVar3 <= uVar4);
}
}
