#include <ni/controller_editor/RigControl3.hpp>
namespace NI::NHL2::SERVER {

RigControl3::RigControl3() {
GuitarRig::Controller::Controller((Controller *)this,false);
  *(void ***)this = &PTR__RigControl3_1009d0190;
  *(void ***)(this + 0x2a8) = &PTR_setLEDColor_1009d0470;
  *(void ***)(this + 0x2d8) = &PTR_getLEDDisplayCount_1009d0500;
  
}

RigControl3::~RigControl3() {
unsigned long long *puVar1;
  void *pvVar2;
  unsigned long long *puVar3;
  char *pcVar4;
  
  *(void ***)this = &PTR__Controller_1009cfa60;
  *(void ***)(this + 0x2a8) = &PTR_setLEDColor_1009cfd40;
  *(void ***)(this + 0x2d8) = &PTR_getLEDDisplayCount_1009cfdd0;
  if (this[0x2e0] == (RigControl3)0x0) {
    GP::Registry::set("Rig Kontrol 3 StartInMidiMode",*(int *)(this + 0x254) == 0x4d494449,0);
  }
  puVar1 = *(unsigned long long **)(this + 0x298);
  for (puVar3 = *(unsigned long long **)(this + 0x290); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    pcVar4 = "Rig Kontrol 2";
    if (this[0x2e0] == (RigControl3)0x0) {
      pcVar4 = "Rig Kontrol 3";
    }
    FX2Controller::savePedalValues(pcVar4,(FX2Pedal *)*puVar3,true);
  }
  *(void ***)(this + 0x2a8) = &PTR_setLEDColor_1009e8108;
  pvVar2 = *(void **)(this + 0x2b0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x2b8) = pvVar2;
    delete(pvVar2);
  }
  FX2Controller::~FX2Controller((FX2Controller *)this);
  return;
}
}
