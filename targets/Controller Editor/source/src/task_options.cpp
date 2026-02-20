#include <ni/controller_editor/task_options.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx {

task_options::~task_options() {
long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = *(void **)(this + 0x38);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar3;
    delete(pvVar3);
  }
  plVar4 = *(long **)(this + 0x18);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(unsigned long long *)(this + 0x18) = 0;
  plVar4 = *(long **)(this + 8);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
      return;
    }
  }
  return;
}
}
