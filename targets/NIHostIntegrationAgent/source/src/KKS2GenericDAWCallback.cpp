#include <ni/controller_editor/KKS2GenericDAWCallback.hpp>
namespace NI::dawcontrol::generic_daw {

void KKS2GenericDAWCallback::setupDisplayPages() {
long *plVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long *puVar4;
  KKS2HardwarePage *pKVar5;
  long *local_48;
  unsigned long long local_40;
  KKS2HardwarePage *local_38;
  
  plVar1 = *(long **)(this + 0x40);
  if (plVar1 != (long *)0x0) {
    uVar2 = *(unsigned long long *)(this + 0x30);
    uVar3 = *(unsigned long long *)(this + 0x38);
    pKVar5 = (KKS2HardwarePage *)new(0x48);
    hw::komplete_kontrol::mk2::KKS2HardwarePage::KKS2HardwarePage(pKVar5,uVar2,0x25,0x20,0x100);
    *(unsigned long long *)(pKVar5 + 0x2c) = 0;
    *(unsigned long long *)(pKVar5 + 0x38) = uVar3;
    *(unsigned int *)(pKVar5 + 0x40) = 0;
    *(void ***)pKVar5 = &PTR__MixerKKS2_100a49550;
    local_38 = pKVar5;
    (**(code **)(*plVar1 + 0x18))(&local_48,plVar1,&local_38);
    puVar4 = *(unsigned long long **)(this + 0x18);
    if (puVar4 < *(unsigned long long **)(this + 0x20)) {
      *puVar4 = local_48;
      puVar4[1] = local_40;
      local_48 = (long *)0x0;
      *(unsigned long long **)(this + 0x18) = puVar4 + 2;
    }
    else {
      // std code
      vector<NI::dawcontrol::hw::HardwarePageHandle,// std code
      ::__emplace_back_slow_path<NI::dawcontrol::hw::HardwarePageHandle>
                ((vector<NI::dawcontrol::hw::HardwarePageHandle,// std code
                  *)(this + 0x10),(HardwarePageHandle *)&local_48);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x30))(local_48,local_40);
      }
    }
    pKVar5 = local_38;
    local_38 = (KKS2HardwarePage *)0x0;
    if (pKVar5 != (KKS2HardwarePage *)0x0) {
      (**(code **)(*(long *)pKVar5 + 8))();
    }
  }
  return;
}

KKS2GenericDAWCallback::~KKS2GenericDAWCallback() {
~KKS2GenericDAWCallback(this);
  delete(this);
  return;
}
}
