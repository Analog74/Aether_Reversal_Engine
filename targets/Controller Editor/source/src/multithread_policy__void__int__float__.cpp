#include <ni/controller_editor/multithread_policy__void__int__float__.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace nod::signal_type<nod {

void multithread_policy, void (int, float)>::invalidate_disconnector() {
long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(this + 0xb0) != 0) {
    lVar3 = *(long *)(this + 0xa8);
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0xb0) + 0x10);
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    plVar4 = *(long **)(this + 0xb0);
    *(unsigned long long *)(this + 0xa8) = 0;
    *(unsigned long long *)(this + 0xb0) = 0;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        // std code
      }
    }
    if (lVar3 == 0) {
      plVar4 = (long *)// std code
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          // std code
        }
      }
    }
    else {
      while (plVar4 = (long *)// std code
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          // std code
        }
        _sched_yield();
      }
    }
    // std code
    return;
  }
  *(unsigned long long *)(this + 0xa8) = 0;
  *(unsigned long long *)(this + 0xb0) = 0;
  return;
}
}
