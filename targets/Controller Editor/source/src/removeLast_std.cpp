#include <ni/controller_editor/removeLast_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void removeLast(1 param_1, std::string&, unsigned long {
unsigned long uVar1;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar1 = (unsigned long)((byte)*param_1 >> 1);
    if (uVar1 <= param_2) {
      *(void2 *)param_1 = 0;
      return;
    }
  }
  else {
    uVar1 = *(unsigned long *)(param_1 + 8);
    if (uVar1 <= param_2) {
      **(unsigned char **)(param_1 + 0x10) = 0;
      *(unsigned long long *)(param_1 + 8) = 0;
      return;
    }
  }
  if (param_2 != 0) {
    // std code
  }
  return;
}
}
