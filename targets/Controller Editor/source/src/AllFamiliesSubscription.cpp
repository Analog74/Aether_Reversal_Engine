#include <ni/controller_editor/AllFamiliesSubscription.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

AllFamiliesSubscription::~AllFamiliesSubscription() {
long *plVar1;
  long lVar2;
  long *plVar3;
  AllFamiliesSubscription *pAVar4;
  
  *(void ***)this = &PTR__Subscription_101b0fb60;
  pAVar4 = *(AllFamiliesSubscription **)(this + 0x70);
  if (this + 0x50 == pAVar4) {
    (**(code **)(*(long *)pAVar4 + 0x20))();
    pAVar4 = *(AllFamiliesSubscription **)(this + 0x40);
    if (this + 0x20 == pAVar4) return;
  }
  else {
    if (pAVar4 != (AllFamiliesSubscription *)0x0) {
      (**(code **)(*(long *)pAVar4 + 0x28))();
    }
    pAVar4 = *(AllFamiliesSubscription **)(this + 0x40);
    if (this + 0x20 == pAVar4) {
      (**(code **)(*(long *)pAVar4 + 0x20))();
      plVar3 = *(long **)(this + 0x10);
      goto joined_r0x0001000aafbf;
    }
  }
  if (pAVar4 != (AllFamiliesSubscription *)0x0) {
    (**(code **)(*(long *)pAVar4 + 0x28))();
  }
  plVar3 = *(long **)(this + 0x10);
joined_r0x0001000aafbf:
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
