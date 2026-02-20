#include <ni/controller_editor/unique_lock_boost.hpp>
namespace boost::detail::shared_state_base::mark_finished_internal(boost {

void unique_lock<boost::mutex>&) {
shared_state_base *psVar1;
  int iVar2;
  
  this[0x28] = (shared_state_base)0x1;
  do {
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(this + 0x70));
  } while (iVar2 == 4);
  _pthread_cond_broadcast((pthread_cond_t *)(this + 0xb0));
  do {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x70));
  } while (iVar2 == 4);
  for (psVar1 = *(shared_state_base **)(this + 0xe8); psVar1 != this + 0xe0;
      psVar1 = *(shared_state_base **)(psVar1 + 8)) {
    condition_variable_any::notify_all(*(condition_variable_any **)(psVar1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010030f2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,param_1);
  return;
}
}
