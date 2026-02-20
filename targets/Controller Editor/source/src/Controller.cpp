#include <ni/controller_editor/Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NHL2::Traktor::KontrolS4MK2 {

Controller::~Controller() {
long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  *(void ***)this = &PTR_setLEDColor_101b0f790;
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar3;
    delete(pvVar3);
  }
  *(void ***)(this + -0x68) = &PTR__Controller_101b0f5f0;
  plVar4 = *(long **)(this + -0x28);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
    }
  }
  delete(this + -0x68);
  return;
}
}
