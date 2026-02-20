#include <ni/controller_editor/initControllers_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerManager {

void initControllers(1 param_1, NI::IAsynchronousEventListener* {
long *plVar1;
  unsigned long long *puVar2;
  
  if (this[0x218] == (ControllerManager)0x0) {
    this[0x218] = (ControllerManager)0x1;
    puVar2 = *(unsigned long long **)(this + 0x110);
    if (puVar2 != *(unsigned long long **)(this + 0x118)) {
      do {
        plVar1 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))();
        (**(code **)(*plVar1 + 0x1f8))(plVar1);
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
        (**(code **)(plVar1[0xf9] + 0x48))(plVar1 + 0xf9,this);
        (**(code **)(*plVar1 + 0x200))(plVar1);
        (**(code **)(*plVar1 + 0x300))(plVar1);
        puVar2 = puVar2 + 1;
      } while (puVar2 != *(unsigned long long **)(this + 0x118));
    }
    createControllerFamilyTree(this);
    return;
  }
  return;
}
}
