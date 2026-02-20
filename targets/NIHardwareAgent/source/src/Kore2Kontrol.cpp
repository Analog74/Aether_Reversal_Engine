#include <ni/controller_editor/Kore2Kontrol.hpp>
namespace non-virtual thunk to NI::NHL2::SERVER {

Kore2Kontrol::~Kore2Kontrol() {
Controller *this_00;
  void *pvVar1;
  
  this_00 = (Controller *)(this + -0x2a8);
  *(void ***)(this + -0x2a8) = &PTR__Controller_1009cedc0;
  *(void ***)this = &PTR_setLEDColor_1009cf0d0;
  *(void ***)(this + 0x30) = &PTR_getDisplayCount_1009cf160;
  KORE::Controller::onSaveUserPreferences(this_00);
  if (*(void **)(this + 0x40) != (void *)0x0) {
    delete(*(void **)(this + 0x40));
  }
  *(void ***)this = &PTR_setLEDColor_1009e8108;
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar1);
  }
  FX2Controller::~FX2Controller((FX2Controller *)this_00);
  delete(this_00);
  return;
}
}
