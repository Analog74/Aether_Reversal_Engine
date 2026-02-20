#include <ni/controller_editor/IModalOverlay.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void IModalOverlay::addCloseButton() [clone .cold.1] {
if (this != (IModalOverlay *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  return;
}

IModalOverlay::IModalOverlay() [clone .cold.3] {
IModalOverlay *pIVar1;
  long lVar2;
  
  LOCK();
  pIVar1 = this + 8;
  lVar2 = *(long *)pIVar1;
  *(long *)pIVar1 = *(long *)pIVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  
}

IModalOverlay::~IModalOverlay() {
long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  IModalOverlay *pIVar6;
  void *pvVar7;
  
  *(void ***)this = &PTR__IModalOverlay_101af4bc0;
  *(void ***)(this + 0x60) = &PTR__IModalOverlay_101af4ca0;
  plVar3 = *(long **)(this + 0x520);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x510);
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
    plVar3 = *(long **)(this + 0x510);
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
  pvVar4 = *(void **)(this + 0x4f0);
  if (pvVar4 != (void *)0x0) {
    pvVar7 = *(void **)(this + 0x4f8);
    pvVar5 = pvVar4;
    if (pvVar7 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar7 + -8);
        pvVar7 = (void *)((long)pvVar7 + -0x10);
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
      } while (pvVar4 != pvVar7);
      pvVar5 = *(void **)(this + 0x4f0);
    }
    *(void **)(this + 0x4f8) = pvVar4;
    delete(pvVar5);
  }
  plVar3 = *(long **)(this + 0x4e8);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x4d8);
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
    plVar3 = *(long **)(this + 0x4d8);
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
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x410));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x3f0),*(__tree_node **)(this + 0x3f8));
  *(void ***)this = &PTR__Bar_101b19b38;
  *(void ***)(this + 0x60) = &PTR__Bar_101b19c18;
  NWL::PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x340));
  pIVar6 = *(IModalOverlay **)(this + 800);
  if (this + 0x300 == pIVar6) {
    (**(code **)(*(long *)pIVar6 + 0x20))();
  }
  else if (pIVar6 != (IModalOverlay *)0x0) {
    (**(code **)(*(long *)pIVar6 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pIVar6 = *(IModalOverlay **)(this + 0x2e0);
  if (this + 0x2c0 == pIVar6) {
    (**(code **)(*(long *)pIVar6 + 0x20))();
    pIVar6 = *(IModalOverlay **)(this + 0x2b0);
    if (this + 0x290 == pIVar6) return;
  }
  else {
    if (pIVar6 != (IModalOverlay *)0x0) {
      (**(code **)(*(long *)pIVar6 + 0x28))();
    }
    pIVar6 = *(IModalOverlay **)(this + 0x2b0);
    if (this + 0x290 == pIVar6) {
      (**(code **)(*(long *)pIVar6 + 0x20))();
      return;
    }
  }
  if (pIVar6 != (IModalOverlay *)0x0) {
    (**(code **)(*(long *)pIVar6 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)this);
  return;
}
}
