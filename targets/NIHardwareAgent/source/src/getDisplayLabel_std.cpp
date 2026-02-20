#include <ni/controller_editor/getDisplayLabel_std.hpp>
namespace NI::NHL2::Assignment {

void getDisplayLabel(std::string&, unsigned long) const {
if (((byte)this[0x48] & 1) == 0) {
    if ((byte)this[0x48] >> 1 == 0) {
LAB_10009bed9:
      getDefaultLabel(this,param_1);
      goto joined_r0x00010009bee7;
    }
  }
  else if (*(long *)(this + 0x50) == 0) goto LAB_10009bed9;
  // std code
joined_r0x00010009bee7:
  if (param_2 != 0) {
    shortenLabel(param_1,param_2);
    return;
  }
  return;
}
}
