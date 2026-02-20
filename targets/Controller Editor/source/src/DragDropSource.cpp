#include <ni/controller_editor/DragDropSource.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

DragDropSource::DragDropSource() {
UIA::DropSource::DropSource((DropSource *)this);
  *(void ***)this = &PTR__DragDropSource_101b186e8;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  
}

DragDropSource::~DragDropSource() {
DragDropSource *pDVar1;
  
  *(void ***)this = &PTR__DragDropSource_101b186e8;
  pDVar1 = *(DragDropSource **)(this + 0x70);
  if (this + 0x50 == pDVar1) {
    (**(code **)(*(long *)pDVar1 + 0x20))();
    pDVar1 = *(DragDropSource **)(this + 0x40);
    if (this + 0x20 == pDVar1) return;
  }
  else {
    if (pDVar1 != (DragDropSource *)0x0) {
      (**(code **)(*(long *)pDVar1 + 0x28))();
    }
    pDVar1 = *(DragDropSource **)(this + 0x40);
    if (this + 0x20 == pDVar1) {
      (**(code **)(*(long *)pDVar1 + 0x20))();
      return;
    }
  }
  if (pDVar1 != (DragDropSource *)0x0) {
    (**(code **)(*(long *)pDVar1 + 0x28))();
  }
  UIA::DropSource::~DropSource((DropSource *)this);
  delete(this);
  return;
}
}
