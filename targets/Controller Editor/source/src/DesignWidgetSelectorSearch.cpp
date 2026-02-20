#include <ni/controller_editor/DesignWidgetSelectorSearch.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::DETAIL {

DesignWidgetSelectorSearch::~DesignWidgetSelectorSearch() {
long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  DesignWidgetSelectorSearch *pDVar6;
  void *pvVar7;
  
  *(void ***)this = &PTR__DesignWidgetSelectorSearch_101b13430;
  *(void ***)(this + 0x60) = &PTR__DesignWidgetSelectorSearch_101b13510;
  pvVar3 = *(void **)(this + 0x400);
  if (pvVar3 != (void *)0x0) {
    pvVar7 = *(void **)(this + 0x408);
    pvVar5 = pvVar3;
    if (pvVar7 != pvVar3) {
      do {
        plVar4 = *(long **)((long)pvVar7 + -8);
        pvVar7 = (void *)((long)pvVar7 + -0x10);
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
      } while (pvVar3 != pvVar7);
      pvVar5 = *(void **)(this + 0x400);
    }
    *(void **)(this + 0x408) = pvVar3;
    delete(pvVar5);
  }
  plVar4 = *(long **)(this + 0x3f8);
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
  pDVar6 = *(DesignWidgetSelectorSearch **)(this + 800);
  if (this + 0x300 == pDVar6) {
    (**(code **)(*(long *)pDVar6 + 0x20))();
  }
  else if (pDVar6 != (DesignWidgetSelectorSearch *)0x0) {
    (**(code **)(*(long *)pDVar6 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pDVar6 = *(DesignWidgetSelectorSearch **)(this + 0x2e0);
  if (this + 0x2c0 == pDVar6) {
    (**(code **)(*(long *)pDVar6 + 0x20))();
    pDVar6 = *(DesignWidgetSelectorSearch **)(this + 0x2b0);
    if (this + 0x290 == pDVar6) return;
  }
  else {
    if (pDVar6 != (DesignWidgetSelectorSearch *)0x0) {
      (**(code **)(*(long *)pDVar6 + 0x28))();
    }
    pDVar6 = *(DesignWidgetSelectorSearch **)(this + 0x2b0);
    if (this + 0x290 == pDVar6) {
      (**(code **)(*(long *)pDVar6 + 0x20))();
      return;
    }
  }
  if (pDVar6 != (DesignWidgetSelectorSearch *)0x0) {
    (**(code **)(*(long *)pDVar6 + 0x28))();
  }
  Widget::~Widget((Widget *)this);
  return;
}
}
