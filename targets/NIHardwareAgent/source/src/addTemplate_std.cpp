#include <ni/controller_editor/addTemplate_std.hpp>
namespace NI::NHL2::MapHandler {

void addTemplate(std::string const&, bool) {
unsigned long uVar1;
  void *pvVar2;
  __tree_node *p_Var3;
  __tree_node *p_Var4;
  unsigned int uVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  void7 in_register_00000011;
  unsigned long uVar9;
  unsigned long uVar10;
  size_t sVar11;
  MapHandler *pMVar12;
  __tree_node *local_68;
  __tree_node *local_60 [2];
  unsigned int local_4c;
  unsigned long long local_48;
  long local_40;
  MapHandler *local_38;
  
  local_40 = (**(code **)(*(long *)this + 0x368))();
  // std code
  pMVar12 = this + 0x130;
  // std code
  plVar8 = *(long **)(this + 0x200);
  uVar5 = (**(code **)(*(long *)this + 0x158))(this);
  (**(code **)(*plVar8 + 0xd0))(&local_68,plVar8,uVar5);
  plVar8 = *(long **)(this + 0x230);
  if (plVar8 == *(long **)(this + 0x238)) {
    local_4c = (unsigned int)0(in_register_00000011,param_2);
    pvVar2 = *(void **)(this + 0x228);
    sVar11 = (long)plVar8 - (long)pvVar2;
    uVar9 = (long)sVar11 >> 3;
    uVar1 = uVar9 + 1;
    local_38 = pMVar12;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar10 = (long)sVar11 >> 2;
    if ((unsigned long)((long)sVar11 >> 2) < uVar1) {
      uVar10 = uVar1;
    }
    if (0xffffffffffffffe < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      pvVar7 = new(uVar10 * 8);
    }
    *(long *)((long)pvVar7 + uVar9 * 8) = local_40;
    if (0 < (long)sVar11) {
      memcpy(pvVar7,pvVar2,sVar11);
    }
    pMVar12 = local_38;
    *(void **)(this + 0x228) = pvVar7;
    *(unsigned long *)(this + 0x230) = (long)pvVar7 + uVar9 * 8 + 8;
    *(void **)(this + 0x238) = (void *)((long)pvVar7 + uVar10 * 8);
    param_2 = SUB41(local_4c,0);
    if (pvVar2 != (void *)0x0) {
      delete(pvVar2);
    }
  }
  else {
    *plVar8 = local_40;
    *(long **)(this + 0x230) = plVar8 + 1;
  }
  if (param_2 != false) {
    local_38 = pMVar12;
    (**(code **)(*(long *)this + 0xe8))(this,*(unsigned long long *)(this + 0x200));
    *(long *)(this + 0x200) = local_40;
    if ((local_40 != 0) && (*(long *)(this + 0x110) != 0)) {
      iVar6 = (**(code **)(*(long *)(local_40 + 0x60) + 0x20))(local_40 + 0x60,0x4d704d70,0);
      plVar8 = *(long **)(this + 0x110);
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 0x90))(plVar8,2);
      }
      else {
        (**(code **)(*plVar8 + 0x90))(plVar8,1);
      }
    }
    while (p_Var4 = local_68, p_Var4 != (__tree_node *)local_60) {
      plVar8 = (long *)(**(code **)(**(long **)(this + 0x200) + 0xa8))
                                 (*(long **)(this + 0x200),*(unsigned int *)(p_Var4 + 0x20),0);
      if ((plVar8 != (long *)0x0) && (*(long *)(p_Var4 + 0x28) != 0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8);
      }
      p_Var3 = *(__tree_node **)(p_Var4 + 8);
      if (*(__tree_node **)(p_Var4 + 8) == (__tree_node *)0x0) {
        local_68 = *(__tree_node **)(p_Var4 + 0x10);
        if ((__tree_node *)*(__tree_node ***)*(__tree_node **)(p_Var4 + 0x10) != p_Var4) {
          do {
            p_Var4 = *(__tree_node **)(p_Var4 + 0x10);
            local_68 = *(__tree_node **)(p_Var4 + 0x10);
          } while (*(__tree_node **)*(__tree_node **)(p_Var4 + 0x10) != p_Var4);
        }
      }
      else {
        do {
          local_68 = p_Var3;
          p_Var3 = *(__tree_node **)local_68;
        } while (p_Var3 != (__tree_node *)0x0);
      }
    }
  }
  local_48 = 1;
  (**(code **)(*(long *)this + 0x110))(this,&local_48);
  if (param_2 != false) {
    local_48 = 2;
    (**(code **)(*(long *)this + 0x110))(this,&local_48);
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_68,local_60[0]);
  // std code
  (**(code **)(*(long *)this + 0x360))(this,0);
  return;
}
}
