#include <ni/controller_editor/getControllerIndex_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerManager {

void getControllerIndex(NI::IController*) const {
long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(this + 0x110);
  plVar2 = *(long **)(this + 0x118);
  plVar3 = plVar1;
  if (plVar1 == plVar2) {
    if (plVar3 != plVar2) {
      return (unsigned long)((long)plVar3 - (long)plVar1) >> 3;
    }
  }
  else {
    do {
      if ((IController *)*plVar3 == param_1) return;
      plVar3 = plVar3 + 1;
    } while (plVar2 != plVar3);
  }
  return 0xffffffff;
}
}
