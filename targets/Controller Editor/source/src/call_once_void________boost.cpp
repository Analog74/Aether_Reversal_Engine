#include <ni/controller_editor/call_once_void________boost.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace void boost {

void call_once<void (*)()>(boost::once_flag&, void (*&&)()) {
char cVar1;
  int iVar2;
  
  cVar1 = thread_detail::enter_once_region(param_1);
  if (cVar1 != '\0') {
    (**(code **)param_2)();
    do {
      iVar2 = _pthread_mutex_lock((pthread_mutex_t *)&thread_detail::once_mutex);
    } while (iVar2 == 4);
    *(unsigned int *)param_1 = 2;
    do {
      iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)&thread_detail::once_mutex);
    } while (iVar2 == 4);
    _pthread_cond_broadcast((pthread_cond_t *)&thread_detail::once_cv);
  }
  return;
}
}
