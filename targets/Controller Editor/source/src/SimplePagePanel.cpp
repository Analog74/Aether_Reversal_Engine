#include <ni/controller_editor/SimplePagePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void SimplePagePanel::onPagesEnabledStateChanged() {
(**(code **)(**(long **)(this + 0x3f0) + 0x20))
            (*(long **)(this + 0x3f0),*(unsigned int *)(this + 0x3f8),0,0);
  NWL::Widget::setAlign((Widget *)this);
  return;
}

void SimplePagePanel::onRecalculateLayout() {
long lVar1;
  long lVar2;
  unsigned int local_18;
  unsigned int local_14;
  
  lVar2 = *(long *)(this + 0x410);
  lVar1 = *(long *)(this + 0x400);
  lVar2 = (long)(*(int *)(lVar2 + 0x1ac) + *(int *)(lVar2 + 0x17c) + *(int *)(lVar2 + 0x1a4)) +
          (long)*(int *)(this + 0x194) + (long)*(int *)(this + 0x19c);
  if ((*(uint *)(lVar1 + 0x1e8) & 5) == 5) {
    lVar2 = lVar2 + (*(int *)(lVar1 + 0x1ac) + *(int *)(lVar1 + 0x17c) + *(int *)(lVar1 + 0x1a4)) +
            (long)*(int *)(this + 0x2f4);
  }
  lVar1 = *(long *)(this + 0x430);
  if ((*(uint *)(lVar1 + 0x1e8) & 5) == 5) {
    lVar2 = lVar2 + (*(int *)(lVar1 + 0x1ac) + *(int *)(lVar1 + 0x17c) + *(int *)(lVar1 + 0x1a4)) +
            (long)*(int *)(this + 0x2f4);
  }
  if (lVar2 != *(int *)(this + 0x17c)) {
    _local_18 = CONCAT44((int)lVar2,*(unsigned int *)(this + 0x178));
    NWL::Widget::setSize((Widget *)this,(Point *)&local_18);
    nod::signal_type<nod::multithread_policy,void()>::operator()
              ((signal_type<nod::multithread_policy,void()> *)(this + 0x480));
    return;
  }
  return;
}

SimplePagePanel::~SimplePagePanel() {
long *plVar1;
  long lVar2;
  long *plVar3;
  SimplePagePanel *pSVar4;
  
  *(void ***)this = &PTR__SimplePagePanel_101af5230;
  *(void ***)(this + 0x60) = &PTR__SimplePagePanel_101af5318;
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x480));
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
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x448);
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
    plVar3 = *(long **)(this + 0x448);
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
  plVar3 = *(long **)(this + 0x438);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x428);
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
    plVar3 = *(long **)(this + 0x428);
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
  plVar3 = *(long **)(this + 0x418);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x408);
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
    plVar3 = *(long **)(this + 0x408);
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
  *(void ***)this = &PTR__Bar_101b19b38;
  *(void ***)(this + 0x60) = &PTR__Bar_101b19c18;
  NWL::PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x340));
  pSVar4 = *(SimplePagePanel **)(this + 800);
  if (this + 0x300 == pSVar4) {
    (**(code **)(*(long *)pSVar4 + 0x20))();
  }
  else if (pSVar4 != (SimplePagePanel *)0x0) {
    (**(code **)(*(long *)pSVar4 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pSVar4 = *(SimplePagePanel **)(this + 0x2e0);
  if (this + 0x2c0 == pSVar4) {
    (**(code **)(*(long *)pSVar4 + 0x20))();
    pSVar4 = *(SimplePagePanel **)(this + 0x2b0);
    if (this + 0x290 == pSVar4) return;
  }
  else {
    if (pSVar4 != (SimplePagePanel *)0x0) {
      (**(code **)(*(long *)pSVar4 + 0x28))();
    }
    pSVar4 = *(SimplePagePanel **)(this + 0x2b0);
    if (this + 0x290 == pSVar4) {
      (**(code **)(*(long *)pSVar4 + 0x20))();
      return;
    }
  }
  if (pSVar4 != (SimplePagePanel *)0x0) {
    (**(code **)(*(long *)pSVar4 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)this);
  return;
}
}
