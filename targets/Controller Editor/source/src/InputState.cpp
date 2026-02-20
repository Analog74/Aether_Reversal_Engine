#include <ni/controller_editor/InputState.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void InputState::getSyncModifierKeys() {
uint uVar1;
  
  uVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSEvent,"modifierFlags");
  return uVar1 << 0xc & 0x40000000 |
         uVar1 << 0xc & 0x80000000 | (uVar1 & 0x20000) << 0xb | (uVar1 & 0x110000) << 9;
}

void InputState::setModalKeyInput(bool param_1) {
}
}
