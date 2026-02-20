#include <ni/controller_editor/TextEdit.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL {

void TextEdit::getMarkedRange() const {
return;
}

void TextEdit::getSelectedRange() const {
return;
}

void TextEdit::selectAll() {
long *plVar1;
  TextEdit TVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x588) == 0) {
    TVar2 = this[0x550];
    if (((byte)TVar2 & 1) == 0) {
      uVar3 = (uint)((byte)TVar2 >> 1);
    }
    else {
      uVar3 = (uint)*(unsigned long long *)(this + 0x558);
    }
    if (*(uint *)(this + 0x58c) == uVar3) {
      *(unsigned long long *)(this + 0x590) = 0xffffffffffffffff;
      plVar1 = *(long **)(this + -0x1b8);
      goto joined_r0x0001004e37dd;
    }
  }
  else {
    TVar2 = this[0x550];
  }
  *(unsigned int *)(this + 0x588) = 0;
  if (((byte)TVar2 & 1) == 0) {
    uVar3 = (uint)((byte)TVar2 >> 1);
  }
  else {
    uVar3 = (uint)*(unsigned long long *)(this + 0x558);
  }
  *(uint *)(this + 0x58c) = uVar3;
  *(unsigned long long *)(this + 0x590) = 0xffffffffffffffff;
  if (*(long **)(this + -0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + -0x1b8) + 0x90))();
  }
  Widget::setInvalid((Widget *)(this + -0x2f0),0);
  *(unsigned long long *)(this + 0x590) = 0xffffffffffffffff;
  plVar1 = *(long **)(this + -0x1b8);
joined_r0x0001004e37dd:
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004e37e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))();
  return;
}

TextEdit::~TextEdit() {
~TextEdit(this + -0x2f0);
  delete(this + -0x2f0);
  return;
}
}
