#include <ni/controller_editor/getTemplateName_unsigned_long__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void getTemplateName(unsigned long, std::string&) const {
long lVar1;
  unsigned long uVar2;
  
  // std code
  if (param_1 < (unsigned long)(*(long *)(this + 0x230) - *(long *)(this + 0x228) >> 3)) {
    lVar1 = *(long *)(*(long *)(this + 0x228) + param_1 * 8);
    if ((*(byte *)(lVar1 + 0xb0) & 1) == 0) {
      uVar2 = (unsigned long)(*(byte *)(lVar1 + 0xb0) >> 1);
    }
    else {
      uVar2 = *(unsigned long *)(lVar1 + 0xb8);
    }
    if (uVar2 != 0) {
      // std code
    }
    uVar2 = 0((int7)(uVar2 >> 8),uVar2 != 0);
  }
  else {
    uVar2 = 0;
  }
  // std code
  return uVar2 & 0xffffffff;
}
}
