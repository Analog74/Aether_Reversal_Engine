#include <ni/controller_editor/RelativeMouseDrag.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::DETAIL {

void RelativeMouseDrag::isCaptured() const {
return this[0x31];
}

void RelativeMouseDrag::onRelease() {
long *plVar1;
  
  if (this[0x31] != (RelativeMouseDrag)0x0) {
    this[0x31] = (RelativeMouseDrag)0x0;
    plVar1 = *(long **)(*(long *)(this + 0x50) + 0x138);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,this + 0x20);
      (**(code **)(*plVar1 + 0x38))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004d07a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x68))(plVar1);
      return;
    }
  }
  return;
}

void RelativeMouseDrag::setFineSensitivityFactor(double param_1) {
}

void RelativeMouseDrag::setHideCursorMode(bool param_1) {
}

void RelativeMouseDrag::setSensitivity(double param_1) {
}

RelativeMouseDrag::~RelativeMouseDrag() {
long *plVar1;
  
  if (this[0x31] != (RelativeMouseDrag)0x0) {
    this[0x31] = (RelativeMouseDrag)0x0;
    plVar1 = *(long **)(*(long *)(this + 0x50) + 0x138);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,this + 0x20);
      (**(code **)(*plVar1 + 0x38))(plVar1);
      (**(code **)(*plVar1 + 0x68))(plVar1);
    }
  }
  return;
}
}
