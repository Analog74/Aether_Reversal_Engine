#include <ni/controller_editor/TraktorKontrolS2Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

TraktorKontrolS2Widget::~TraktorKontrolS2Widget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  *(void ***)this = &PTR__TraktorKontrolS2Widget_101ae6858;
  *(void ***)(this + 0x60) = &PTR__TraktorKontrolS2Widget_101ae69d8;
  *(void ***)(this + 0x3f0) = &PTR__TraktorKontrolS2Widget_101ae6a08;
  plVar3 = *(long **)(this + 0x7b8);
  if (plVar3 == (long *)0x0) {
    lVar2 = *(long *)(this + 0x7a8);
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
    lVar2 = *(long *)(this + 0x7a8);
  }
  if (lVar2 != 0) {
    // std code
  }
  plVar3 = *(long **)(this + 0x798);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x788);
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
    plVar3 = *(long **)(this + 0x788);
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
  plVar3 = *(long **)(this + 0x778);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x768);
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
    plVar3 = *(long **)(this + 0x768);
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
  plVar3 = *(long **)(this + 0x758);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x748);
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
    plVar3 = *(long **)(this + 0x748);
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
  plVar3 = *(long **)(this + 0x738);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      pvVar4 = *(void **)(this + 0x718);
      goto joined_r0x0001001a21ff;
    }
  }
  pvVar4 = *(void **)(this + 0x718);
joined_r0x0001001a21ff:
  if (pvVar4 != (void *)0x0) {
    pvVar6 = *(void **)(this + 0x720);
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
      pvVar5 = *(void **)(this + 0x718);
    }
    *(void **)(this + 0x720) = pvVar4;
    delete(pvVar5);
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x700),*(__tree_node **)(this + 0x708));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x6e8),*(__tree_node **)(this + 0x6f0));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x6d0),*(__tree_node **)(this + 0x6d8));
  ControllerWidget::~ControllerWidget((ControllerWidget *)this);
  return;
}
}
