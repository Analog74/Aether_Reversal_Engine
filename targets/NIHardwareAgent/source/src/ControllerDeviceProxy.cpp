#include <ni/controller_editor/ControllerDeviceProxy.hpp>
namespace NI::NHL2::SERVER {

ControllerDeviceProxy::~ControllerDeviceProxy() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__ControllerDeviceProxy_1009cdd70;
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
      goto joined_r0x00010006616e;
    }
  }
  plVar3 = *(long **)(this + 0x268);
joined_r0x00010006616e:
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
  delete(this);
  return;
}
}
