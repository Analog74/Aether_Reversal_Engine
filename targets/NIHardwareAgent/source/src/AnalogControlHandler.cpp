#include <ni/controller_editor/AnalogControlHandler.hpp>
namespace NI::NHL2 {

void AnalogControlHandler::queryValues() {
int iVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  int iVar5;
  uint local_50;
  int local_4c;
  unsigned long long local_48;
  void2 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  iVar5 = *(int *)(this + 0x44);
  local_50 = *(uint *)(this + 0x48);
  if ((local_50 & 0xfffffffe) == 0xe) {
    local_40 = 0;
  }
  local_48 = 0;
  iVar1 = *(int *)(this + 0x68);
  local_4c = iVar5;
  (**(code **)(*(long *)this + 0x18))(this);
  puVar4 = *(uint **)(this + 0x50);
  puVar2 = *(uint **)(this + 0x58);
  if (puVar4 != puVar2) {
    do {
      if (*puVar4 != 0xffffffff) {
        local_48 = CONCAT44(local_48._4_4_,(float)*puVar4 / (float)(iVar1 - 1));
        plVar3 = *(long **)(this + 0x30);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
          iVar5 = local_4c;
        }
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      local_4c = iVar5;
    } while (puVar2 != puVar4);
  }
  (**(code **)(*(long *)this + 0x28))(this);
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

AnalogControlHandler::~AnalogControlHandler() {
void *pvVar1;
  AnalogControlHandler *pAVar2;
  
  *(void ***)this = &PTR__ControlHandlerWithState_1009eac28;
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    delete(pvVar1);
  }
  *(void ***)this = &PTR__ControlHandler_1009e9e40;
  pAVar2 = *(AnalogControlHandler **)(this + 0x30);
  if (this + 0x10 == pAVar2) {
    (**(code **)(*(long *)pAVar2 + 0x20))();
  }
  else if (pAVar2 != (AnalogControlHandler *)0x0) {
    (**(code **)(*(long *)pAVar2 + 0x28))();
  }
  delete(this);
  return;
}
}
