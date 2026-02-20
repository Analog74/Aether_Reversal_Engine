#include <ni/controller_editor/TraktorKontrolZ1Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolZ1Widget::createMainPanel() [clone .cold.2] {
TraktorKontrolZ1Widget *pTVar1;
  long lVar2;
  
  LOCK();
  pTVar1 = this + 8;
  lVar2 = *(long *)pTVar1;
  *(long *)pTVar1 = *(long *)pTVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void TraktorKontrolZ1Widget::setLabelVisibility(bool param_1) {
}

void TraktorKontrolZ1Widget::supportsLabelVisibility() const {
return 1;
}

TraktorKontrolZ1Widget::~TraktorKontrolZ1Widget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__TraktorKontrolZ1Widget_101af2120;
  *(void ***)(this + 0x60) = &PTR__TraktorKontrolZ1Widget_101af22b0;
  *(void ***)(this + 0x3f0) = &PTR__TraktorKontrolZ1Widget_101af22e0;
  *(void ***)(this + 0x6d0) = &PTR__TraktorKontrolZ1Widget_101af2318;
  plVar3 = *(long **)(this + 0x720);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      plVar3 = *(long **)(this + 0x710);
      goto joined_r0x000100245485;
    }
  }
  plVar3 = *(long **)(this + 0x710);
joined_r0x000100245485:
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
             *)(this + 0x6f0),*(__tree_node **)(this + 0x6f8));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x6d8),*(__tree_node **)(this + 0x6e0));
  ControllerWidget::~ControllerWidget((ControllerWidget *)this);
  return;
}
}
