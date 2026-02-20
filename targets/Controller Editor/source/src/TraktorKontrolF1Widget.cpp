#include <ni/controller_editor/TraktorKontrolF1Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

TraktorKontrolF1Widget::~TraktorKontrolF1Widget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__TraktorKontrolF1Widget_101ae3e10;
  *(void ***)(this + 0x60) = &PTR__TraktorKontrolF1Widget_101ae3fa0;
  *(void ***)(this + 0x3f0) = &PTR__TraktorKontrolF1Widget_101ae3fd0;
  *(void ***)(this + 0x6d0) = &PTR__TraktorKontrolF1Widget_101ae4008;
  plVar3 = *(long **)(this + 0x718);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      plVar3 = *(long **)(this + 0x708);
      goto joined_r0x00010018bca5;
    }
  }
  plVar3 = *(long **)(this + 0x708);
joined_r0x00010018bca5:
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
  plVar3 = *(long **)(this + 0x6f8);
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
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x6d8),*(__tree_node **)(this + 0x6e0));
  ControllerWidget::~ControllerWidget((ControllerWidget *)this);
  return;
}
}
