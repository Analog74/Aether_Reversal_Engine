#include <ni/controller_editor/removeFirst_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void removeFirst(1 param_1, std::string&, unsigned long {
if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 <= param_2) {
      *(void2 *)param_1 = 0;
      return;
    }
  }
  else if (*(unsigned long *)(param_1 + 8) <= param_2) {
    **(unsigned char **)(param_1 + 0x10) = 0;
    *(unsigned long long *)(param_1 + 8) = 0;
    return;
  }
  if (param_2 != 0) {
    // std code
  }
  return;
}
}
