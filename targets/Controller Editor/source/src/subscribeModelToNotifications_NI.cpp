#include <ni/controller_editor/subscribeModelToNotifications_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerSubscriptionMonitor {

void subscribeModelToNotifications(NI::Model*) {
unsigned long uVar1;
  unsigned long long *puVar2;
  void *pvVar3;
  void *pvVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  size_t sVar7;
  
  // std code
  puVar2 = *(unsigned long long **)(this + 0x10);
  if (puVar2 == *(unsigned long long **)(this + 0x18)) {
    pvVar3 = *(void **)(this + 8);
    sVar7 = (long)puVar2 - (long)pvVar3;
    uVar5 = (long)sVar7 >> 3;
    uVar1 = uVar5 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar6 = (long)sVar7 >> 2;
    if ((unsigned long)((long)sVar7 >> 2) < uVar1) {
      uVar6 = uVar1;
    }
    if (0xffffffffffffffe < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      pvVar4 = new char[uVar6 * 8];
    }
    *(Model **)((long)pvVar4 + uVar5 * 8) = param_1;
    if (0 < (long)sVar7) {
      memcpy(pvVar4,pvVar3,sVar7);
    }
    *(void **)(this + 8) = pvVar4;
    *(unsigned long *)(this + 0x10) = (long)pvVar4 + uVar5 * 8 + 8;
    *(void **)(this + 0x18) = (void *)((long)pvVar4 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      delete(pvVar3);
    }
  }
  else {
    *puVar2 = param_1;
    *(unsigned long long **)(this + 0x10) = puVar2 + 1;
  }
  // std code
  return 1;
}
}
