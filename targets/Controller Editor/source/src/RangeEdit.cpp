#include <ni/controller_editor/RangeEdit.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void RangeEdit::onMaxValueChanged(int param_1) {
}

void RangeEdit::onMinValueChanged(int param_1) {
}

RangeEdit::~RangeEdit() {
long *plVar1;
  long lVar2;
  long *plVar3;
  RangeEdit *pRVar4;
  
  *(void ***)this = &PTR__RangeEdit_101af42b8;
  *(void ***)(this + 0x60) = &PTR__RangeEdit_101af4398;
  nod::signal_type<nod::multithread_policy,void(int)>::~signal_type
            ((signal_type<nod::multithread_policy,void(int)> *)(this + 0x5a0));
  nod::signal_type<nod::multithread_policy,void(int)>::~signal_type
            ((signal_type<nod::multithread_policy,void(int)> *)(this + 0x4e0));
  nod::signal_type<nod::multithread_policy,void(int)>::~signal_type
            ((signal_type<nod::multithread_policy,void(int)> *)(this + 0x420));
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
  pRVar4 = *(RangeEdit **)(this + 800);
  if (this + 0x300 == pRVar4) {
    (**(code **)(*(long *)pRVar4 + 0x20))();
  }
  else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, pRVar4 != (RangeEdit *0x0 {
    (**(code **(*(long *pRVar4 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pRVar4 = *(RangeEdit **)(this + 0x2e0);
  if (this + 0x2c0 == pRVar4) {
    (**(code **)(*(long *)pRVar4 + 0x20))();
    pRVar4 = *(RangeEdit **)(this + 0x2b0);
    if (this + 0x290 == pRVar4) return;
  }
  else {
    if (pRVar4 != (RangeEdit *)0x0) {
      (**(code **)(*(long *)pRVar4 + 0x28))();
    }
    pRVar4 = *(RangeEdit **)(this + 0x2b0);
    if (this + 0x290 == pRVar4) {
      (**(code **)(*(long *)pRVar4 + 0x20))();
      return;
    }
  }
  if (pRVar4 != (RangeEdit *)0x0) {
    (**(code **)(*(long *)pRVar4 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)this);
  return;
}
}
