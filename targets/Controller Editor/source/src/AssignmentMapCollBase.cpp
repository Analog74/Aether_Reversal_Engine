#include <ni/controller_editor/AssignmentMapCollBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

AssignmentMapCollBase::AssignmentMapCollBase(char const*) {
size_t sVar1;
  unsigned long uVar2;
  AssignmentMapCollBase *pAVar3;
  
  *(void ***)this = &PTR__AssignmentMapCollBase_101afd9f0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar1 < 0x17) {
    this[0x20] = (AssignmentMapCollBase)((char)sVar1 * '\x02');
    pAVar3 = this + 0x21;
    if (sVar1 == 0) return;
  }
  else {
    uVar2 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pAVar3 = (AssignmentMapCollBase *)new char[uVar2];
    *(AssignmentMapCollBase **)(this + 0x30) = pAVar3;
    *(unsigned long *)(this + 0x20) = uVar2 | 1;
    *(size_t *)(this + 0x28) = sVar1;
  }
  memcpy(pAVar3,param_1,sVar1);
  pAVar3[sVar1] = (AssignmentMapCollBase)0x0;
  *(unsigned long long *)(this + 0x38) = 0;
  
}

void AssignmentMapCollBase::getPageAtIndex(unsigned long) const {
if (param_1 < (unsigned long)(*(long *)(this + 0x10) - *(long *)(this + 8) >> 3)) {
    return *(unsigned long long *)(*(long *)(this + 8) + param_1 * 8);
  }
  return 0;
}

AssignmentMapCollBase::~AssignmentMapCollBase() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
