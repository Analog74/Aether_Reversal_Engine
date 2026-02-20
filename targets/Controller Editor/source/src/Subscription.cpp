#include <ni/controller_editor/Subscription.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void Subscription::onConnectionDropped(unsigned long long) {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (Logging::detail::__reportLevelAsUInt < 3) {
    Logging::detail::__trace__msg(2,"%s: Connection dropped\n","Subscription");
  }
  *(unsigned long long *)(param_1 + 8) = 0;
  plVar3 = *(long **)(param_1 + 0x10);
  *(unsigned long long *)(param_1 + 0x10) = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      return;
    }
  }
  return;
}

void Subscription::queryConnectedDevices() {
unsigned int local_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  local_28 = 4;
  uStack_24 = 0x10;
  uStack_20 = 0;
  uStack_1c = 0x3447143;
  (**(code **)(*(long *)this + 0x10))(this,&local_28);
  return;
}

void Subscription::unsubscribe() {
long *plVar1;
  long lVar2;
  long *plVar3;
  unsigned int local_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  local_38 = 4;
  uStack_34 = 0x10;
  uStack_30 = 0;
  uStack_2c = 0x3442d00;
  (**(code **)(*(long *)this + 0x10))(this,&local_38);
  *(unsigned long long *)(this + 8) = 0;
  plVar3 = *(long **)(this + 0x10);
  *(unsigned long long *)(this + 0x10) = 0;
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
  return;
}

Subscription::~Subscription() {
long *plVar1;
  long lVar2;
  long *plVar3;
  Subscription *pSVar4;
  
  *(void ***)this = &PTR__Subscription_101b0fb60;
  pSVar4 = *(Subscription **)(this + 0x70);
  if (this + 0x50 == pSVar4) {
    (**(code **)(*(long *)pSVar4 + 0x20))();
    pSVar4 = *(Subscription **)(this + 0x40);
    if (this + 0x20 == pSVar4) return;
  }
  else {
    if (pSVar4 != (Subscription *)0x0) {
      (**(code **)(*(long *)pSVar4 + 0x28))();
    }
    pSVar4 = *(Subscription **)(this + 0x40);
    if (this + 0x20 == pSVar4) {
      (**(code **)(*(long *)pSVar4 + 0x20))();
      plVar3 = *(long **)(this + 0x10);
      goto joined_r0x00010045362b;
    }
  }
  if (pSVar4 != (Subscription *)0x0) {
    (**(code **)(*(long *)pSVar4 + 0x28))();
  }
  plVar3 = *(long **)(this + 0x10);
joined_r0x00010045362b:
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
  delete(this);
  return;
}
}
