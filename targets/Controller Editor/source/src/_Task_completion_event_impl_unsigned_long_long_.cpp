#include <ni/controller_editor/_Task_completion_event_impl_unsigned_long_long_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void _Task_completion_event_impl<unsigned long long>::~_Task_completion_event_impl() {
long lVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  
  plVar4 = *(long **)this;
  if (plVar4 != *(long **)(this + 8)) {
    do {
      plVar2 = (long *)*plVar4;
      (**(code **)(*plVar2 + 0x10))(plVar2,1,0,0,plVar2 + 2);
      plVar4 = plVar4 + 2;
    } while (plVar4 != *(long **)(this + 8));
  }
  plVar4 = *(long **)(this + 0x68);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
    }
  }
  // std code
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar6 = *(void **)(this + 8);
  pvVar5 = pvVar3;
  if (pvVar6 != pvVar3) {
    do {
      plVar4 = *(long **)((long)pvVar6 + -8);
      pvVar6 = (void *)((long)pvVar6 + -0x10);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar1 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          // std code
        }
      }
    } while (pvVar3 != pvVar6);
    pvVar5 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar3;
  delete(pvVar5);
  return;
}
}
