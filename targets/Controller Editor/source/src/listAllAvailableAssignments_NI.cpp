#include <ni/controller_editor/listAllAvailableAssignments_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void listAllAvailableAssignments(2 param_2, NI::AssignmentActionType {
__tree_node *p_Var1;
  long lVar2;
  long *plVar3;
  __tree_node *p_Var4;
  __tree_node *p_Var5;
  
  void *local_88;
  
  void *local_70;
  __tree_node **local_68;
  void **local_60;
  __tree_node *local_58;
  __tree_node *local_50;
  unsigned long long uStack_48;
  unsigned long long local_40;
  unsigned char local_38;
  
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(NI **)this = this + 8;
  lVar2 = ControllerManager::getInstance();
  plVar3 = (long *)(**(code **)(**(long **)(lVar2 + 0x208) + 0x10))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0xe0))(plVar3);
  local_60 = &PTR__AssignmentVisitor_101ab4f68;
  local_68 = &local_58;
  local_50 = (__tree_node *)0x0;
  uStack_48 = 0;
  local_58 = (__tree_node *)&local_50;
  lVar2 = ControllerManager::getInstance();
  local_40 = (**(code **)(**(long **)(lVar2 + 0x208) + 0x10))();
  local_38 = param_2;
  (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_60);
  if (local_58 != (__tree_node *)&local_50) {
    p_Var5 = local_58;
    do {
      // std code
      // std code
      // std code
      __tree<// std code
      ::__emplace_unique_key_args<// std code
                ((__tree<// std code
                  *)this,local_98,(pair *)local_98);
      if (((byte)local_80[0] & 1) == 0) {
        if (((byte)local_98[0] & 1) != 0) return;
        p_Var1 = *(__tree_node **)(p_Var5 + 8);
        if (*(__tree_node **)(p_Var5 + 8) != (__tree_node *)0x0) return;
        p_Var4 = *(__tree_node **)(p_Var5 + 0x10);
        if (*(__tree_node **)p_Var4 != p_Var5) {
          do {
            p_Var5 = *(__tree_node **)(p_Var5 + 0x10);
            p_Var4 = *(__tree_node **)(p_Var5 + 0x10);
          } while (*(__tree_node **)p_Var4 != p_Var5);
        }
      }
      else {
        delete(local_70);
        if (((byte)local_98[0] & 1) == 0) return;
        delete(local_88);
        p_Var1 = *(__tree_node **)(p_Var5 + 8);
        if (*(__tree_node **)(p_Var5 + 8) == (__tree_node *)0x0) return;
        do {
          p_Var4 = p_Var1;
          p_Var1 = *(__tree_node **)p_Var4;
        } while (*(__tree_node **)p_Var4 != (__tree_node *)0x0);
      }
      p_Var5 = p_Var4;
    } while (p_Var4 != (__tree_node *)&local_50);
  }
  local_60 = &PTR__AssignmentVisitor_101ab4f68;
  // std code
  destroy((__tree<NI::AssignmentInfo,// std code
           *)&local_58,local_50);
  return this;
}
}
