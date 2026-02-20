#include <ni/controller_editor/execution_context.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio {

execution_context::~execution_context() {
long lVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)this;
  plVar2 = *(long **)((long)pvVar3 + 0x50);
  if (plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      plVar2 = (long *)plVar2[4];
    } while (plVar2 != (long *)0x0);
    pvVar3 = *(void **)this;
    plVar2 = *(long **)((long)pvVar3 + 0x50);
    if (plVar2 != (long *)0x0) {
      do {
        lVar1 = *plVar2;
        plVar2 = (long *)plVar2[4];
        (**(code **)(lVar1 + 8))();
        *(long **)((long)pvVar3 + 0x50) = plVar2;
      } while (plVar2 != (long *)0x0);
      pvVar3 = *(void **)this;
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  _pthread_mutex_destroy((pthread_mutex_t *)((long)pvVar3 + 8));
  delete(pvVar3);
  return;
}
}
