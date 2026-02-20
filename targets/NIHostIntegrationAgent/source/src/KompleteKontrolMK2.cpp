#include <ni/controller_editor/KompleteKontrolMK2.hpp>
namespace NI::NHL2::SERVER {

KompleteKontrolMK2::~KompleteKontrolMK2() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__ControllerDeviceProxy_100a54ab0;
  plVar3 = *(long **)(this + 0x278);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      plVar3 = *(long **)(this + 0x268);
      goto joined_r0x000100050af2;
    }
  }
  plVar3 = *(long **)(this + 0x268);
joined_r0x000100050af2:
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
  ControllerBase::~ControllerBase((ControllerBase *)this);
  return;
}
}
