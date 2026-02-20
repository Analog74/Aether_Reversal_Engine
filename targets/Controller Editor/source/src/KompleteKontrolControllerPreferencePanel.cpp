#include <ni/controller_editor/KompleteKontrolControllerPreferencePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void KompleteKontrolControllerPreferencePanel::changeSustainPedalMode(unsigned int) {
Widget *this_00;
  byte bVar1;
  bool bVar2;
  uint local_28;
  unsigned long long uStack_24;
  unsigned int uStack_1c;
  
  uStack_24 = 0x146533043;
  uStack_1c = 0;
  local_28 = param_1;
  (**(code **)(*(long *)(*(long *)(this + 0x420) + 0x7d8) + 0x10))
            (*(long *)(this + 0x420) + 0x7d8,&local_28);
  if (this[0x4a2] == (KompleteKontrolControllerPreferencePanel)0x0) {
    this_00 = *(Widget **)(this + 0x470);
    bVar2 = false;
  }
  else {
    local_28 = 0;
    uStack_24 = 0x146533043;
    uStack_1c = 0;
    bVar1 = (**(code **)(*(long *)(*(long *)(this + 0x420) + 0x7d8) + 0x18))
                      (*(long *)(this + 0x420) + 0x7d8,&local_28);
    bVar2 = (bool)(local_28 != 0 & bVar1);
    this_00 = *(Widget **)(this + 0x470);
  }
  if (this_00 != (Widget *)0x0) {
    NWL::Widget::setActive(this_00,bVar2);
  }
  if (*(Widget **)(this + 0x480) != (Widget *)0x0) {
    NWL::Widget::setActive(*(Widget **)(this + 0x480),bVar2);
  }
  if (*(Widget **)(this + 0x490) != (Widget *)0x0) {
    NWL::Widget::setActive(*(Widget **)(this + 0x490),bVar2);
  }
  return;
}

KompleteKontrolControllerPreferencePanel::~KompleteKontrolControllerPreferencePanel() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__KompleteKontrolControllerPreferencePanel_101ad8c88;
  *(void ***)(this + 0x60) = &PTR__KompleteKontrolControllerPreferencePanel_101ad8d98;
  plVar3 = *(long **)(this + 0x498);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x488);
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) return;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    // std code
    plVar3 = *(long **)(this + 0x488);
  }
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
  plVar3 = *(long **)(this + 0x478);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x468);
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) return;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    // std code
    plVar3 = *(long **)(this + 0x468);
  }
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
  plVar3 = *(long **)(this + 0x458);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      plVar3 = *(long **)(this + 0x448);
      goto joined_r0x0001000e5caf;
    }
  }
  plVar3 = *(long **)(this + 0x448);
joined_r0x0001000e5caf:
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
  plVar3 = *(long **)(this + 0x438);
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
  PreferencePanelWithModelAndController<NI::KompleteKontrolInstanceModel,NI::KompleteKontrolController>
  ::~PreferencePanelWithModelAndController
            ((PreferencePanelWithModelAndController<NI::KompleteKontrolInstanceModel,NI::KompleteKontrolController>
              *)this);
  return;
}
}
