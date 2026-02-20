#include <ni/controller_editor/http_response_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details::_Task_impl<web::http {

void http_response>::~_Task_impl() {
long lVar1;
  long *plVar2;
  long *plVar3;
  
  *(void ***)this = &PTR___Task_impl_101b21028;
  if (*(_CancellationTokenRegistration **)(this + 0x68) != (_CancellationTokenRegistration *)0x0) {
    _CancellationTokenState::_DeregisterCallback
              (*(_CancellationTokenState **)(this + 0x60),
               *(_CancellationTokenRegistration **)(this + 0x68));
    plVar2 = *(long **)(this + 0x68);
    LOCK();
    plVar3 = plVar2 + 1;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    *(unsigned long long *)(this + 0x68) = 0;
  }
  plVar3 = *(long **)(this + 0x138);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  _Task_impl_base::~_Task_impl_base((_Task_impl_base *)this);
  return;
}
}
