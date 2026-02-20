#include <ni/controller_editor/appendInt_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void appendInt(2 param_2, std::string&, int, unsigned long {
uint uVar1;
  
  if (param_2 < 0) {
    // std code
  }
  uVar1 = -param_2;
  if (0 < param_2) {
    uVar1 = param_2;
  }
  appendUnsigned(param_1,uVar1,param_3);
  return;
}
}
