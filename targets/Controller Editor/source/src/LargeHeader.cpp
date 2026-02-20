#include <ni/controller_editor/LargeHeader.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void LargeHeader::connectController(int param_1) {
}

void LargeHeader::controllerSelectionChanged(unsigned int) {
ControllerManager *this_00;
  
  this_00 = (ControllerManager *)ControllerManager::getInstance();
  ControllerManager::selectController(this_00,param_1);
  updateSelectedController(this);
  return;
}

LargeHeader::LargeHeader() [clone .cold.5] {
LargeHeader *pLVar1;
  long lVar2;
  
  LOCK();
  pLVar1 = this + 8;
  lVar2 = *(long *)pLVar1;
  *(long *)pLVar1 = *(long *)pLVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  
}

void LargeHeader::onSubmitButton() {
long lVar1;
  
  lVar1 = ControllerManager::getInstance();
  if (*(long **)(lVar1 + 0x208) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100262859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x208) + 0x80))();
    return;
  }
  return;
}

void LargeHeader::updateSelectedController() {
unsigned long long *puVar1;
  long *plVar2;
  Switcher *this_00;
  bool bVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  Widget *pWVar10;
  unsigned long long *puVar11;
  TextPanel<NI::NWL::Button> *this_01;
  __bind local_b8 [8];
  long local_b0;
  __bind local_a0 [8];
  long local_98;
  __bind local_88 [8];
  long local_80;
  __bind local_70 [8];
  long local_68;
  long *local_58;
  long *local_50;
  code *local_48;
  unsigned long long local_40;
  LargeHeader *local_38;
  
  lVar6 = ControllerManager::getInstance();
  if ((lVar6 != 0) && (local_50 = *(long **)(lVar6 + 0x208), local_50 != (long *)0x0)) {
    this_01 = *(TextPanel<NI::NWL::Button> **)(this + 0x410);
    if ((*(uint *)(this_01 + 0x1e8) & 5) != 5) {
      lVar7 = ControllerManager::getInstance();
      if (*(long *)(lVar7 + 0x110) == *(long *)(lVar7 + 0x118)) {
        pWVar10 = *(Widget **)(this + 0x410);
        bVar3 = false;
      }
      else {
        puVar11 = *(unsigned long long **)(lVar6 + 0x110);
        puVar1 = *(unsigned long long **)(lVar6 + 0x118);
        if (puVar11 != puVar1) {
          do {
            (**(code **)(*(long *)*puVar11 + 0x10))();
            local_48 = deviceChanged;
            local_40 = 0;
            local_38 = this;
            nod::signal_type<nod::multithread_policy,void(NI::Model*,bool)>::
            connect<// std code
                      (local_b8);
            if (local_b0 != 0) {
              // std code
            }
            (**(code **)(*(long *)*puVar11 + 0x10))();
            local_48 = focusChanged;
            local_40 = 0;
            local_38 = this;
            nod::signal_type<nod::multithread_policy,void(NI::Model*,bool)>::
            connect<// std code
                      (local_a0);
            if (local_98 != 0) {
              // std code
            }
            puVar11 = puVar11 + 1;
          } while (puVar1 != puVar11);
        }
        pWVar10 = *(Widget **)(this + 0x410);
        bVar3 = true;
      }
      NWL::Widget::setActive(pWVar10,bVar3);
      lVar6 = *(long *)(this + 0x400);
      // std code
      lVar7 = *(long *)(lVar6 + 0x4d8);
      if (lVar7 != 0) {
        plVar8 = *(long **)(lVar6 + 0x4d0);
        do {
          lVar7 = lVar7 + -1;
          plVar2 = (long *)plVar8[4];
          if (plVar8 == plVar2) {
            (**(code **)(*plVar2 + 0x20))();
          }
          else if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x28))();
          }
          plVar8 = plVar8 + 6;
        } while (lVar7 != 0);
      }
      *(unsigned long long *)(lVar6 + 0x4d8) = 0;
      *(unsigned long long *)(lVar6 + 0x520) = 0;
      nod::signal_type<nod::multithread_policy,void(NI::NWL::ButtonImpl::tSignalData_const*)>::
      invalidate_disconnector
                ((signal_type<nod::multithread_policy,void(NI::NWL::ButtonImpl::tSignalData_const*)>
                  *)(lVar6 + 0x490));
      // std code
      local_48 = onSubmitButton;
      local_40 = 0;
      local_38 = this;
      nod::signal_type<nod::multithread_policy,void(NI::NWL::ButtonImpl::tSignalData_const*)>::
      connect<// std code
      if (local_80 != 0) {
        // std code
      }
      this_01 = *(TextPanel<NI::NWL::Button> **)(this + 0x410);
    }
    plVar8 = local_50;
    (**(code **)(*local_50 + 0x20))((string *)&local_48,local_50);
    NWL::TextPanel<NI::NWL::Button>::setText(this_01,(string *)&local_48);
    if (((unsigned long)local_48 & 1) != 0) {
      delete(local_38);
    }
    local_58 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
    pWVar10 = *(Widget **)(this + 0x3f0);
    bVar3 = (bool)(**(code **)(*local_58 + 400))();
    NWL::Widget::setEnabled(pWVar10,bVar3);
    lVar6 = *(long *)(this + 0x3f0);
    // std code
    lVar7 = *(long *)(lVar6 + 0x418);
    if (lVar7 != 0) {
      plVar8 = *(long **)(lVar6 + 0x410);
      do {
        lVar7 = lVar7 + -1;
        plVar2 = (long *)plVar8[4];
        if (plVar8 == plVar2) {
          (**(code **)(*plVar2 + 0x20))();
        }
        else if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
        plVar8 = plVar8 + 6;
      } while (lVar7 != 0);
    }
    *(unsigned long long *)(lVar6 + 0x418) = 0;
    *(unsigned long long *)(lVar6 + 0x460) = 0;
    nod::signal_type<nod::multithread_policy,void(int)>::invalidate_disconnector
              ((signal_type<nod::multithread_policy,void(int)> *)(lVar6 + 0x3d0));
    // std code
    local_48 = connectController;
    local_40 = 0;
    local_38 = this;
    nod::signal_type<nod::multithread_policy,void(int)>::
    connect<// std code
              (local_70);
    if (local_68 != 0) {
      // std code
    }
    plVar8 = local_58;
    cVar4 = (**(code **)(*local_58 + 400))(local_58);
    plVar2 = local_50;
    this_00 = *(Switcher **)(this + 0x3f0);
    uVar9 = 0;
    if (cVar4 != '\0') {
      bVar5 = (**(code **)(*plVar8 + 0x1a0))(plVar8);
      uVar9 = (uint)bVar5;
    }
    NWL::Switcher::setValue(this_00,uVar9,false);
    NWL::Widget::setInvalid(*(Widget **)(this + 0x3f0),0);
    NWL::Widget::setAlign(*(Widget **)(this + 0x3f0));
    pWVar10 = *(Widget **)(this + 0x400);
    bVar3 = (bool)(**(code **)(*plVar2 + 0x70))(plVar2);
    NWL::Widget::setVisible(pWVar10,bVar3);
    pWVar10 = *(Widget **)(this + 0x400);
    bVar3 = (bool)(**(code **)(*plVar2 + 0x78))(plVar2);
    NWL::Widget::setEnabled(pWVar10,bVar3);
    NWL::Widget::setInvalid(*(Widget **)(this + 0x400),0);
    NWL::Widget::setAlign(*(Widget **)(this + 0x400));
    return;
  }
  NWL::Widget::setEnabled(*(Widget **)(this + 0x3f0),false);
  lVar6 = *(long *)(this + 0x3f0);
  // std code
  lVar7 = *(long *)(lVar6 + 0x418);
  if (lVar7 != 0) {
    plVar8 = *(long **)(lVar6 + 0x410);
    do {
      lVar7 = lVar7 + -1;
      plVar2 = (long *)plVar8[4];
      if (plVar8 == plVar2) {
        (**(code **)(*plVar2 + 0x20))();
      }
      else if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      plVar8 = plVar8 + 6;
    } while (lVar7 != 0);
  }
  *(unsigned long long *)(lVar6 + 0x418) = 0;
  *(unsigned long long *)(lVar6 + 0x460) = 0;
  nod::signal_type<nod::multithread_policy,void(int)>::invalidate_disconnector
            ((signal_type<nod::multithread_policy,void(int)> *)(lVar6 + 0x3d0));
  // std code
  NWL::Switcher::setValue(*(Switcher **)(this + 0x3f0),0,false);
  NWL::Widget::setInvalid(*(Widget **)(this + 0x3f0),0);
  NWL::Widget::setAlign(*(Widget **)(this + 0x3f0));
  return;
}

LargeHeader::~LargeHeader() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__LargeHeader_101af49a0;
  *(void ***)(this + 0x60) = &PTR__LargeHeader_101af4a80;
  plVar3 = *(long **)(this + 0x418);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      plVar3 = *(long **)(this + 0x408);
      goto joined_r0x00010029cc09;
    }
  }
  plVar3 = *(long **)(this + 0x408);
joined_r0x00010029cc09:
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
  plVar3 = *(long **)(this + 0x3f8);
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
  ControllerHeader::~ControllerHeader((ControllerHeader *)this);
  return;
}
}
