#include <ni/controller_editor/KontrolS_MK2_MCU_Client.hpp>
namespace NI::dawcontrol::mcu {

KontrolS_MK2_MCU_Client::~KontrolS_MK2_MCU_Client() {
int *piVar1;
  KontrolS_MK2_MCU_Client KVar2;
  long *plVar3;
  long *plVar4;
  KontrolS_MK2_MCU_Client *pKVar5;
  
  // boost code
  plVar3 = *(long **)(this + 0x90);
  if (plVar3 != (long *)0x0) {
    LOCK();
    piVar1 = (int *)((long)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  plVar3 = *(long **)(this + 0x80);
  *(unsigned long long *)(this + 0x80) = 0;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[4];
    if (plVar3 == plVar4) {
      (**(code **)(*plVar4 + 0x20))();
    }
    else if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))();
    }
    delete(plVar3);
  }
  plVar3 = *(long **)(this + 0x78);
  *(unsigned long long *)(this + 0x78) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(void ***)this = &PTR__InternalClient_100a57970;
  pKVar5 = *(KontrolS_MK2_MCU_Client **)(this + 0x60);
  if (this + 0x40 == pKVar5) {
    (**(code **)(*(long *)pKVar5 + 0x20))();
    KVar2 = this[0x20];
  }
  else {
    if (pKVar5 != (KontrolS_MK2_MCU_Client *)0x0) {
      (**(code **)(*(long *)pKVar5 + 0x28))();
    }
    KVar2 = this[0x20];
  }
  if (((byte)KVar2 & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x30));
  return;
}
}
