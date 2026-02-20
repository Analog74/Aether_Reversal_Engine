#include <ni/controller_editor/ExecuteMethod_FollowUpOperations_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::MethodManager {

void ExecuteMethod_FollowUpOperations(1 param_1, anyrpc::Method* {
Method *pMVar1;
  void *puVar2;
  __tree_node_base *p_Var3;
  void *puVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  unsigned long long uVar8;
  char *pcVar9;
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
  void *local_60;
  unsigned int *local_58;
  string local_50;
  char local_4f [7];
  unsigned long local_48;
  char *local_40;
  unsigned int local_34;
  
  // std code
  pMVar1 = param_1 + 0x3c;
  *(int *)pMVar1 = *(int *)pMVar1 + -1;
  if ((*(int *)pMVar1 == 0) && (param_1[0x40] != (Method)0x0)) {
    p_Var6 = (__tree_node_base *)
             // std code
             __tree<// std code
             ::find<// std code
                                  *)this,(string *)(param_1 + 8));
    puVar4 = PTR_vtable_101ab45a8;
    if (p_Var6 == (__tree_node_base *)(this + 8)) {
      puVar2 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_f8[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_168 = puVar2;
      // std code
      local_70 = 0;
      local_68 = 0xffffffff;
      local_60 = puVar4 + 0x18;
      local_f8[0] = puVar4 + 0x68;
      local_168 = puVar2;
      // std code
      local_160[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0x18;
      // std code
      pcVar9 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar9 = local_4f;
      }
      // std code
                ((ostream *)&local_168,pcVar9,local_48);
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      local_58 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar8 = // std code
      *local_58 = 0xffff80a5;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar8 >> 8),1);
      // std code
      *(unsigned long long *)(local_58 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_58,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
    if (param_1[0x38] != (Method)0x0) {
      (**(code **)(*(long *)param_1 + 8))(param_1);
    }
    plVar5 = *(long **)(p_Var6 + 8);
    if (*(long **)(p_Var6 + 8) == (long *)0x0) {
      plVar7 = *(long **)(p_Var6 + 0x10);
      p_Var3 = p_Var6;
      if ((__tree_node_base *)*plVar7 != p_Var6) {
        do {
          p_Var3 = *(__tree_node_base **)(p_Var3 + 0x10);
          plVar7 = *(long **)(p_Var3 + 0x10);
        } while ((__tree_node_base *)*plVar7 != p_Var3);
      }
    }
    else {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    if (*(__tree_node_base **)this == p_Var6) {
      *(long **)this = plVar7;
    }
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
    // std code
    if (((byte)p_Var6[0x20] & 1) != 0) {
      delete(*(void **)(p_Var6 + 0x30));
    }
    delete(p_Var6);
    // std code
  }
  // std code
  return;
}
}
