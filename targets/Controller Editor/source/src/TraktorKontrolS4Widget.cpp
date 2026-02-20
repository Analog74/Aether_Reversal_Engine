#include <ni/controller_editor/TraktorKontrolS4Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolS4Widget::choosePanelWidget(unsigned int, bool, bool) {
uint uVar1;
  
  if (*(uint *)(this + 0x7c8) != param_1) {
    *(uint *)(this + 0x7c8) = param_1;
    NWL::Stack::setTop(*(Stack **)(this + 0x7b8),param_1);
    if (param_2) {
      Model::selectDeviceSection(*(Model **)(this + 2000),*(uint *)(this + 0x7c8));
    }
  }
  if (param_3) {
    INavigationWidget::setSelectedSection
              (*(INavigationWidget **)(this + 0x738),*(uint *)(this + 0x7c8),true);
    uVar1 = (**(code **)(**(long **)(this + 2000) + 0x140))();
    if (uVar1 != *(uint *)(this + 0x7c8)) {
      Model::selectDeviceSection(*(Model **)(this + 2000),*(uint *)(this + 0x7c8));
      return;
    }
  }
  return;
}

TraktorKontrolS4Widget::~TraktorKontrolS4Widget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  *(void ***)this = &PTR__TraktorKontrolS4Widget_101ae8eb8;
  *(void ***)(this + 0x60) = &PTR__TraktorKontrolS4Widget_101ae9050;
  *(void ***)(this + 0x3f0) = &PTR__TraktorKontrolS4Widget_101ae9080;
  *(void ***)(this + 0x6d0) = &PTR__TraktorKontrolS4Widget_101ae90b8;
  plVar3 = *(long **)(this + 0x7c0);
  if (plVar3 == (long *)0x0) {
    lVar2 = *(long *)(this + 0x7b0);
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
    lVar2 = *(long *)(this + 0x7b0);
  }
  if (lVar2 != 0) {
    // std code
  }
  plVar3 = *(long **)(this + 0x7a0);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x790);
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
    plVar3 = *(long **)(this + 0x790);
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
  plVar3 = *(long **)(this + 0x780);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x770);
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
    plVar3 = *(long **)(this + 0x770);
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
  plVar3 = *(long **)(this + 0x760);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x750);
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
    plVar3 = *(long **)(this + 0x750);
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
  plVar3 = *(long **)(this + 0x740);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      pvVar4 = *(void **)(this + 0x720);
      goto joined_r0x0001001cad9d;
    }
  }
  pvVar4 = *(void **)(this + 0x720);
joined_r0x0001001cad9d:
  if (pvVar4 != (void *)0x0) {
    pvVar6 = *(void **)(this + 0x728);
    pvVar5 = pvVar4;
    if (pvVar6 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar6 + -8);
        pvVar6 = (void *)((long)pvVar6 + -0x10);
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
      } while (pvVar4 != pvVar6);
      pvVar5 = *(void **)(this + 0x720);
    }
    *(void **)(this + 0x728) = pvVar4;
    delete(pvVar5);
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x708),*(__tree_node **)(this + 0x710));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x6f0),*(__tree_node **)(this + 0x6f8));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x6d8),*(__tree_node **)(this + 0x6e0));
  ControllerWidget::~ControllerWidget((ControllerWidget *)this);
  return;
}
}
