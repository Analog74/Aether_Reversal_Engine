#include <ni/controller_editor/CalibrationStep__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::DialogSpecs::setFunctionForCalibrationType(NI {

void CalibrationStep, std::function<void ()>) {
long *plVar1;
  DialogSpecs *pDVar2;
  __tree_node_base *p_Var3;
  DialogSpecs *pDVar4;
  __tree_node_base *p_Var5;
  DialogSpecs *pDVar6;
  __value_func<void()> local_68 [32];
  __value_func<void()> *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (*(DialogSpecs **)(this + 8) == (DialogSpecs *)0x0) {
    pDVar4 = this + 8;
  }
  else {
    pDVar2 = *(DialogSpecs **)(this + 8);
    pDVar6 = this + 8;
    do {
      pDVar4 = pDVar2;
      if ((byte)*(__tree_node_base *)(pDVar4 + 0x20) <= (byte)param_2) {
        if ((byte)*(__tree_node_base *)(pDVar4 + 0x20) < (byte)param_2) {
          pDVar6 = pDVar4 + 8;
          pDVar2 = *(DialogSpecs **)(pDVar4 + 8);
          if (*(DialogSpecs **)(pDVar4 + 8) != (DialogSpecs *)0x0) return;
        }
        p_Var3 = *(__tree_node_base **)pDVar6;
        goto joined_r0x0001001720a9;
      }
      pDVar2 = *(DialogSpecs **)pDVar4;
      pDVar6 = pDVar4;
    } while (*(DialogSpecs **)pDVar4 != (DialogSpecs *)0x0);
  }
  p_Var3 = *(__tree_node_base **)pDVar4;
  pDVar6 = pDVar4;
joined_r0x0001001720a9:
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var3 = (__tree_node_base *)new char[0x60];
    p_Var3[0x20] = param_2;
    *(unsigned long long *)(p_Var3 + 0x50) = 0;
    *(unsigned long long *)p_Var3 = 0;
    *(unsigned long long *)(p_Var3 + 8) = 0;
    *(DialogSpecs **)(p_Var3 + 0x10) = pDVar4;
    *(__tree_node_base **)pDVar6 = p_Var3;
    p_Var5 = p_Var3;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var5 = *(__tree_node_base **)pDVar6;
    }
    // std code
              (*(__tree_node_base **)(this + 8),p_Var5);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    plVar1 = (long *)param_3[4];
  }
  else {
    plVar1 = (long *)param_3[4];
  }
  if (plVar1 == (long *)0x0) {
    local_48 = (__value_func<void()> *)0x0;
  }
  else if (param_3 == plVar1) {
    local_48 = local_68;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_48 = (__value_func<void()> *)(**(code **)(*plVar1 + 0x10))();
  }
  // std code
  if (local_68 == local_48) {
    (**(code **)(*(long *)local_48 + 0x20))();
  }
  else if (local_48 != (__value_func<void()> *)0x0) {
    (**(code **)(*(long *)local_48 + 0x28))();
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
