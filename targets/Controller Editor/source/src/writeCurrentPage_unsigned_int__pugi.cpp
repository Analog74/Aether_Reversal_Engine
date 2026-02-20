#include <ni/controller_editor/writeCurrentPage_unsigned_int__pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void writeCurrentPage(unsigned int, pugi::xml_node&) const {
long *plVar1;
  long lVar2;
  
  // std code
  plVar1 = *(long **)(this + 0x200);
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_1,*(unsigned int *)(this + 0x124));
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x40))(*(long **)(lVar2 + 0x38),param_2,1);
  }
  // std code
  return;
}
}
