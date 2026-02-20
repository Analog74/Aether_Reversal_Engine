#include <ni/controller_editor/SleepModeClient.hpp>
namespace NI::NHL2::SERVER {

void SleepModeClient::enterSleepMode() {
/* WARNING: Could not recover jumptable at 0x00010008c39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x70) + 0x120))();
  return;
}

void SleepModeClient::leaveSleepMode() {
return;
}

SleepModeClient::~SleepModeClient() {
SleepModeClient SVar1;
  SleepModeClient *pSVar2;
  
  *(void ***)this = &PTR__InternalClient_1009d77b8;
  pSVar2 = *(SleepModeClient **)(this + 0x60);
  if (this + 0x40 == pSVar2) {
    (**(code **)(*(long *)pSVar2 + 0x20))();
    SVar1 = this[0x20];
  }
  else {
    if (pSVar2 != (SleepModeClient *)0x0) {
      (**(code **)(*(long *)pSVar2 + 0x28))();
    }
    SVar1 = this[0x20];
  }
  if (((byte)SVar1 & 1) != 0) {
    delete(*(void **)(this + 0x30));
  }
  delete(this);
  return;
}
}
