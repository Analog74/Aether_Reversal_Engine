#include <ni/controller_editor/condition_variable_any.hpp>
namespace boost {

void condition_variable_any::notify_all() {
int iVar1;
  
  do {
    iVar1 = _pthread_mutex_lock((pthread_mutex_t *)this);
  } while (iVar1 == 4);
  _pthread_cond_broadcast((pthread_cond_t *)(this + 0x40));
  do {
    iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)this);
  } while (iVar1 == 4);
  return;
}
}
