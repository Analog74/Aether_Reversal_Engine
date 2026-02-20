#include <ni/controller_editor/invalid_operation.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx {

invalid_operation::invalid_operation(char const*) {
size_t sVar1;
  unsigned long uVar2;
  invalid_operation *piVar3;
  
  *(void ***)this = &PTR__invalid_operation_101b1f9e0;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar1 < 0x17) {
    this[8] = (invalid_operation)((char)sVar1 * '\x02');
    piVar3 = this + 9;
    if (sVar1 == 0) return;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
    piVar3 = (invalid_operation *)new char[uVar2];
    *(invalid_operation **)(this + 0x18) = piVar3;
    *(unsigned long *)(this + 8) = uVar2 | 1;
    *(size_t *)(this + 0x10) = sVar1;
  }
  memcpy(piVar3,param_1,sVar1);
  piVar3[sVar1] = (invalid_operation)0x0;
  
}

invalid_operation::~invalid_operation() {
*(void ***)this = &PTR__invalid_operation_101b1f9e0;
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  // std code
  delete(this);
  return;
}
}
