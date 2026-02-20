#include <ni/controller_editor/TraktorKontrolS5Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TraktorKontrolS5Widget::~TraktorKontrolS5Widget() {
long *plVar1;
  ControllerWidget *this_00;
  long lVar2;
  long *plVar3;
  
  this_00 = (ControllerWidget *)(this + -0x6d0);
  *(void ***)(this + -0x6d0) = &PTR__TraktorKontrolS5Widget_101aeb6f0;
  *(void ***)(this + -0x670) = &PTR__TraktorKontrolS5Widget_101aeb8a8;
  *(void ***)(this + -0x2e0) = &PTR__TraktorKontrolS5Widget_101aeb8d8;
  *(void ***)this = &PTR__TraktorKontrolS5Widget_101aeb910;
  plVar3 = *(long **)(this + 0x20);
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
  *(void ***)this_00 = &PTR__IGuiMultipleSectionSupport_101ab86c8;
  *(void ***)(this + -0x670) = &PTR__IGuiMultipleSectionSupport_101ab8878;
  *(void ***)(this + -0x2e0) = &PTR__IGuiMultipleSectionSupport_101ab88a8;
  *(void ***)this = &PTR__IGuiMultipleSectionSupport_101ab88e0;
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
  ControllerWidget::~ControllerWidget(this_00);
  delete(this_00);
  return;
}
}
