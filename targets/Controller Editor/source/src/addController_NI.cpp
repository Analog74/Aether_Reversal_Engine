#include <ni/controller_editor/addController_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerManager {

void addController(NI::IController*) {
unsigned long uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  unsigned long uVar6;
  size_t sVar7;
  unsigned long uVar8;
  
  plVar2 = *(long **)(this + 0x110);
  plVar3 = *(long **)(this + 0x118);
  plVar4 = plVar2;
  if (plVar2 == plVar3) {
    if (plVar4 != plVar3) {
      return 0;
    }
  }
  else {
    do {
      if ((IController *)*plVar4 == param_1) return;
      plVar4 = plVar4 + 1;
    } while (plVar3 != plVar4);
  }
  if (plVar3 == *(long **)(this + 0x120)) {
    sVar7 = (long)plVar3 - (long)plVar2;
    uVar6 = (long)sVar7 >> 3;
    uVar1 = uVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar8 = (long)sVar7 >> 2;
    if ((unsigned long)((long)sVar7 >> 2) < uVar1) {
      uVar8 = uVar1;
    }
    if (0xffffffffffffffe < uVar6) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      pvVar5 = new char[uVar8 * 8];
    }
    *(IController **)((long)pvVar5 + uVar6 * 8) = param_1;
    if (0 < (long)sVar7) {
      memcpy(pvVar5,plVar2,sVar7);
    }
    *(void **)(this + 0x110) = pvVar5;
    *(unsigned long *)(this + 0x118) = (long)pvVar5 + uVar6 * 8 + 8;
    *(void **)(this + 0x120) = (void *)((long)pvVar5 + uVar8 * 8);
    if (plVar2 != (long *)0x0) {
      delete(plVar2);
    }
  }
  else {
    *plVar3 = (long)param_1;
    *(long **)(this + 0x118) = plVar3 + 1;
  }
  if (*(long *)(this + 0x208) == 0) {
    *(IController **)(this + 0x208) = param_1;
  }
  return 1;
}
}
