#include <ni/controller_editor/setPageName_unsigned_int__unsigned_int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void setPageName(1 param_1, unsigned int, unsigned int, std::string const& {
unsigned int uVar1;
  long lVar2;
  long lVar3;
  unsigned long uVar4;
  unsigned int local_38;
  uint local_34;
  
  // std code
  uVar1 = *(unsigned int *)(this + 0x124);
  lVar2 = (**(code **)(**(long **)(this + 0x200) + 0xb8))(*(long **)(this + 0x200),param_1,uVar1);
  uVar4 = (unsigned long)param_2;
  if (uVar4 < (unsigned long)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3)) {
    lVar2 = (**(code **)(**(long **)(this + 0x200) + 0xb8))(*(long **)(this + 0x200),param_1,uVar1);
    if (uVar4 < (unsigned long)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3)) {
      lVar2 = *(long *)(*(long *)(lVar2 + 8) + uVar4 * 8);
    }
    else {
      lVar2 = 0;
    }
    // std code
    lVar2 = (**(code **)(**(long **)(this + 0x200) + 0xb8))(*(long **)(this + 0x200),param_1,uVar1);
    if (uVar4 < (unsigned long)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3)) {
      lVar2 = *(long *)(*(long *)(lVar2 + 8) + uVar4 * 8);
    }
    else {
      lVar2 = 0;
    }
    lVar3 = (**(code **)(**(long **)(this + 0x200) + 0xa8))(*(long **)(this + 0x200),param_1,uVar1);
    local_34 = param_1;
    if (lVar2 == lVar3) {
      local_38 = 4;
      (**(code **)(*(long *)this + 0x110))(this,&local_38);
    }
    else {
      local_38 = 3;
      (**(code **)(*(long *)this + 0x110))(this,&local_38);
    }
    // std code
    (**(code **)(*(long *)(this + 8) + 0x10))(this + 8,param_1,0);
  }
  else {
    // std code
  }
  return;
}
}
