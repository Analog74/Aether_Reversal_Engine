#include <ni/controller_editor/KontrolS_MK2_MCU_Callback.hpp>
namespace NI::dawcontrol::mcu {

KontrolS_MK2_MCU_Callback::~KontrolS_MK2_MCU_Callback() {
*(void ***)this = &PTR__KontrolS_MK2_MCU_Callback_100a4a520;
  resetLEDs(this);
  delete(this);
  return;
}
}
