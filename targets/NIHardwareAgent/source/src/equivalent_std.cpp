#include <ni/controller_editor/equivalent_std.hpp>
namespace boost::system::detail::std_category {

void equivalent(std::error_code const&, int) const {
int iVar1;
  std_category *psVar2;
  void *puVar3;
  std_category *psVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  unsigned long long uVar9;
  bool bVar10;
  byte bVar11;
  unsigned long long local_48;
  long *plStack_40;
  unsigned long local_38;
  
  psVar2 = *(std_category **)(param_1 + 8);
  if (psVar2 == this) {
    iVar1 = *(int *)param_1;
    plVar8 = *(long **)(this + 8);
    local_48 = 0;
    plStack_40 = (long *)0x0;
    if ((unsigned long)plVar8[1] >> 1 == 0x595588bd12bf6fe8) {
      bVar11 = iVar1 != 0;
      plVar5 = plVar8;
    }
    else {
      bVar11 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar1);
      plVar5 = *(long **)(this + 8);
    }
    local_48 = CONCAT44(local_48._4_4_,iVar1);
    plStack_40 = plVar8;
    goto LAB_1002f32b6;
  }
  psVar4 = (std_category *)// std code
  puVar3 = PTR_instance_1009cc040;
  if (psVar2 == psVar4) {
LAB_1002f31f8:
    puVar3 = PTR_instance_1009cc040;
    iVar1 = *(int *)param_1;
    local_48 = 0;
    plStack_40 = (long *)0x0;
    if (*(unsigned long *)(PTR_instance_1009cc040 + 8) >> 1 == 0x595588bd12bf6fe8) {
      bVar11 = iVar1 != 0;
    }
    else {
      bVar11 = (**(code **)(*(long *)PTR_instance_1009cc040 + 0x30))(PTR_instance_1009cc040,iVar1);
    }
    local_48 = CONCAT44(local_48._4_4_,iVar1);
    plStack_40 = (long *)puVar3;
  }
  else {
    plVar8 = *(long **)(param_1 + 8);
    if (*(long *)(PTR_instance_1009cc040 + 8) == -0x4d54ee85da81202f) {
      plVar5 = (long *)// std code
    }
    else if (*(long *)(PTR_instance_1009cc040 + 8) == -0x4d54ee85da812030) {
      plVar5 = (long *)// std code
    }
    else {
      plVar5 = *(long **)(PTR_instance_1009cc040 + 0x10);
      if (*(long **)(PTR_instance_1009cc040 + 0x10) == (long *)0x0) {
        plVar5 = (long *)new(0x10);
        *plVar5 = (long)(PTR_vtable_1009cc240 + 0x10);
        plVar5[1] = (long)puVar3;
        LOCK();
        plVar6 = *(long **)(puVar3 + 0x10);
        bVar10 = plVar6 == (long *)0x0;
        if (bVar10) {
          *(long **)(puVar3 + 0x10) = plVar5;
          plVar6 = (long *)0x0;
        }
        UNLOCK();
        if (!bVar10) {
          (**(code **)(*plVar5 + 8))();
          plVar5 = plVar6;
        }
      }
    }
    if (plVar8 == plVar5) goto LAB_1002f31f8;
    lVar7 = ___dynamic_cast(*(unsigned long long *)(param_1 + 8),PTR_typeinfo_1009cc140,
                            PTR_typeinfo_1009cc118,0);
    if (lVar7 == 0) {
      bVar10 = *(long *)(*(void **)(this + 8) + 8) == *(long *)(puVar3 + 8);
      if (*(long *)(puVar3 + 8) == 0) {
        bVar10 = *(void **)(this + 8) == puVar3;
      }
      if (!bVar10) {
        return 0;
      }
      plVar8 = (long *)// std code
                    /* WARNING: Could not recover jumptable at 0x0001002f3291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar8 + 0x28))(plVar8,param_1,param_2,*(code **)(*plVar8 + 0x28));
      return uVar9;
    }
    iVar1 = *(int *)param_1;
    plVar8 = *(long **)(lVar7 + 8);
    local_48 = 0;
    plStack_40 = (long *)0x0;
    if ((unsigned long)plVar8[1] >> 1 == 0x595588bd12bf6fe8) {
      bVar11 = iVar1 != 0;
    }
    else {
      bVar11 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar1);
    }
    local_48 = CONCAT44(local_48._4_4_,iVar1);
    plStack_40 = plVar8;
  }
  plVar5 = *(long **)(this + 8);
LAB_1002f32b6:
  local_38 = (unsigned long)bVar11 | 2;
  uVar9 = (**(code **)(*plVar5 + 0x18))(plVar5,&local_48,param_2);
  return uVar9;
}
}
