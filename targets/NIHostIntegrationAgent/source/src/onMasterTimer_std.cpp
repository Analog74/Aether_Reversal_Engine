#include <ni/controller_editor/onMasterTimer_std.hpp>
namespace NI::dawcontrol::ServiceThread {

void onMasterTimer(std::function<void ()>) {
long lVar1;
  char cVar2;
  unsigned long long uVar3;
  scheduler_operation *psVar4;
  unsigned long long local_38;
  unsigned long long local_30;
  unsigned long long local_28;
  
  nod::signal_type<nod::multithread_policy,void()>::connect<// std code
            ((function *)&local_38);
  cVar2 = // boost code
  if (cVar2 == '\0') {
    uVar3 = // boost code
    psVar4 = (scheduler_operation *)
             // boost code
             allocate<// boost code
    *(unsigned long long *)psVar4 = 0;
    *(code **)(psVar4 + 8) =
         // boost code
         executor_op<// boost code
         ::do_complete;
    *(unsigned int *)(psVar4 + 0x10) = 0;
    *(ServiceThread **)(psVar4 + 0x18) = param_2;
    // boost code
              (*(scheduler **)(param_2 + 0x10),psVar4,false);
  }
  else {
    masterTimerTick(param_2);
  }
  *(unsigned long long *)this = *(unsigned long long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  *(unsigned long long *)(this + 0x10) = local_38;
  *(unsigned long long *)(this + 0x18) = local_30;
  *(unsigned long long *)(this + 0x20) = local_28;
  return this;
}
}
