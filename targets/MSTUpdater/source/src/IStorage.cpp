#include <ni/controller_editor/IStorage.hpp>
namespace NI::GP::RangeLimitingStorage::seek64(long long, NI::GP {

void IStorage::eSeekMode) {
uint uVar1;
  unsigned long uVar2;
  int iVar3;
  long lVar4;
  unsigned long long uVar5;
  unsigned long uVar6;
  long *plVar7;
  
  if (((long)param_1 < 0) && (param_3 != 1)) {
    *(unsigned int *)(this + 0xc) = 3;
    return;
  }
  if (param_3 == 0) {
    plVar7 = *(long **)(this + 0x18);
    lVar4 = *plVar7;
    param_1 = param_1 + *(long *)(this + 0x28);
    uVar5 = 0;
  }
  else if (param_3 == 1) {
    plVar7 = *(long **)(this + 0x18);
    lVar4 = *plVar7;
    uVar5 = 1;
  }
  else {
    if (param_3 != 2) goto LAB_10019f154;
    uVar2 = *(unsigned long *)(this + 0x30);
    if (uVar2 != 0) {
      if (uVar2 < param_1) {
        *(unsigned int *)(this + 0xc) = 3;
        return;
      }
      (**(code **)(**(long **)(this + 0x18) + 0x40))
                (*(long **)(this + 0x18),(uVar2 - param_1) + *(long *)(this + 0x28),0);
      goto LAB_10019f154;
    }
    plVar7 = *(long **)(this + 0x18);
    lVar4 = *plVar7;
    uVar5 = 2;
  }
  (**(code **)(lVar4 + 0x40))(plVar7,param_1,uVar5);
LAB_10019f154:
  uVar1 = *(uint *)((long)*(long **)(this + 0x18) + 0xc);
  if ((uVar1 < 4) && (uVar1 != 1)) {
    *(uint *)(this + 0xc) = uVar1;
  }
  else {
    iVar3 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
    uVar6 = (unsigned long)iVar3;
    uVar2 = *(unsigned long *)(this + 0x28);
    if ((uVar6 < uVar2) || ((lVar4 = *(long *)(this + 0x30), lVar4 != 0 && (uVar2 + lVar4 < uVar6)))
       ) {
      *(unsigned int *)(this + 0xc) = 3;
    }
    else if ((lVar4 == 0) || (uVar6 - uVar2 != lVar4)) {
      *(unsigned int *)(this + 0xc) = 1;
    }
    else {
      *(unsigned int *)(this + 0xc) = 2;
    }
  }
  return;
}
}
