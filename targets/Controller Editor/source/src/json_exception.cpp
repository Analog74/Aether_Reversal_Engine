#include <ni/controller_editor/json_exception.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json {

json_exception::json_exception(char const*) {
size_t sVar1;
  unsigned long uVar2;
  json_exception *pjVar3;
  
  *(void ***)this = &PTR__json_exception_101b1d360;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar1 < 0x17) {
    this[8] = (json_exception)((char)sVar1 * '\x02');
    pjVar3 = this + 9;
    if (sVar1 == 0) return;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pjVar3 = (json_exception *)new char[uVar2];
    *(json_exception **)(this + 0x18) = pjVar3;
    *(unsigned long *)(this + 8) = uVar2 | 1;
    *(size_t *)(this + 0x10) = sVar1;
  }
  memcpy(pjVar3,param_1,sVar1);
  pjVar3[sVar1] = (json_exception)0x0;
  
}

json_exception::~json_exception() {
*(void ***)this = &PTR__json_exception_101b1d360;
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  // std code
  delete(this);
  return;
}
}
