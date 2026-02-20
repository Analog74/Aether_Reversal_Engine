#include <ni/controller_editor/IListSupport.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void IListSupport::checkActivatePagesScrollbar() {
long *plVar1;
  int iVar2;
  long lVar3;
  Widget *pWVar4;
  long *plVar5;
  long *plVar6;
  unsigned long uVar7;
  Widget *this_00;
  unsigned long long local_40;
  Widget *local_38;
  
  if ((*(long *)(this + 0x38) == 0) ||
     (plVar5 = (long *)// std code
    this_00 = (Widget *)0x0;
    plVar5 = (long *)0x0;
    lVar3 = *(long *)(this + 0x48);
  }
  else {
    this_00 = *(Widget **)(this + 0x30);
    lVar3 = *(long *)(this + 0x48);
  }
  if ((lVar3 != 0) && (plVar6 = (long *)// std code
    if ((this_00 != (Widget *)0x0) && (pWVar4 = *(Widget **)(this + 0x40), pWVar4 != (Widget *)0x0))
    {
      uVar7 = getFullPageListHeight(this);
      iVar2 = *(int *)(pWVar4 + 0x17c);
      local_38 = pWVar4;
      NWL::Widget::setActive(this_00,(unsigned long)(long)iVar2 < uVar7);
      NWL::Scrollbar::setRange((Scrollbar *)this_00,(int)uVar7,iVar2);
      if (uVar7 <= (unsigned long)(long)iVar2) {
        local_40 = 0;
        NWL::Widget::setOrigin(local_38,(Point *)&local_40);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      // std code
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar3 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      // std code
    }
  }
  return;
}

void IListSupport::onPagesScrollbarChange() [clone .cold.2] {
IListSupport *pIVar1;
  long lVar2;
  
  if (this != (IListSupport *)0x0) {
    LOCK();
    pIVar1 = this + 8;
    lVar2 = *(long *)pIVar1;
    *(long *)pIVar1 = *(long *)pIVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      // std code
    }
  }
  return;
}

IListSupport::~IListSupport() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
