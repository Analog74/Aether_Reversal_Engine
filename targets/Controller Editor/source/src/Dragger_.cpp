#include <ni/controller_editor/Dragger_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::AssignableWidget<NI::NWL {

void Dragger>::~AssignableWidget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)(this + -0x3f0) = &PTR__AssignableWidget_101ad5d70;
  *(void ***)(this + -0x390) = &PTR__AssignableWidget_101ad5e68;
  *(void ***)this = &PTR__AssignableWidget_101ad5e98;
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
    }
  }
  AssignableWidgetBase::~AssignableWidgetBase((AssignableWidgetBase *)(this + -0x3f0));
  delete((AssignableWidgetBase *)(this + -0x3f0));
  return;
}
}
