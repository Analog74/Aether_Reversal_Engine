#include <ni/controller_editor/DesignWidgetTree_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::ScrollableWidget<NI::NWL::DETAIL {

void DesignWidgetTree>::~ScrollableWidget() {
long *plVar1;
  long lVar2;
  ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> *pSVar3;
  long *plVar4;
  
  *(void ***)this = &PTR__ScrollableWidget_101b152f8;
  *(void ***)(this + 0x60) = &PTR__ScrollableWidget_101b153d8;
  pSVar3 = *(ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> **)(this + 0x460);
  if (this + 0x440 == pSVar3) {
    (**(code **)(*(long *)pSVar3 + 0x20))();
    pSVar3 = *(ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> **)(this + 0x430);
    if (this + 0x410 == pSVar3) return;
    if (pSVar3 != (ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> *)0x0) {
      (**(code **)(*(long *)pSVar3 + 0x28))();
    }
    plVar4 = *(long **)(this + 0x408);
    if (plVar4 == (long *)0x0) return;
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) return;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    // std code
    plVar4 = *(long **)(this + 0x3f8);
  }
  else {
    if (pSVar3 != (ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> *)0x0) {
      (**(code **)(*(long *)pSVar3 + 0x28))();
    }
    pSVar3 = *(ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> **)(this + 0x430);
    if (this + 0x410 != pSVar3) return;
    (**(code **)(*(long *)pSVar3 + 0x20))();
    plVar4 = *(long **)(this + 0x408);
    if (plVar4 != (long *)0x0) return;
    plVar4 = *(long **)(this + 0x3f8);
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
    }
  }
  *(void ***)this = &PTR__Bar_101b19b38;
  *(void ***)(this + 0x60) = &PTR__Bar_101b19c18;
  PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x340));
  pSVar3 = *(ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> **)(this + 800);
  if (this + 0x300 == pSVar3) {
    (**(code **)(*(long *)pSVar3 + 0x20))();
  }
  else if (pSVar3 != (ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> *)0x0) {
    (**(code **)(*(long *)pSVar3 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pSVar3 = *(ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> **)(this + 0x2e0);
  if (this + 0x2c0 == pSVar3) {
    (**(code **)(*(long *)pSVar3 + 0x20))();
    pSVar3 = *(ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> **)(this + 0x2b0);
    if (this + 0x290 == pSVar3) return;
  }
  else {
    if (pSVar3 != (ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> *)0x0) {
      (**(code **)(*(long *)pSVar3 + 0x28))();
    }
    pSVar3 = *(ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> **)(this + 0x2b0);
    if (this + 0x290 == pSVar3) {
      (**(code **)(*(long *)pSVar3 + 0x20))();
      return;
    }
  }
  if (pSVar3 != (ScrollableWidget<NI::NWL::DETAIL::DesignWidgetTree> *)0x0) {
    (**(code **)(*(long *)pSVar3 + 0x28))();
  }
  Widget::~Widget((Widget *)this);
  return;
}
}
