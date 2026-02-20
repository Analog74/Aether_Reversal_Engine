#include <ni/controller_editor/readPage_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void readPage(1 param_1, pugi::xml_node const&, unsigned int, unsigned int {
long *plVar1;
  unsigned int uVar2;
  long lVar3;
  
  // std code
  plVar1 = *(long **)(this + 0x200);
  if (param_3 == 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,*(unsigned int *)(this + 0x124));
    uVar2 = (**(code **)(**(long **)(lVar3 + 0x38) + 0x38))(*(long **)(lVar3 + 0x38),param_1,1);
  }
  else {
    lVar3 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
    plVar1 = *(long **)(*(long *)(lVar3 + 8) + (unsigned long)param_3 * 8);
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,1);
  }
  // std code
  return uVar2;
}
}
