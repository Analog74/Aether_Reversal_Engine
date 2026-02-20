#include <ni/controller_editor/writePage_pugi.hpp>
namespace NI::NHL2::MapHandler {

void writePage(pugi::xml_node&, unsigned int, unsigned int) const {
long *plVar1;
  long lVar2;
  
  // std code
  plVar1 = *(long **)(this + 0x200);
  if (param_3 == 0xffffffff) {
    lVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,*(unsigned int *)(this + 0x124));
    (**(code **)(**(long **)(lVar2 + 0x38) + 0x40))(*(long **)(lVar2 + 0x38),param_1,1);
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + (unsigned long)param_3 * 8);
    (**(code **)(*plVar1 + 0x40))(plVar1,param_1,1);
  }
  // std code
  return;
}
}
