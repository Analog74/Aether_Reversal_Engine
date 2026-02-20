#include <ni/controller_editor/initControllerAtIndex_unsigned_long__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerManager {

void initControllerAtIndex(2 param_2, unsigned long, NI::IAsynchronousEventListener* {
long *plVar1;
  
  if (this[0x218] == (ControllerManager)0x0) {
    plVar1 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x110) + param_1 * 8) + 0x10))();
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1f8))(plVar1);
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
      (**(code **)(plVar1[0xf9] + 0x48))(plVar1 + 0xf9,this);
      (**(code **)(*plVar1 + 0x200))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000100048158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x300))(plVar1);
      return;
    }
  }
  return;
}
}
