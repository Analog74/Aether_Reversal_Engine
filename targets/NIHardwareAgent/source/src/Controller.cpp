#include <ni/controller_editor/Controller.hpp>
namespace non-virtual thunk to NI::NHL2::SERVER::GuitarRig {

Controller::~Controller() {
Controller *this_00;
  void *pvVar1;
  
  this_00 = this + -0x2a8;
  *(void ***)(this + -0x2a8) = &PTR__Controller_1009cfa60;
  *(void ***)this = &PTR_setLEDColor_1009cfd40;
  *(void ***)(this + 0x30) = &PTR_getLEDDisplayCount_1009cfdd0;
  onSaveUserPreferences(this_00);
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
