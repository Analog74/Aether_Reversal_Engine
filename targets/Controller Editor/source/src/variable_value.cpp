#include <ni/controller_editor/variable_value.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

variable_value::~variable_value() {
long *plVar1;
  int *piVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  if (*(long **)this != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005aa002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 8))();
    return;
  }
  return;
}
}
