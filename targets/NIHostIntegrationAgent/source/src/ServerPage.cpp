#include <ni/controller_editor/ServerPage.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk2::pages {

void ServerPage::modeControl() const {
return 0x10;
}

void ServerPage::setUpProperties() {
unsigned long long uVar1;
  unsigned long long uVar2;
  NWLServerPage *pNVar3;
  future<void> local_30 [8];
  NWLServerPage *local_28;
  
  uVar1 = *(unsigned long long *)(this + 0x20);
  uVar2 = (**(code **)(*(long *)this + 0x20))();
  pNVar3 = (NWLServerPage *)new(0x3d0);
  gui::NWLServerPage::NWLServerPage(pNVar3,uVar2);
  local_28 = pNVar3;
  ni::pic::Scene::addPage(local_30,uVar1,&local_28);
  // std code
  // std code
  pNVar3 = local_28;
  local_28 = (NWLServerPage *)0x0;
  if (pNVar3 != (NWLServerPage *)0x0) {
    (**(code **)(*(long *)pNVar3 + 8))();
  }
  return;
}
}
