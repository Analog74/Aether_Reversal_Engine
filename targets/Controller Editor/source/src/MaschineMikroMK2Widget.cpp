#include <ni/controller_editor/MaschineMikroMK2Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void MaschineMikroMK2Widget::createFunctionPanel() [clone .cold.1] {
MaschineMikroMK2Widget *pMVar1;
  long lVar2;
  
  LOCK();
  pMVar1 = this + 8;
  lVar2 = *(long *)pMVar1;
  *(long *)pMVar1 = *(long *)pMVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void MaschineMikroMK2Widget::createLeftPanel() [clone .cold.10] {
MaschineMikroMK2Widget *pMVar1;
  long lVar2;
  
  LOCK();
  pMVar1 = this + 8;
  lVar2 = *(long *)pMVar1;
  *(long *)pMVar1 = *(long *)pMVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void MaschineMikroMK2Widget::createPadPanel() [clone .cold.7] {
MaschineMikroMK2Widget *pMVar1;
  long lVar2;
  
  LOCK();
  pMVar1 = this + 8;
  lVar2 = *(long *)pMVar1;
  *(long *)pMVar1 = *(long *)pMVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

MaschineMikroMK2Widget::~MaschineMikroMK2Widget() {
long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  *(void ***)this = &PTR__MaschineMikroMK2Widget_101add918;
  *(void ***)(this + 0x60) = &PTR__MaschineMikroMK2Widget_101addab8;
  *(void ***)(this + 0x3f0) = &PTR__MaschineMikroMK2Widget_101addae8;
  *(void ***)(this + 0x6f8) = &PTR__MaschineMikroMK2Widget_101addb20;
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
    }
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x718),*(__tree_node **)(this + 0x720));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x700),*(__tree_node **)(this + 0x708));
  *(void ***)this = &PTR__IGuiTransportSupport_101ada6d8;
  *(void ***)(this + 0x60) = &PTR__IGuiTransportSupport_101ada858;
  *(void ***)(this + 0x3f0) = &PTR__IGuiTransportSupport_101ada888;
  plVar3 = *(long **)(this + 0x6f0);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      pvVar4 = *(void **)(this + 0x6d0);
      goto joined_r0x00010013b0a6;
    }
  }
  pvVar4 = *(void **)(this + 0x6d0);
joined_r0x00010013b0a6:
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(this + 0x6d8);
    pvVar6 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = (long *)((long)pvVar5 + -8);
        pvVar5 = (void *)((long)pvVar5 + -0x10);
        if (*plVar3 != 0) {
          // std code
        }
      } while (pvVar4 != pvVar5);
      pvVar6 = *(void **)(this + 0x6d0);
    }
    *(void **)(this + 0x6d8) = pvVar4;
    delete(pvVar6);
  }
  ControllerWidget::~ControllerWidget((ControllerWidget *)this);
  return;
}
}
