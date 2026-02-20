#include <ni/controller_editor/tExternalDragDropFunction.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::DETAIL {

tExternalDragDropFunction::~tExternalDragDropFunction() {
tExternalDragDropFunction *ptVar1;
  
  *(void ***)this = &PTR__tExternalDragDropFunction_101b1a310;
  ptVar1 = *(tExternalDragDropFunction **)(this + 0x90);
  if (this + 0x70 == ptVar1) {
    (**(code **)(*(long *)ptVar1 + 0x20))();
    ptVar1 = *(tExternalDragDropFunction **)(this + 0x60);
    if (this + 0x40 == ptVar1) return;
  }
  else {
    if (ptVar1 != (tExternalDragDropFunction *)0x0) {
      (**(code **)(*(long *)ptVar1 + 0x28))();
    }
    ptVar1 = *(tExternalDragDropFunction **)(this + 0x60);
    if (this + 0x40 == ptVar1) {
      (**(code **)(*(long *)ptVar1 + 0x20))();
      return;
    }
  }
  if (ptVar1 != (tExternalDragDropFunction *)0x0) {
    (**(code **)(*(long *)ptVar1 + 0x28))();
  }
  *(void ***)this = &PTR__tDragDropFunction_101b18758;
  ptVar1 = *(tExternalDragDropFunction **)(this + 0x30);
  if (this + 0x10 == ptVar1) {
    (**(code **)(*(long *)ptVar1 + 0x20))();
  }
  else if (ptVar1 != (tExternalDragDropFunction *)0x0) {
    (**(code **)(*(long *)ptVar1 + 0x28))();
  }
  delete(this);
  return;
}
}
