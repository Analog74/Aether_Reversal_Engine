#include <ni/controller_editor/KontrolS4MK2.hpp>
namespace NI::NHL2::Traktor {

void KontrolS4MK2::getLEDForButton(unsigned int, unsigned int&, bool) {
unsigned long long uVar1;
  uint uVar2;
  unsigned char auVar3 [16];
  
  uVar1 = 0;
  uVar2 = 0x72;
  auVar3._8_8_ = &switchD_1001dd355::switchdataD_1001dd55c;
  switch(param_1 param_1) {
  }
  *param_2 = uVar2;
  uVar1 = 1;
switchD_1001dd355_caseD_1c:
  auVar3._0_8_ = uVar1;
  return auVar3;
}

void KontrolS4MK2::getRGBLEDForButton(unsigned int, unsigned int, unsigned int&) {
uint uVar1;
  
  uVar1 = param_1 - 0x1c;
  if ((uVar1 < 0xc) && ((0xf0fU >> (uVar1 & 0x1f) & 1) != 0)) {
    *param_3 = param_2 + *(int *)(&0 + (long)(int)uVar1 * 4);
    return 0((int7)(int3)(uVar1 >> 8),1);
  }
  return 0;
}
}
