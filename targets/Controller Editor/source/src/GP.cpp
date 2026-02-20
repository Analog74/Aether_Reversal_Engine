#include <ni/controller_editor/GP.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::wstrToUTF8(NI {

void GP::CharSequence<char> const&) {
unsigned long uVar1;
  void *pvVar2;
  GP *pGVar3;
  unsigned long uVar4;
  
  uVar1 = *(unsigned long *)(param_1 + 8);
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  pvVar2 = *(void **)param_1;
  if (uVar1 < 0x17) {
    *this = (GP)((char)uVar1 * '\x02');
    pGVar3 = this + 1;
    if (uVar1 == 0) return;
  }
  else {
    uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pGVar3 = (GP *)new char[uVar4];
    *(GP **)(this + 0x10) = pGVar3;
    *(unsigned long *)this = uVar4 | 1;
    *(unsigned long *)(this + 8) = uVar1;
  }
  memcpy(pGVar3,pvVar2,uVar1);
  pGVar3 = pGVar3 + uVar1;
  *pGVar3 = (GP)0x0;
  return this;
}
}
