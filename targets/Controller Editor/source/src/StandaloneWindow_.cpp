#include <ni/controller_editor/StandaloneWindow_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Window<NI::UIA {

void StandaloneWindow>::performRedraw(bool param_1) {
}

void StandaloneWindow>::redrawWholeWindow() {
Region *this_00;
  long lVar1;
  Window<NI::UIA::StandaloneWindow> *pWVar2;
  ListItem *pLVar3;
  
  this_00 = (Region *)(this + 600);
  Pane::update((Pane *)(this + 0x30),this_00);
  if ((*(long *)(this + 600) == 0) &&
     ((*(int *)(this + 0x274) <= *(int *)(this + 0x26c) ||
      (*(int *)(this + 0x278) <= *(int *)(this + 0x270))))) {
    *(unsigned long long *)(this + 0x26c) = 0;
    *(unsigned long long *)(this + 0x274) = 0;
  }
  else {
    UIA::WindowBase::invalidateRegion((Region *)this);
    pLVar3 = *(ListItem **)(this + 600);
    *(unsigned long long *)(this + 0x26c) = 0;
    *(unsigned long long *)(this + 0x274) = 0;
    if (pLVar3 != (ListItem *)0x0) {
      do {
        lVar1 = *(long *)pLVar3;
        pWVar2 = *(Window<NI::UIA::StandaloneWindow> **)(pLVar3 + 8);
        if (lVar1 == 0) {
          *(Window<NI::UIA::StandaloneWindow> **)this_00 = pWVar2;
        }
        else {
          *(Window<NI::UIA::StandaloneWindow> **)(lVar1 + 8) = pWVar2;
          pWVar2 = *(Window<NI::UIA::StandaloneWindow> **)(pLVar3 + 8);
        }
        if (pWVar2 == (Window<NI::UIA::StandaloneWindow> *)0x0) {
          pWVar2 = this + 0x260;
        }
        *(long *)pWVar2 = lVar1;
        GP::Region::implDeleteItem(this_00,pLVar3);
        pLVar3 = *(ListItem **)this_00;
      } while (pLVar3 != (ListItem *)0x0);
    }
  }
  *(unsigned int *)(this + 0x268) = 0;
  performRedraw(this,true);
  return;
}
}
