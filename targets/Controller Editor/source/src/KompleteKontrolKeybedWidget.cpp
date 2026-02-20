#include <ni/controller_editor/KompleteKontrolKeybedWidget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

KompleteKontrolKeybedWidget::~KompleteKontrolKeybedWidget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  KompleteKontrolKeybedWidget *pKVar4;
  
  *(void ***)this = &PTR__KompleteKontrolKeybedWidget_101ad6b58;
  *(void ***)(this + 0x60) = &PTR__KompleteKontrolKeybedWidget_101ad6c38;
  plVar3 = *(long **)(this + 0x428);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x418);
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
    plVar3 = *(long **)(this + 0x418);
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
  plVar3 = *(long **)(this + 0x408);
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
  pKVar4 = *(KompleteKontrolKeybedWidget **)(this + 800);
  if (this + 0x300 == pKVar4) {
    (**(code **)(*(long *)pKVar4 + 0x20))();
  }
  else if (pKVar4 != (KompleteKontrolKeybedWidget *)0x0) {
    (**(code **)(*(long *)pKVar4 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pKVar4 = *(KompleteKontrolKeybedWidget **)(this + 0x2e0);
  if (this + 0x2c0 == pKVar4) {
    (**(code **)(*(long *)pKVar4 + 0x20))();
    pKVar4 = *(KompleteKontrolKeybedWidget **)(this + 0x2b0);
    if (this + 0x290 == pKVar4) return;
  }
  else {
    if (pKVar4 != (KompleteKontrolKeybedWidget *)0x0) {
      (**(code **)(*(long *)pKVar4 + 0x28))();
    }
    pKVar4 = *(KompleteKontrolKeybedWidget **)(this + 0x2b0);
    if (this + 0x290 == pKVar4) {
      (**(code **)(*(long *)pKVar4 + 0x20))();
      return;
    }
  }
  if (pKVar4 != (KompleteKontrolKeybedWidget *)0x0) {
    (**(code **)(*(long *)pKVar4 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)this);
  return;
}
}
