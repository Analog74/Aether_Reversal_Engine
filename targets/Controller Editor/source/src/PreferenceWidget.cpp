#include <ni/controller_editor/PreferenceWidget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void PreferenceWidget::createControllerPrefs() [clone .cold.1] {
PreferenceWidget *pPVar1;
  long lVar2;
  
  LOCK();
  pPVar1 = this + 8;
  lVar2 = *(long *)pPVar1;
  *(long *)pPVar1 = *(long *)pPVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void PreferenceWidget::createGeneralPrefs() [clone .cold.10] {
PreferenceWidget *pPVar1;
  long lVar2;
  
  LOCK();
  pPVar1 = this + 8;
  lVar2 = *(long *)pPVar1;
  *(long *)pPVar1 = *(long *)pPVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void PreferenceWidget::fillDeviceMenu(bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  void7 in_register_00000039;
  
  LOCK();
  plVar1 = (long *)0(in_register_00000039,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)0(in_register_00000039,param_1) + 0x10))();
    // std code
  }
  return;
}

void PreferenceWidget::onAnyCapacitiveTouchChange(bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  void7 in_register_00000039;
  
  LOCK();
  plVar1 = (long *)0(in_register_00000039,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)0(in_register_00000039,param_1) + 0x10))();
  // std code
  return;
}

void PreferenceWidget::onChildsAligned() [clone .cold.1] {
PreferenceWidget *pPVar1;
  long lVar2;
  
  LOCK();
  pPVar1 = this + 8;
  lVar2 = *(long *)pPVar1;
  *(long *)pPVar1 = *(long *)pPVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void PreferenceWidget::onPreferenceDialogClosed() [clone .cold.1] {
PreferenceWidget *pPVar1;
  long lVar2;
  
  LOCK();
  pPVar1 = this + 8;
  lVar2 = *(long *)pPVar1;
  *(long *)pPVar1 = *(long *)pPVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x10))();
  // std code
  return;
}

void PreferenceWidget::onScrollbarChange() [clone .cold.1] {
PreferenceWidget *pPVar1;
  long lVar2;
  
  LOCK();
  pPVar1 = this + 8;
  lVar2 = *(long *)pPVar1;
  *(long *)pPVar1 = *(long *)pPVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void PreferenceWidget::onScrollbarRequiredCheck() {
long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  Widget *pWVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  int local_38;
  int local_34;
  
  if (*(long *)(this + 0x408) == 0) {
    return;
  }
  if ((*(uint *)(*(long *)(this + 0x408) + 0x1e8) & 5) != 5) {
    return;
  }
  if (*(long *)(this + 0x428) == 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(this + 0x418) + 0x120);
  lVar7 = (long)*(int *)(*(long *)(this + 0x418) + 0x2f0) * 0x10;
  lVar4 = *(long *)(lVar3 + lVar7);
  plVar9 = *(long **)(lVar3 + 8 + lVar7);
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == 0) ||
     (pWVar8 = (Widget *)___dynamic_cast(lVar4,&NWL::Widget::typeinfo,&PreferencePanel::typeinfo,0),
     pWVar8 == (Widget *)0x0)) {
    pWVar8 = (Widget *)0x0;
    plVar13 = (long *)0x0;
    if (plVar9 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar9 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      // std code
    }
    if (pWVar8 == (Widget *)0x0) return;
    if (plVar13 == (long *)0x0) {
      bVar6 = true;
      plVar13 = (long *)0x0;
    }
    else {
      LOCK();
      plVar13[1] = plVar13[1] + 1;
      UNLOCK();
      bVar6 = false;
    }
  }
  else {
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      plVar13 = plVar9;
      return;
    }
    plVar13 = (long *)0x0;
    bVar6 = true;
  }
  iVar11 = 0;
  if ((*(uint *)(pWVar8 + 0x1e8) & 5) == 5) {
    iVar2 = *(int *)(pWVar8 + 0x2f4);
    iVar11 = iVar2;
    iVar10 = iVar2;
    for (plVar9 = *(long **)(pWVar8 + 0x120); plVar9 != *(long **)(pWVar8 + 0x128);
        plVar9 = plVar9 + 2) {
      lVar3 = *plVar9;
      if (((*(uint *)(lVar3 + 0x1e8) & 5) == 5) &&
         (iVar12 = *(int *)(lVar3 + 0x17c) + *(int *)(lVar3 + 0x144) + *(int *)(lVar3 + 0x1ac) +
                   *(int *)(lVar3 + 0x1a4), bVar5 = iVar11 < iVar12, iVar11 = iVar10, bVar5)) {
        iVar11 = iVar12;
        iVar10 = iVar12;
      }
    }
    iVar11 = iVar11 + iVar2;
  }
  if (bVar6) {
    plVar13 = (long *)0x0;
  }
  else {
    LOCK();
    plVar9 = plVar13 + 1;
    lVar3 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      // std code
    }
  }
  if ((500 < iVar11 != ((*(uint *)(*(Widget **)(this + 0x428) + 0x1e8) & 5) == 5)) &&
     (NWL::Widget::setActive(*(Widget **)(this + 0x428),500 < iVar11), 500 < iVar11)) {
    local_38 = *(int *)(pWVar8 + 0x178);
    local_34 = iVar11;
    NWL::Widget::setSize(pWVar8,(Point *)&local_38);
    lVar3 = *(long *)(this + 0x408);
    lVar4 = *(long *)(this + 0x418);
    lVar7 = lVar3;
    if (*(long *)(this + 0x138) != 0) {
      NWL::Widget::removeFromCache(*(Widget **)(this + 0x428));
      NWL::Widget::reloadStyleSheetValues(*(Widget **)(this + 0x428));
      lVar7 = *(long *)(this + 0x408);
    }
    pWVar8 = *(Widget **)(this + 0x428);
    local_38 = (*(int *)(lVar3 + 0x150) + *(int *)(pWVar8 + 0x1a0) + *(int *)(lVar7 + 0x178)) -
               *(int *)(pWVar8 + 0x178);
    local_34 = *(unsigned int *)(lVar4 + 0x154);
    NWL::Widget::setPos(pWVar8,(Point *)&local_38);
    local_38 = *(int *)(*(Widget **)(this + 0x428) + 0x178);
    local_34 = 0x1e2;
    NWL::Widget::setSize(*(Widget **)(this + 0x428),(Point *)&local_38);
    NWL::Scrollbar::setRange(*(Scrollbar **)(this + 0x428),iVar11,0x1e2);
    NWL::Scrollbar::setValue(*(Scrollbar **)(this + 0x428),0,true);
    NWL::Widget::toFront(*(Widget **)(this + 0x428));
  }
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar9 = plVar13 + 1;
    lVar3 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      // std code
    }
  }
  return;
}

