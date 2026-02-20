#include <ni/controller_editor/ListBar.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void ListBar::endEdit() {
byte local_28 [16];
  void *local_18;
  
  NWL::Widget::setEnabled(*(Widget **)(this + 0x7c0),false);
  local_28[0] = 8;
  local_28[1] = 0x74;
  local_28[2] = 0x72;
  local_28[3] = 0x75;
  local_28[4] = 0x65;
  local_28[5] = 0;
  NWL::Widget::setAttribute(this,NI::symbolMouseInput,local_28);
  if ((local_28[0] & 1) != 0) {
    delete(local_18);
  }
  return;
}

ListBar::ListBar() [clone .cold.3] {
ListBar *pLVar1;
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

ListBar::~ListBar() {
long *plVar1;
  long lVar2;
  long *plVar3;
  ListBar *pLVar4;
  
  *(void ***)this = &PTR__ListBar_101af4f00;
  *(void ***)(this + 0x60) = &PTR__ListBar_101af4fe0;
  plVar3 = *(long **)(this + 0x7c8);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x7b8);
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
    plVar3 = *(long **)(this + 0x7b8);
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
  nod::signal_type<nod::multithread_policy,void(NI::UIA::MouseWheelEventData*)>::~signal_type
            ((signal_type<nod::multithread_policy,void(NI::UIA::MouseWheelEventData*)> *)
             (this + 0x6f0));
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x630));
  nod::signal_type<nod::multithread_policy,void(bool)>::~signal_type
            ((signal_type<nod::multithread_policy,void(bool)> *)(this + 0x570));
  nod::signal_type<nod::multithread_policy,void(// std code
            ((signal_type<nod::multithread_policy,void(// std code
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x3f0));
  *(void ***)this = &PTR__Bar_101b19b38;
  *(void ***)(this + 0x60) = &PTR__Bar_101b19c18;
  NWL::PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x340));
  pLVar4 = *(ListBar **)(this + 800);
  if (this + 0x300 == pLVar4) {
    (**(code **)(*(long *)pLVar4 + 0x20))();
  }
  else if (pLVar4 != (ListBar *)0x0) {
    (**(code **)(*(long *)pLVar4 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pLVar4 = *(ListBar **)(this + 0x2e0);
  if (this + 0x2c0 == pLVar4) {
    (**(code **)(*(long *)pLVar4 + 0x20))();
    pLVar4 = *(ListBar **)(this + 0x2b0);
    if (this + 0x290 == pLVar4) return;
  }
  else {
    if (pLVar4 != (ListBar *)0x0) {
      (**(code **)(*(long *)pLVar4 + 0x28))();
    }
    pLVar4 = *(ListBar **)(this + 0x2b0);
    if (this + 0x290 == pLVar4) {
      (**(code **)(*(long *)pLVar4 + 0x20))();
      return;
    }
  }
  if (pLVar4 != (ListBar *)0x0) {
    (**(code **)(*(long *)pLVar4 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)this);
  return;
}
}
