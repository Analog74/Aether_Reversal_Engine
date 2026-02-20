#include <ni/controller_editor/TraktorKontrolD2Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TraktorKontrolD2Widget::~TraktorKontrolD2Widget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)(this + -0x6d0) = &PTR__TraktorKontrolD2Widget_101ae18c8;
  *(void ***)(this + -0x670) = &PTR__TraktorKontrolD2Widget_101ae1a60;
  *(void ***)(this + -0x2e0) = &PTR__TraktorKontrolD2Widget_101ae1a90;
  *(void ***)this = &PTR__TraktorKontrolD2Widget_101ae1ac8;
  plVar3 = *(long **)(this + 0x10);
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
  ControllerWidget::~ControllerWidget((ControllerWidget *)(this + -0x6d0));
  delete((ControllerWidget *)(this + -0x6d0));
  return;
}
}