void PreferenceWidget::selectTab(int param_1) {
}

void PreferenceWidget::updateSelectedPreferenceWidget() {
uint uVar1;
  unsigned long long uVar2;
  long *plVar3;
  PreferenceWidget *this;
  void **ppuVar4;
  
  uVar2 = UIA::Application::getApplication();
  ppuVar4 = &NWL::App::typeinfo;
  plVar3 = (long *)___dynamic_cast(uVar2,&NWL::App::typeinfo,&ControllerEditorApp::typeinfo,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3);
  this = (PreferenceWidget *)(**(code **)(*plVar3 + 0x60))(plVar3);
  if (this != (PreferenceWidget *)0x0) {
    if ((*(long *)(this + 0x408) == 0) ||
       (uVar1 = *(uint *)(*(long *)(this + 0x408) + 0x2f0), uVar1 == 0xffffffff)) {
      onDeviceChange(this);
      NWL::Widget::setInvalid((Widget *)this,0);
      NWL::Widget::setAlign((Widget *)this);
      return;
    }
    selectItem(this,(string *)ppuVar4,uVar1);
  }
  return;
}

PreferenceWidget::~PreferenceWidget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  PreferenceWidget *pPVar6;
  void *pvVar7;
  
  *(void ***)this = &PTR__PreferenceWidget_101af5348;
  *(void ***)(this + 0x60) = &PTR__PreferenceWidget_101af5428;
  plVar3 = *(long **)(this + 0x430);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x420);
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
    plVar3 = *(long **)(this + 0x420);
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
  plVar3 = *(long **)(this + 0x410);
  if (plVar3 == (long *)0x0) {
    pvVar4 = *(void **)(this + 0x3f0);
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
    pvVar4 = *(void **)(this + 0x3f0);
  }
  if (pvVar4 != (void *)0x0) {
    pvVar7 = *(void **)(this + 0x3f8);
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
      pvVar5 = *(void **)(this + 0x3f0);
    }
    *(void **)(this + 0x3f8) = pvVar4;
    delete(pvVar5);
  }
  *(void ***)this = &PTR__Bar_101b19b38;
  *(void ***)(this + 0x60) = &PTR__Bar_101b19c18;
  NWL::PanelDrawer::~PanelDrawer((PanelDrawer *)(this + 0x340));
  pPVar6 = *(PreferenceWidget **)(this + 800);
  if (this + 0x300 == pPVar6) {
    (**(code **)(*(long *)pPVar6 + 0x20))();
  }
  else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, pPVar6 != (PreferenceWidget *0x0 {
    (**(code **(*(long *pPVar6 + 0x28))();
  }
  *(void ***)this = &PTR__WidgetTemplate_101b18780;
  *(void ***)(this + 0x60) = &PTR__WidgetTemplate_101b18860;
  pPVar6 = *(PreferenceWidget **)(this + 0x2e0);
  if (this + 0x2c0 == pPVar6) {
    (**(code **)(*(long *)pPVar6 + 0x20))();
    pPVar6 = *(PreferenceWidget **)(this + 0x2b0);
    if (this + 0x290 == pPVar6) return;
  }
  else {
    if (pPVar6 != (PreferenceWidget *)0x0) {
      (**(code **)(*(long *)pPVar6 + 0x28))();
    }
    pPVar6 = *(PreferenceWidget **)(this + 0x2b0);
    if (this + 0x290 == pPVar6) {
      (**(code **)(*(long *)pPVar6 + 0x20))();
      return;
    }
  }
  if (pPVar6 != (PreferenceWidget *)0x0) {
    (**(code **)(*(long *)pPVar6 + 0x28))();
  }
  NWL::Widget::~Widget((Widget *)this);
  return;
}
}
