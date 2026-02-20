#include <ni/controller_editor/KontrolAM_MCU_Client.hpp>
namespace NI::dawcontrol::mcu {

void KontrolAM_MCU_Client::controller() {
return *(unsigned long long *)(this + 0x160);
}

void KontrolAM_MCU_Client::getProperties() {
*(unsigned int *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)this = 0x4d4355634d435544;
  *(unsigned long long *)(this + 8) = 0x70726d79;
  // std code
  *(unsigned int *)(this + 0x10) = 2;
  return this;
}

void KontrolAM_MCU_Client::onDeviceAvailable(bool param_1) {
}

KontrolAM_MCU_Client::~KontrolAM_MCU_Client() {
long *plVar1;
  KontrolAM_MCU_Client *pKVar2;
  
  plVar1 = *(long **)(this + 0x160);
  *(unsigned long long *)(this + 0x160) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pKVar2 = *(KontrolAM_MCU_Client **)(this + 0x140);
  if (this + 0x120 == pKVar2) {
    (**(code **)(*(long *)pKVar2 + 0x20))();
  }
  else if (pKVar2 != (KontrolAM_MCU_Client *)0x0) {
    (**(code **)(*(long *)pKVar2 + 0x28))();
  }
  DAWControlClient::~DAWControlClient((DAWControlClient *)this);
  delete(this);
  return;
}
}
