#include <ni/controller_editor/AddMethod_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::MethodManager {

void AddMethod(1 param_1, anyrpc::Method* {
string *psVar1;
  void *puVar2;
  void *puVar3;
  MethodManager *pMVar4;
  long lVar5;
  unsigned long long uVar6;
  char *pcVar7;
  string *local_190;
  unsigned long long local_188;
  void *local_180;
  void *local_178 [8];
  unsigned long long local_138;
  unsigned long long uStack_130;
  unsigned long long local_128;
  unsigned long long uStack_120;
  unsigned int local_118;
  void *local_110 [17];
  unsigned long long local_88;
  unsigned int local_80;
  
  void *local_60;
  unsigned int *local_58;
  string local_50;
  char local_4f [7];
  unsigned long local_48;
  char *local_40;
  unsigned int local_34;
  
  // std code
  psVar1 = (string *)(param_1 + 8);
  pMVar4 = (MethodManager *)
           // std code
           __tree<// std code
           ::find<// std code
                                *)this,psVar1);
  if (pMVar4 != this + 8) {
    // std code if(1 param_1, param_1[0x38] != (Method0x0 param_1) {
    }
    puVar3 = PTR_vtable_101ab45a8;
    puVar2 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_190 = (string *)((char*)PTR_construction_vtable_101ab4158 + 0x18);
    local_110[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_188 = 0;
    local_180 = puVar2;
    // std code
    local_88 = 0;
    local_80 = 0xffffffff;
    local_190 = (string *)(puVar3 + 0x18);
    local_110[0] = puVar3 + 0x68;
    local_180 = puVar2;
    local_60 = local_190;
    // std code
    local_178[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x18;
    // std code
    pcVar7 = local_40;
    if (((byte)local_50 & 1) == 0) {
      local_48 = (unsigned long)((byte)local_50 >> 1);
      pcVar7 = local_4f;
    }
    // std code
              ((ostream *)&local_180,pcVar7,local_48);
    if (((byte)local_50 & 1) != 0) {
      delete(local_40);
    }
    local_58 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar6 = // std code
    *local_58 = 0xffff80a4;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar6 >> 8),1);
    // std code
    *(unsigned long long *)(local_58 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_58,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  local_190 = psVar1;
  lVar5 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)this,(piecewise_construct_t *)psVar1,
                     (tuple *)&// std code
  *(Method **)(lVar5 + 0x38) = param_1;
  // std code
  return;
}
}
