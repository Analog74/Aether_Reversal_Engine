#include <ni/controller_editor/SelectableTextEdit.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

SelectableTextEdit::SelectableTextEdit() [clone .cold.5] {
SelectableTextEdit *pSVar1;
  long lVar2;
  
  LOCK();
  pSVar1 = this + 8;
  lVar2 = *(long *)pSVar1;
  *(long *)pSVar1 = *(long *)pSVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  
}

void SelectableTextEdit::switchToButton() {
byte local_28 [16];
  void *local_18;
  
  TextPanel<NI::NWL::Button>::setText
            (*(TextPanel<NI::NWL::Button> **)(this + 0x480),
             (string *)(*(long *)(this + 0x490) + 0x840));
  if (*(int *)(this + 0x2f0) != 0) {
    *(unsigned int *)(this + 0x2f0) = 0;
    Widget::setAlign((Widget *)this);
  }
  local_28[0] = 10;
  local_28[1] = 0x66;
  local_28[2] = 0x61;
  local_28[3] = 0x6c;
  local_28[4] = 0x73;
  local_28[5] = 0x65;
  local_28[6] = 0;
  Widget::setAttribute(this,properties::isInput,local_28);
  if ((local_28[0] & 1) != 0) {
    delete(local_18);
  }
  nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x3c0));
  return;
}

SelectableTextEdit::~SelectableTextEdit() {
long *plVar1;
  long lVar2;
  long *plVar3;
  SelectableTextEdit *pSVar4;
  
  *(void ***)this = &PTR__SelectableTextEdit_101b149e0;
  *(void ***)(this + 0x60) = &PTR__SelectableTextEdit_101b14ac0;
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
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x3c0));
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x300));
  *(void ***)this = &PTR__WidgetTemplate_101b18ef0;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18fd0;
  pSVar4 = *(SelectableTextEdit **)(this + 0x2e0);
  if (this + 0x2c0 == pSVar4) {
    (**(code **)(*(long *)pSVar4 + 0x20))();
    pSVar4 = *(SelectableTextEdit **)(this + 0x2b0);
    if (this + 0x290 == pSVar4) return;
  }
  else {
    if (pSVar4 != (SelectableTextEdit *)0x0) {
      (**(code **)(*(long *)pSVar4 + 0x28))();
    }
    pSVar4 = *(SelectableTextEdit **)(this + 0x2b0);
    if (this + 0x290 == pSVar4) {
      (**(code **)(*(long *)pSVar4 + 0x20))();
      return;
    }
  }
  if (pSVar4 != (SelectableTextEdit *)0x0) {
    (**(code **)(*(long *)pSVar4 + 0x28))();
  }
  Widget::~Widget((Widget *)this);
  return;
}
}
