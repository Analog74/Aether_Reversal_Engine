#include <ni/controller_editor/selectItem_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::PreferenceWidget {

void selectItem(2 param_2, std::string const&, unsigned int {
long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  Widget *this_00;
  long *plVar5;
  long lVar6;
  long *plVar7;
  unsigned long long local_30;
  
  local_30 = 0;
  NWL::Widget::setOrigin(*(Widget **)(this + 0x418),(Point *)&local_30);
  NWL::Stack::setTop(*(Stack **)(this + 0x418),param_2);
  lVar6 = *(long *)(*(long *)(this + 0x418) + 0x120);
  lVar4 = (long)*(int *)(*(long *)(this + 0x418) + 0x2f0) * 0x10;
  lVar2 = *(long *)(lVar6 + lVar4);
  plVar5 = *(long **)(lVar6 + 8 + lVar4);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar2 == 0) ||
     (this_00 = (Widget *)___dynamic_cast(lVar2,&NWL::Widget::typeinfo,&PreferencePanel::typeinfo,0)
     , this_00 == (Widget *)0x0)) {
    this_00 = (Widget *)0x0;
    plVar7 = (long *)0x0;
    if (plVar5 == (long *)0x0) return;
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      // std code
    }
  }
  else {
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
      plVar7 = plVar5;
      return;
    }
    plVar7 = (long *)0x0;
  }
  if (this_00 != (Widget *)0x0) {
    plVar5 = (long *)(**(code **)(*(long *)this_00 + 0xf8))(this_00);
    if (plVar5 != (long *)0x0) {
      bVar3 = (bool)(**(code **)(*plVar5 + 0x1a0))(plVar5);
      NWL::Widget::setEnabled(this_00,bVar3);
      NWL::Widget::setInvalid(this_00,0);
    }
    (**(code **)(*(long *)this_00 + 0xd0))(this_00);
    NWL::Widget::setAlign(this_00);
    if (((*(long **)(this + 0x138) != (long *)0x0) &&
        (lVar6 = (**(code **)(**(long **)(this + 0x138) + 0x58))(), lVar6 != 0)) &&
       (lVar6 = (**(code **)(**(long **)(this + 0x138) + 0x58))(), *(long *)(lVar6 + 8) != 0)) {
      NWL::Widget::setFocus(this_00);
    }
  }
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar6 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      // std code
    }
  }
  NWL::Stack::setSizeToTop(*(Stack **)(this + 0x418));
  NWL::Widget::setAlign((Widget *)this);
  return;
}
}
