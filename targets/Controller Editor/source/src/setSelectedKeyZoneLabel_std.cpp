#include <ni/controller_editor/setSelectedKeyZoneLabel_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::KompleteKontrolModelBase {

void setSelectedKeyZoneLabel(1 param_1, std::string const& {
KompleteKontrolModelBase *pKVar1;
  KompleteKontrolModelBase *pKVar2;
  KompleteKontrolModelBase *pKVar3;
  KompleteKontrolModelBase *pKVar4;
  SelectionContentUpdateScope local_29;
  
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  pKVar1 = this + 0xcb8;
  pKVar4 = *(KompleteKontrolModelBase **)(this + 0xcb0);
  while (pKVar2 = pKVar4, pKVar2 != pKVar1) {
    // std code
    pKVar3 = *(KompleteKontrolModelBase **)(pKVar2 + 8);
    if (*(KompleteKontrolModelBase **)(pKVar2 + 8) == (KompleteKontrolModelBase *)0x0) {
      pKVar4 = *(KompleteKontrolModelBase **)(pKVar2 + 0x10);
      if (*(KompleteKontrolModelBase **)*(KompleteKontrolModelBase **)(pKVar2 + 0x10) != pKVar2) {
        do {
          pKVar2 = *(KompleteKontrolModelBase **)(pKVar2 + 0x10);
          pKVar4 = *(KompleteKontrolModelBase **)(pKVar2 + 0x10);
        } while (*(KompleteKontrolModelBase **)*(KompleteKontrolModelBase **)(pKVar2 + 0x10) !=
                 pKVar2);
      }
    }
    else {
      do {
        pKVar4 = pKVar3;
        pKVar3 = *(KompleteKontrolModelBase **)pKVar4;
      } while (pKVar3 != (KompleteKontrolModelBase *)0x0);
    }
  }
  if ((*(long *)(this + 0xcc0) != 0) && (*(KompleteKontrolModelBase **)(this + 0xcb0) != pKVar1)) {
    pKVar4 = *(KompleteKontrolModelBase **)(this + 0xcb0);
    do {
      NHL2::Komplete::KontrolMK1::MapHandler::updateKeyZone
                ((MapHandler *)(this + 0xa30),*(unsigned long *)(pKVar4 + 0x20),(KeyZone *)(pKVar4 + 0x28));
      pKVar2 = *(KompleteKontrolModelBase **)(pKVar4 + 8);
      if (*(KompleteKontrolModelBase **)(pKVar4 + 8) == (KompleteKontrolModelBase *)0x0) {
        pKVar3 = *(KompleteKontrolModelBase **)(pKVar4 + 0x10);
        if (*(KompleteKontrolModelBase **)pKVar3 != pKVar4) {
          do {
            pKVar4 = *(KompleteKontrolModelBase **)(pKVar4 + 0x10);
            pKVar3 = *(KompleteKontrolModelBase **)(pKVar4 + 0x10);
          } while (*(KompleteKontrolModelBase **)pKVar3 != pKVar4);
        }
      }
      else {
        do {
          pKVar3 = pKVar2;
          pKVar2 = *(KompleteKontrolModelBase **)pKVar3;
        } while (*(KompleteKontrolModelBase **)pKVar3 != (KompleteKontrolModelBase *)0x0);
      }
      pKVar4 = pKVar3;
    } while (pKVar3 != pKVar1);
  }
  local_29 = (SelectionContentUpdateScope)0x0;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
            ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
             (this + 0xf0),&local_29);
  return;
}
}
