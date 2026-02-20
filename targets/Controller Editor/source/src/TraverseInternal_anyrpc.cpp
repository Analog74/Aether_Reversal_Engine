#include <ni/controller_editor/TraverseInternal_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Value {

void TraverseInternal(anyrpc::Handler&) const {
void *puVar1;
  long lVar2;
  void *puVar3;
  uint uVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  ostream *this_00;
  unsigned int *puVar7;
  unsigned long uVar8;
  Value *this_01;
  long lVar9;
  unsigned int uVar10;
  void *local_168;
  void *local_160 [8];
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned long long local_110;
  unsigned long long uStack_108;
  unsigned int local_100;
  void *local_f8 [17];
  unsigned long long local_70;
  unsigned int local_68;
  
  unsigned int local_44;
  unsigned long long local_40;
  unsigned int *local_38;
  
  puVar3 = PTR_vtable_101ab45a8;
  uVar4 = *(uint *)(this + 0x10);
  switch(uVar4 & 0xff) {
  case 0:
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_f8[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_168 = puVar1;
    // std code
    local_70 = 0;
    local_68 = 0xffffffff;
    local_f8[0] = puVar3 + 0x68;
    local_168 = puVar1;
    // std code
    local_160[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0x18;
    // std code
              ((ostream *)&local_168,"Invalid type during traverse",0x1c);
    local_38 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar5 = // std code
    *local_38 = 0xffff816a;
    local_40._0_4_ = (unsigned int)0((int7)((unsigned long)uVar5 >> 8),1);
    // std code
    *(unsigned long long *)(local_38 + 8) = 0;
    local_40 = (void *)((unsigned long)local_40._4_4_ << 0x20);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_38,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000100943980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x20))(param_1);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x000100943b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1);
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x000100943ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x28))(param_1);
    return;
  case 4:
    (**(code **)(*(long *)param_1 + 0x88))(param_1,*(unsigned int *)(this + 8));
    if (*(int *)(this + 8) == 0) {
      uVar4 = 0;
    }
    else {
      lVar9 = 0x18;
      uVar8 = 0;
      do {
        puVar3 = PTR_vtable_101ab45a8;
        lVar2 = *(long *)this;
        if ((*(byte *)(lVar2 + -6 + lVar9) & 0x10) == 0) {
          puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
          local_f8[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
          local_168 = puVar1;
          // std code
          local_70 = 0;
          local_68 = 0xffffffff;
          local_38 = (unsigned int *)(puVar3 + 0x18);
          local_f8[0] = puVar3 + 0x68;
          local_168 = puVar1;
          // std code
          local_160[0] = (char*)PTR_vtable_101ab4590 + 0x10;
          local_120 = 0;
          uStack_118 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0x18;
          local_40 = local_160[0];
          this_00 = // std code
                              ((ostream *)&local_168,"Key is not string, type=",0x18);
          // std code
          puVar7 = (unsigned int *)___cxa_allocate_exception(0x28);
          uVar5 = // std code
          *puVar7 = 0xffff816f;
          local_44 = (unsigned int)0((int7)((unsigned long)uVar5 >> 8),1);
          // std code
          *(unsigned long long *)(puVar7 + 8) = 0;
          local_44 = 0;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(puVar7,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
        }
        this_01 = (Value *)(lVar2 + lVar9 + -0x18);
        local_38 = (unsigned int *)lVar9;
        local_40 = (void *)GetString(this_01);
        uVar5 = GetStringLength(this_01);
        (**(code **)(*(long *)param_1 + 0x90))(param_1,local_40,uVar5,1);
        puVar7 = local_38;
        TraverseInternal((Value *)(lVar2 + (long)local_38),param_1);
        uVar4 = *(uint *)(this + 8);
        if (uVar8 != uVar4 - 1) {
          (**(code **)(*(long *)param_1 + 0x98))(param_1);
          uVar4 = *(uint *)(this + 8);
        }
        uVar8 = uVar8 + 1;
        lVar9 = (long)puVar7 + 0x30;
      } while (uVar8 < uVar4);
    }
    uVar8 = (unsigned long)uVar4;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0xa0);
    break;
  case 5:
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(unsigned int *)(this + 8));
    if (*(int *)(this + 8) == 0) {
      uVar4 = 0;
    }
    else {
      lVar9 = 0;
      uVar8 = 0;
      do {
        TraverseInternal((Value *)(*(long *)this + lVar9),param_1);
        uVar4 = *(uint *)(this + 8);
        if (uVar8 != uVar4 - 1) {
          (**(code **)(*(long *)param_1 + 0xb8))(param_1);
          uVar4 = *(uint *)(this + 8);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x18;
      } while (uVar8 < uVar4);
    }
    uVar8 = (unsigned long)uVar4;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0xc0);
    break;
  case 6:
    uVar5 = GetString(this);
    uVar6 = GetStringLength(this);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x40);
    return;
  case 7:
    if ((uVar4 & 0x400) == 0) {
      if ((uVar4 & 0x800) == 0) {
        if ((uVar4 & 0x1000) == 0) {
          if ((uVar4 & 0x2000) == 0) {
            if ((short)uVar4 < 0) {
              uVar10 = (unsigned int)*(unsigned long long *)this;
              UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x78);
            }
            else {
              uVar10 = *(unsigned int *)this;
              UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x70);
            }
                    /* WARNING: Could not recover jumptable at 0x000100943c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)(uVar10,param_1);
            return;
          }
          uVar8 = *(unsigned long *)this;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x68);
        }
        else {
          uVar8 = *(unsigned long *)this;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x60);
        }
        break;
      }
      uVar10 = *(unsigned int *)this;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x58);
    }
    else {
      uVar10 = *(unsigned int *)this;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x50);
    }
                    /* WARNING: Could not recover jumptable at 0x000100943c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar10);
    return;
  case 8:
    uVar8 = *(unsigned long *)this;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x38);
    break;
  case 9:
    uVar5 = GetBinary(this);
    uVar6 = GetBinaryLength(this);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100943b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar5,uVar6,1,UNRECOVERED_JUMPTABLE_00);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100943bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar8);
  return;
}
}
