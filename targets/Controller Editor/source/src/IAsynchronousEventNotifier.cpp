#include <ni/controller_editor/IAsynchronousEventNotifier.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void IAsynchronousEventNotifier::anyCapacitiveTouchChanged(bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  void7 in_register_00000039;
  
  LOCK();
  plVar1 = (long *)0(in_register_00000039,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)0(in_register_00000039,param_1) + 0x10))();
    // std code
  }
  return;
}

void IAsynchronousEventNotifier::assignmentChanged() [clone .cold.1] {
IAsynchronousEventNotifier *pIVar1;
  long lVar2;
  
  LOCK();
  pIVar1 = this + 8;
  lVar2 = *(long *)pIVar1;
  *(long *)pIVar1 = *(long *)pIVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void IAsynchronousEventNotifier::controllerTouched(unsigned int) [clone .cold.1] {
long *plVar1;
  long lVar2;
  unsigned int in_register_0000003c;
  
  LOCK();
  plVar1 = (long *)CONCAT44(in_register_0000003c,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)CONCAT44(in_register_0000003c,param_1) + 0x10))();
    // std code
  }
  return;
}

void IAsynchronousEventNotifier::deviceChanged(bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  void7 in_register_00000039;
  
  LOCK();
  plVar1 = (long *)0(in_register_00000039,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)0(in_register_00000039,param_1) + 0x10))();
    // std code
  }
  return;
}

void IAsynchronousEventNotifier::deviceConflict() [clone .cold.1] {
IAsynchronousEventNotifier *pIVar1;
  long lVar2;
  
  LOCK();
  pIVar1 = this + 8;
  lVar2 = *(long *)pIVar1;
  *(long *)pIVar1 = *(long *)pIVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void IAsynchronousEventNotifier::focusChanged(bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  void7 in_register_00000039;
  
  LOCK();
  plVar1 = (long *)0(in_register_00000039,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)0(in_register_00000039,param_1) + 0x10))();
    // std code
  }
  return;
}

void IAsynchronousEventNotifier::midiActivity(unsigned int, unsigned int) [clone .cold.1] {
long *plVar1;
  long lVar2;
  unsigned int in_register_0000003c;
  
  LOCK();
  plVar1 = (long *)CONCAT44(in_register_0000003c,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)CONCAT44(in_register_0000003c,param_1) + 0x10))();
    // std code
  }
  return;
}

void IAsynchronousEventNotifier::selectedPageChanged(unsigned int, bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  unsigned int in_register_0000003c;
  
  LOCK();
  plVar1 = (long *)CONCAT44(in_register_0000003c,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)CONCAT44(in_register_0000003c,param_1) + 0x10))();
    // std code
  }
  return;
}

IAsynchronousEventNotifier::~IAsynchronousEventNotifier() {
delete(this);
  return;
}
}
