#include <ni/controller_editor/setTemplateName_unsigned_long__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void setTemplateName(1 param_1, unsigned long, std::string const& {
unsigned long long local_30;
  
  // std code
  if (param_1 < (unsigned long)(*(long *)(this + 0x230) - *(long *)(this + 0x228) >> 3)) {
    // std code
              ((string *)(*(long *)(*(long *)(this + 0x228) + param_1 * 8) + 0xb0),param_2);
    if (*(long *)(*(long *)(this + 0x228) + param_1 * 8) == *(long *)(this + 0x200)) {
      local_30 = 2;
      (**(code **)(*(long *)this + 0x110))(this,&local_30);
    }
    else {
      local_30 = 1;
      (**(code **)(*(long *)this + 0x110))(this,&local_30);
    }
    // std code
    (**(code **)(*(long *)this + 0x360))(this,0);
  }
  else {
    // std code
  }
  return;
}
}
