#include <ni/controller_editor/VendorPipes.hpp>
namespace NI::NHL2::NIUCDevice::OSImpl {

void VendorPipes::ReadCompletition(void*, int, void*) {
char *pcVar1;
  long *plVar2;
  int iVar3;
  unsigned long long uVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  char *pcVar8;
  unsigned long long local_48;
  void *local_40;
  int local_34;
  
  if (param_2 == 0) {
    if ((param_1 != (void *)0x0) &&
       (plVar2 = *(long **)((long)param_1 + 0x40), plVar2 != (long *)0x0)) {
      local_48 = *(unsigned long long *)((long)param_1 + 0x10);
      local_40 = param_3;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48,&local_40);
      scheduleAsyncRead((VendorPipes *)param_1);
    }
  }
  else if (Logging::detail::__reportLevelAsUInt < 2) {
    uVar5 = 0;
    pcVar8 = Logging::allowedCategories;
    iVar3 = param_2;
    if (0 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        local_34 = iVar3;
        uVar6 = uVar5 >> 1;
        iVar3 = // std code
        param_2 = local_34;
        uVar7 = uVar6;
        if (iVar3 < 0) {
          uVar7 = ~uVar6 + uVar5;
          pcVar8 = pcVar8 + uVar6 * 0x18 + 0x18;
        }
        uVar5 = uVar7;
        iVar3 = local_34;
      } while (uVar7 != 0);
      pcVar1 = Logging::allowedCategories + 0 * 0x18;
      uVar5 = 0;
      if ((pcVar8 != pcVar1) &&
         (iVar3 = // std code
        pcVar8 = pcVar1;
      }
    }
    if (pcVar8 != Logging::allowedCategories + uVar5 * 0x18) {
      uVar4 = USBDevice::statusAsString(param_2);
      Logging::detail::__trace__msg
                (1,"%s: ReadCompletition failed with status 0x%x (%s)\n","NIUCDevice",param_2,uVar4)
      ;
      return;
    }
  }
  return;
}

void VendorPipes::scheduleAsyncRead() {
char *pcVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  unsigned long long uVar5;
  unsigned long uVar6;
  char *pcVar7;
  unsigned long uVar8;
  unsigned long uVar9;
  unsigned long long unaff_R15;
  unsigned long uVar10;
  
  plVar2 = *(long **)(this + 0x90);
  if (plVar2 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x108))
                      (plVar2,*this,*(unsigned long long *)(this + 0x10),*(unsigned int *)(this + 8),
                       ReadCompletition);
    uVar10 = 0((int7)((unsigned long)unaff_R15 >> 8),iVar3 == 0);
    if ((Logging::detail::__reportLevelAsUInt < 2) && (iVar3 != 0)) {
      pcVar7 = Logging::allowedCategories;
      uVar6 = 0;
      if (0 == 0) {
        uVar6 = 0;
      }
      else {
        do {
          uVar8 = uVar6 >> 1;
          iVar4 = // std code
          uVar9 = uVar8;
          if (iVar4 < 0) {
            uVar9 = ~uVar8 + uVar6;
            pcVar7 = pcVar7 + uVar8 * 0x18 + 0x18;
          }
          uVar6 = uVar9;
        } while (uVar9 != 0);
        uVar10 = uVar10 & 0xffffffff;
        pcVar1 = Logging::allowedCategories + 0 * 0x18;
        uVar6 = 0;
        if ((pcVar7 != pcVar1) &&
           (iVar4 = // std code
          pcVar7 = pcVar1;
        }
      }
      if (pcVar7 != Logging::allowedCategories + uVar6 * 0x18) {
        uVar5 = USBDevice::statusAsString(iVar3);
        Logging::detail::__trace__msg
                  (1,"%s: ReadPipeAsync failed with status 0x%x (%s)\n","NIUCDevice",iVar3,uVar5);
      }
    }
  }
  return uVar10 & 0xffffffff;
}

VendorPipes::~VendorPipes() {
VendorPipes *pVVar1;
  
  // std code
  if (*(void **)(this + 0x10) != (void *)0x0) {
    delete__(*(void **)(this + 0x10));
  }
  // std code
  // std code
  pVVar1 = *(VendorPipes **)(this + 0x40);
  if (this + 0x20 != pVVar1) {
    if (pVVar1 != (VendorPipes *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001b87d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pVVar1 + 0x28))();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001b87e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pVVar1 + 0x20))();
  return;
}
}
