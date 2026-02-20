#include <ni/controller_editor/PushBack_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Value {

void PushBack(anyrpc::Value&) {
unsigned long long *puVar1;
  void *puVar2;
  uint uVar3;
  long lVar4;
  void *puVar5;
  uint uVar6;
  ostream *this_00;
  unsigned long long uVar7;
  unsigned long uVar8;
  void *local_160;
  void *local_158 [8];
  unsigned long long local_118;
  unsigned long long uStack_110;
  unsigned long long local_108;
  unsigned long long uStack_100;
  unsigned int local_f8;
  void *local_f0 [17];
  unsigned long long local_68;
  unsigned int local_60;
  
  unsigned int *local_40;
  unsigned int local_34;
  
  puVar5 = PTR_vtable_101ab45a8;
  if (this[0x10] == (Value)0x5) {
    uVar6 = *(uint *)(this + 8);
    uVar3 = *(uint *)(this + 0xc);
    if (uVar3 <= uVar6) {
      uVar8 = 0x10;
      if (uVar3 != 0) {
        uVar8 = (unsigned long)((uVar3 + 1 >> 1) + uVar3);
      }
      Reserve(this,uVar8);
      uVar6 = *(uint *)(this + 8);
    }
    lVar4 = *(long *)this;
    *(uint *)(this + 8) = uVar6 + 1;
    uVar7 = *(unsigned long long *)(param_1 + 8);
    puVar1 = (unsigned long long *)(lVar4 + (unsigned long)uVar6 * 0x18);
    *puVar1 = *(unsigned long long *)param_1;
    puVar1[1] = uVar7;
    *(unsigned int *)(lVar4 + 0x10 + (unsigned long)uVar6 * 0x18) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(param_1 + 0x10) = 1;
    return this;
  }
  puVar2 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_160 = puVar2;
  // std code
  local_68 = 0;
  local_60 = 0xffffffff;
  local_f0[0] = puVar5 + 0x68;
  local_160 = puVar2;
  // std code
  local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x18;
  this_00 = // std code
                      ((ostream *)&local_160,"Not Array, type=",0x10);
  // std code
  local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
  uVar7 = // std code
  *local_40 = 0xffff816f;
  local_34 = (unsigned int)0((int7)((unsigned long)uVar7 >> 8),1);
  // std code
  *(unsigned long long *)(local_40 + 8) = 0;
  local_34 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}
}
