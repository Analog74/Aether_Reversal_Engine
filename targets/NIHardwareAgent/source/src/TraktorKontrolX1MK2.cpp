#include <ni/controller_editor/TraktorKontrolX1MK2.hpp>
namespace non-virtual thunk to NI::NHL2::SERVER {

TraktorKontrolX1MK2::~TraktorKontrolX1MK2() {
TraktorKontrolX1MK2 *this_00;
  void *pvVar1;
  
  this_00 = this + -0x2b0;
  *(void ***)(this + -0x2b0) = &PTR__TraktorKontrolX1MK2_1009d4b48;
  *(void ***)this = &PTR_setLEDColor_1009d4e50;
  *(void ***)(this + 0x30) = &PTR_getLEDDisplayCount_1009d4ee0;
  *(void ***)(this + 0x38) = &PTR_getLevelMeterCount_1009d4f08;
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
