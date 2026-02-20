#include <ni/controller_editor/TraktorKontrolF1.hpp>
namespace non-virtual thunk to NI::NHL2::SERVER {

TraktorKontrolF1::~TraktorKontrolF1() {
TraktorKontrolF1 *this_00;
  void *pvVar1;
  
  this_00 = this + -0x2b0;
  *(void ***)(this + -0x2b0) = &PTR__TraktorKontrolF1_1009d25d0;
  *(void ***)this = &PTR_setLEDColor_1009d28b8;
  *(void ***)(this + 0x30) = &PTR_getLEDDisplayCount_1009d2948;
  onSaveUserPreferences(this_00);
  *(void ***)this = &PTR_setLEDColor_1009e8108;
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar1);
  }
  HIDController::~HIDController((HIDController *)this_00);
  delete(this_00);
  return;
}
}
