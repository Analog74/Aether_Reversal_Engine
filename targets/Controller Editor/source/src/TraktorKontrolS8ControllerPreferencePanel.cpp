#include <ni/controller_editor/TraktorKontrolS8ControllerPreferencePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolS8ControllerPreferencePanel::changeScaledBrightness(unsigned int, bool) {
void7 in_register_00000011;
  float fVar1;
  float fVar2;
  int local_18;
  uint local_14;
  unsigned long long local_10;
  
  fVar2 = 0.0;
  if (0.0 <= (float)param_1 * 0.01) {
    fVar2 = (float)param_1 * 0.01;
  }
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
  local_14 = (uint)0(in_register_00000011,param_2);
  if (local_14 != 0) {
    fVar2 = 25.0;
  }
  else {
    fVar2 = 50.0;
  }
  local_18 = 0x32;
  if (local_14 != 0) {
    local_18 = 0x19;
  }
  local_14 = local_14 ^ 0x4c454431;
  local_18 = (int)(long)(fVar1 * fVar2) + local_18;
  local_10 = 1;
  (**(code **)(*(long *)(*(long *)(this + 0x420) + 0x7d8) + 0x10))
            (*(long *)(this + 0x420) + 0x7d8,&local_18);
  return;
}
}
