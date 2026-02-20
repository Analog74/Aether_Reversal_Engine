#include <ni/controller_editor/fromAscii_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void fromAscii(1 param_1, std::string const& {
unsigned long uVar1;
  unsigned long uVar2;
  string *psVar3;
  
  if (((byte)*param_1 & 1) == 0) {
    psVar3 = param_1 + 1;
    uVar2 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar2 = *(unsigned long *)(param_1 + 8);
    psVar3 = *(string **)(param_1 + 0x10);
  }
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  if (uVar2 != 0) {
    // std code
    uVar1 = 0;
    do {
      if (0x7e < (int)(char)psVar3[uVar1] - 1U) {
        if (((byte)*this & 1) == 0) {
          *(void2 *)this = 0;
          return this;
        }
        **(unsigned char **)(this + 0x10) = 0;
        *(unsigned long long *)(this + 8) = 0;
        return this;
      }
      // std code
      uVar1 = uVar1 + 1;
    } while (uVar2 != uVar1);
  }
  return this;
}
}
