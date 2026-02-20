#include <ni/controller_editor/getDisplayLabel_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Assignment {

void getDisplayLabel(std::string&, unsigned long) const {
if (((byte)this[0x48] & 1) == 0) {
    if ((byte)this[0x48] >> 1 == 0) {
      getDefaultLabel(this,param_1);
      goto joined_r0x0001002d4bf7;
    }
  }
  else if(2 param_2, 2 param_2, *(long *(this + 0x50 == 0) return;
  // std code
joined_r0x0001002d4bf7:
  if (param_2 != 0) {
    shortenLabel(param_1,param_2);
    return;
  }
  return;
}
}
