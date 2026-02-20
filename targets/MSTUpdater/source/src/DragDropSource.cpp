#include <ni/controller_editor/DragDropSource.hpp>
namespace NI::NWL {

DragDropSource::~DragDropSource() {
DragDropSource *pDVar1;
  
  *(void ***)this = &PTR__DragDropSource_1002289d0;
  pDVar1 = *(DragDropSource **)(this + 0x70);
  if (pDVar1 == this + 0x50) {
    (**(code **)(*(long *)pDVar1 + 0x20))();
  }
  else if (pDVar1 != (DragDropSource *)0x0) {
    (**(code **)(*(long *)pDVar1 + 0x28))();
  }
  pDVar1 = *(DragDropSource **)(this + 0x40);
  if (pDVar1 == this + 0x20) {
    (**(code **)(*(long *)pDVar1 + 0x20))();
  }
  else if (pDVar1 != (DragDropSource *)0x0) {
    (**(code **)(*(long *)pDVar1 + 0x28))();
  }
  UIA::DropSource::~DropSource((DropSource *)this);
  delete(this);
  return;
}
}
