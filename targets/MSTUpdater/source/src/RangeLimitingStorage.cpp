#include <ni/controller_editor/RangeLimitingStorage.hpp>
namespace NI::GP {

void RangeLimitingStorage::getPos64() const {
unsigned long uVar1;
  int iVar2;
  unsigned long uVar3;
  long lVar4;
  
  iVar2 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
  uVar3 = (unsigned long)iVar2;
  uVar1 = *(unsigned long *)(this + 0x28);
  if (uVar3 < uVar1) {
    lVar4 = -1;
  }
  else {
    lVar4 = -1;
    if (uVar3 <= uVar1 + *(long *)(this + 0x30)) {
      lVar4 = uVar3 - uVar1;
    }
    if (*(long *)(this + 0x30) == 0) {
      lVar4 = uVar3 - uVar1;
    }
  }
  return lVar4;
}

void RangeLimitingStorage::read(void*, unsigned long) {
unsigned long uVar1;
  unsigned long uVar2;
  int iVar3;
  unsigned long long uVar4;
  unsigned long uVar5;
  
  if (1 < *(int *)(this + 0xc) - 1U) {
    return 0;
  }
  if (*(long *)(this + 0x30) != 0) {
    iVar3 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
    uVar5 = (unsigned long)iVar3;
    uVar1 = *(unsigned long *)(this + 0x28);
    if (uVar5 < uVar1) {
      return 0;
    }
    uVar2 = *(unsigned long *)(this + 0x30);
    if ((uVar2 != 0) && (uVar1 + uVar2 < uVar5)) {
      return 0;
    }
    if (uVar2 < (uVar5 - uVar1) + param_2) {
      param_2 = uVar2 - (uVar5 - uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010019f056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(**(long **)(this + 0x18) + 0x18))(*(long **)(this + 0x18),param_1,param_2);
  return uVar4;
}

void RangeLimitingStorage::write(void const*, unsigned long) {
unsigned long long uVar1;
  
  if (*(int *)((long)param_1 + 0xc) - 1U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010019f07a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)((long)param_1 + 0x18) + 0x20))();
    return uVar1;
  }
  return 0;
}

RangeLimitingStorage::~RangeLimitingStorage() {
*(void ***)this = &PTR__RangeLimitingStorage_100230fd8;
  if ((this[0x20] != (RangeLimitingStorage)0x0) && (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  delete(this);
  return;
}
}
