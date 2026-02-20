#include <ni/controller_editor/tInternalDragDropFunction.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::DETAIL {

tInternalDragDropFunction::~tInternalDragDropFunction() {
tInternalDragDropFunction *ptVar1;
  
  *(void ***)this = &PTR__tInternalDragDropFunction_101b18298;
  ptVar1 = *(tInternalDragDropFunction **)(this + 0x90);
  if (this + 0x70 == ptVar1) {
    (**(code **)(*(long *)ptVar1 + 0x20))();
    ptVar1 = *(tInternalDragDropFunction **)(this + 0x60);
    if (this + 0x40 == ptVar1) return;
  }
  else {
    if (ptVar1 != (tInternalDragDropFunction *)0x0) {
      (**(code **)(*(long *)ptVar1 + 0x28))();
    }
    ptVar1 = *(tInternalDragDropFunction **)(this + 0x60);
    if (this + 0x40 == ptVar1) {
      (**(code **)(*(long *)ptVar1 + 0x20))();
      return;
    }
  }
  if (ptVar1 != (tInternalDragDropFunction *)0x0) {
    (**(code **)(*(long *)ptVar1 + 0x28))();
  }
  tDragDropFunction::~tDragDropFunction((tDragDropFunction *)this);
  delete(this);
  return;
}
}
