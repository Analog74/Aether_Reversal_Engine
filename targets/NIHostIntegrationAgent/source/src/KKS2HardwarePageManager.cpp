#include <ni/controller_editor/KKS2HardwarePageManager.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk2 {

void KKS2HardwarePageManager::speakCurrentPageMessage() {
unsigned long uVar1;
  long *plVar2;
  KKS2HardwarePageManager *pKVar3;
  KKS2HardwarePageManager *pKVar4;
  long lVar5;
  
  // std code
  // std code
  pKVar4 = *(KKS2HardwarePageManager **)(this + 0x48);
  if (pKVar4 != (KKS2HardwarePageManager *)0x0) {
    uVar1 = *(unsigned long *)(this + 0x58);
    pKVar3 = this + 0x48;
    do {
      if (*(unsigned long *)(pKVar4 + 0x20) >= uVar1) {
        pKVar3 = pKVar4;
      }
      pKVar4 = *(KKS2HardwarePageManager **)
                (pKVar4 + (unsigned long)(*(unsigned long *)(pKVar4 + 0x20) < uVar1) * 8);
    } while (pKVar4 != (KKS2HardwarePageManager *)0x0);
    if ((pKVar3 != this + 0x48) && (*(unsigned long *)(pKVar3 + 0x20) <= uVar1)) {
      lVar5 = *(long *)(pKVar3 + 0x28);
      goto LAB_10004d454;
    }
  }
  lVar5 = 0;
LAB_10004d454:
  // std code
  // std code
  if (lVar5 != 0) {
    plVar2 = (long *)___dynamic_cast(lVar5,&HardwarePage::typeinfo,&KKS2HardwarePage::typeinfo,0);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010004d496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x40))(plVar2);
      return;
    }
  }
  return;
}

void KKS2HardwarePageManager::updateMidiSettings() {
unsigned long uVar1;
  long lVar2;
  KKS2HardwarePageManager *pKVar3;
  KKS2HardwarePageManager *pKVar4;
  
  // std code
  // std code
  pKVar4 = *(KKS2HardwarePageManager **)(this + 0x48);
  if (pKVar4 != (KKS2HardwarePageManager *)0x0) {
    uVar1 = *(unsigned long *)(this + 0x58);
    pKVar3 = this + 0x48;
    do {
      if (*(unsigned long *)(pKVar4 + 0x20) >= uVar1) {
        pKVar3 = pKVar4;
      }
      pKVar4 = *(KKS2HardwarePageManager **)
                (pKVar4 + (unsigned long)(*(unsigned long *)(pKVar4 + 0x20) < uVar1) * 8);
    } while (pKVar4 != (KKS2HardwarePageManager *)0x0);
    if ((pKVar3 != this + 0x48) && (*(unsigned long *)(pKVar3 + 0x20) <= uVar1)) {
      lVar2 = *(long *)(pKVar3 + 0x28);
      goto LAB_10004d374;
    }
  }
  lVar2 = 0;
LAB_10004d374:
  // std code
  // std code
  if (lVar2 != 0) {
    lVar2 = ___dynamic_cast(lVar2,&HardwarePage::typeinfo,&pages::MidiControl::typeinfo,0);
    if (lVar2 != 0) {
      KontrolS_MK2::readMidiSettings(*(KontrolS_MK2 **)(*(long *)(lVar2 + 0x30) + 0x88));
      return;
    }
  }
  return;
}
}
