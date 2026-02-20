#include <ni/controller_editor/EventTimerSubscription_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::DETAIL::OwnerListBase<NI::UIA::DETAIL {

void EventTimerSubscription>::~OwnerListBase() {
long lVar1;
  OwnerListBase<NI::UIA::DETAIL::EventTimerSubscription> *pOVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 != (long *)0x0) {
    do {
      lVar1 = *plVar3;
      pOVar2 = (OwnerListBase<NI::UIA::DETAIL::EventTimerSubscription> *)plVar3[1];
      if (lVar1 == 0) {
        *(OwnerListBase<NI::UIA::DETAIL::EventTimerSubscription> **)this = pOVar2;
      }
      else {
        *(OwnerListBase<NI::UIA::DETAIL::EventTimerSubscription> **)(lVar1 + 8) = pOVar2;
        pOVar2 = (OwnerListBase<NI::UIA::DETAIL::EventTimerSubscription> *)plVar3[1];
      }
      if (pOVar2 == (OwnerListBase<NI::UIA::DETAIL::EventTimerSubscription> *)0x0) {
        pOVar2 = this + 8;
      }
      *(long *)pOVar2 = lVar1;
      delete(plVar3);
      plVar3 = *(long **)this;
    } while (plVar3 != (long *)0x0);
  }
  return;
}
}
