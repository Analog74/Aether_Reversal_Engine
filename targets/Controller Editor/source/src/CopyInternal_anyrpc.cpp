#include <ni/controller_editor/CopyInternal_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Value {

void CopyInternal(1 param_1, anyrpc::Value const& {
Value *this_00;
  uint uVar1;
  long lVar2;
  long lVar3;
  unsigned long long uVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  unsigned long uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  switch(uVar1 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 7:
  case 8:
    uVar4 = *(unsigned long long *)(param_1 + 8);
    *(unsigned long long *)this = *(unsigned long long *)param_1;
    *(unsigned long long *)(this + 8) = uVar4;
    *(unsigned int *)(this + 0x10) = *(unsigned int *)(param_1 + 0x10);
    break;
  case 4:
    Destroy(this);
    *(unsigned int *)(this + 0x10) = 4;
    *(unsigned long long *)this = 0;
    *(unsigned long long *)(this + 8) = 0;
    if (*(int *)(param_1 + 8) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        pcVar5 = (char *)GetString((Value *)(*(long *)param_1 + lVar7));
        lVar2 = *(long *)param_1;
        sVar6 = strlen(pcVar5);
        AddMemberCheckCapacity(this);
        lVar3 = *(long *)this;
        uVar1 = *(uint *)(this + 8);
        this_00 = (Value *)((unsigned long)uVar1 * 0x30 + lVar3);
        Destroy(this_00);
        *(unsigned int *)(lVar3 + 0x10 + (unsigned long)uVar1 * 0x30) = 0x100006;
        CopyString(this_00,pcVar5,sVar6);
        CopyInternal((Value *)(*(long *)this + (unsigned long)*(uint *)(this + 8) * 0x30 + 0x18),
                     (Value *)(lVar2 + lVar7 + 0x18));
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x30;
      } while (uVar8 < *(uint *)(param_1 + 8));
    }
    break;
  case 5:
    SetArray(this,(unsigned long)*(uint *)(param_1 + 8));
    if (*(int *)(param_1 + 8) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        CopyInternal((Value *)(*(long *)this + lVar7),(Value *)(*(long *)param_1 + lVar7));
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar8 < *(uint *)(param_1 + 8));
    }
    break;
  case 6:
    if ((uVar1 & 0x400000) == 0) {
      uVar8 = *(unsigned long *)(param_1 + 8);
      param_1 = *(Value **)param_1;
    }
    else {
      uVar8 = 0xf - (long)(char)param_1[0xf];
    }
    Destroy(this);
    *(unsigned int *)(this + 0x10) = 0x100006;
    CopyString(this,(char *)param_1,uVar8);
    return;
  case 9:
    if ((uVar1 & 0x400000) == 0) {
      uVar8 = *(unsigned long *)(param_1 + 8);
      param_1 = *(Value **)param_1;
    }
    else {
      uVar8 = 0xf - (long)(char)param_1[0xf];
    }
    Destroy(this);
    *(unsigned int *)(this + 0x10) = 0x800009;
    CopyBinary(this,(uchar *)param_1,uVar8);
    return;
  }
  return;
}
}
