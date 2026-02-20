#include <ni/controller_editor/shared_state_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::detail {

void shared_state_base::notify_deferred() {
pthread_mutex_t *ppVar1;
  int iVar2;
  pthread_mutex_t *local_28;
  char local_20;
  
  local_28 = (pthread_mutex_t *)(this + 0x30);
  local_20 = '\0';
  unique_lock<// boost code
  mark_finished_internal(this,(unique_lock *)&local_28);
  ppVar1 = local_28;
  if (local_20 != '\0') {
    do {
      iVar2 = _pthread_mutex_unlock(ppVar1);
    } while (iVar2 == 4);
  }
  return;
}
}
