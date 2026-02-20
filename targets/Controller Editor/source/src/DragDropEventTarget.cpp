#include <ni/controller_editor/DragDropEventTarget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

DragDropEventTarget::DragDropEventTarget() {
UIA::EventTarget::EventTarget((EventTarget *)this);
  *(void ***)this = &PTR__DragDropEventTarget_101b18718;
  *(DragDropEventTarget **)(this + 8) = this + 8;
  *(DragDropEventTarget **)(this + 0x10) = this + 8;
  *(unsigned long long *)(this + 0x18) = 0;
  *(DragDropEventTarget **)(this + 0x20) = this + 0x20;
  *(DragDropEventTarget **)(this + 0x28) = this + 0x20;
  *(unsigned long long *)(this + 0x30) = 0;
  *(DragDropEventTarget **)(this + 0x38) = this + 0x38;
  *(DragDropEventTarget **)(this + 0x40) = this + 0x38;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  
}

DragDropEventTarget::~DragDropEventTarget() {
long *plVar1;
  long lVar2;
  long lVar3;
  DragDropEventTarget *pDVar4;
  long *plVar5;
  DragDropEventTarget *pDVar6;
  
  *(void ***)this = &PTR__DragDropEventTarget_101b18718;
  if (*(long *)(this + 0x48) != 0) {
    lVar2 = *(long *)(this + 0x38);
    pDVar6 = *(DragDropEventTarget **)(this + 0x40);
    lVar3 = *(long *)pDVar6;
    *(unsigned long long *)(lVar3 + 8) = *(unsigned long long *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    *(unsigned long long *)(this + 0x48) = 0;
    while (pDVar6 != this + 0x38) {
      pDVar4 = *(DragDropEventTarget **)(pDVar6 + 8);
      plVar5 = *(long **)(pDVar6 + 0x18);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          // std code
        }
      }
      delete(pDVar6);
      pDVar6 = pDVar4;
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    lVar2 = *(long *)(this + 0x20);
    pDVar6 = *(DragDropEventTarget **)(this + 0x28);
    lVar3 = *(long *)pDVar6;
    *(unsigned long long *)(lVar3 + 8) = *(unsigned long long *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    *(unsigned long long *)(this + 0x30) = 0;
    while (pDVar6 != this + 0x20) {
      pDVar4 = *(DragDropEventTarget **)(pDVar6 + 8);
      plVar5 = *(long **)(pDVar6 + 0x18);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          // std code
        }
      }
      delete(pDVar6);
      pDVar6 = pDVar4;
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    lVar2 = *(long *)(this + 8);
    pDVar6 = *(DragDropEventTarget **)(this + 0x10);
    lVar3 = *(long *)pDVar6;
    *(unsigned long long *)(lVar3 + 8) = *(unsigned long long *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    *(unsigned long long *)(this + 0x18) = 0;
    while (pDVar6 != this + 8) {
      pDVar4 = *(DragDropEventTarget **)(pDVar6 + 8);
      plVar5 = *(long **)(pDVar6 + 0x18);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          // std code
        }
      }
      delete(pDVar6);
      pDVar6 = pDVar4;
    }
  }
  UIA::EventTarget::~EventTarget((EventTarget *)this);
  return;
}
}
