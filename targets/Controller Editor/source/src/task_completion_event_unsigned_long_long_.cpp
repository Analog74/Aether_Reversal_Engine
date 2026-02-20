#include <ni/controller_editor/task_completion_event_unsigned_long_long_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx {

void task_completion_event<unsigned long long>::_CancelInternal() const [clone .cold.1] {
long *plVar1;
  long lVar2;
  long *plVar3;
  void *in_RSI;
  void *in_RDI;
  
  do {
    plVar3 = *(long **)((long)in_RSI + -8);
    in_RSI = (void *)((long)in_RSI + -0x10);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        // std code
      }
    }
  } while (in_RDI != in_RSI);
  delete(in_RDI);
  return;
}
}
