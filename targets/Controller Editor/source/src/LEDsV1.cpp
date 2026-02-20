#include <ni/controller_editor/LEDsV1.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Interfaces {

LEDsV1::LEDsV1(unsigned int) {
long lVar1;
  long lVar2;
  uchar local_21;
  
  *(void ***)this = &PTR_setLEDColor_101b0f790;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  this[0x20] = (LEDsV1)0x1;
  if (param_1 == 0) {
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    // std code
              ((vector<unsigned_char,// std code
               &local_21);
    lVar2 = *(long *)(this + 8);
    lVar1 = *(long *)(this + 0x10);
  }
  *(void ***)this = &PTR_setLEDColor_101b0f700;
  *(unsigned long long *)(this + 0x24) = 100;
  this[0x2c] = (LEDsV1)0x7f;
  if (0 < lVar1 - lVar2) {
    ___bzero();
  }
  
}

void LEDsV1::setLEDLevel(unsigned int, unsigned char) {
byte bVar1;
  
  bVar1 = (byte)*(unsigned int *)(this + 0x2c);
  if (param_2 <= (byte)*(unsigned int *)(this + 0x2c)) {
    bVar1 = param_2;
  }
  if ((char)param_2 < '\0') {
    bVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010044f17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(this,param_1,bVar1,*(code **)(*(long *)this + 0x68));
  return;
}

void LEDsV1::setLEDLevelByte(unsigned int, unsigned char) {
byte bVar1;
  
  bVar1 = (byte)*(unsigned int *)(this + 0x2c);
  if (param_2 <= (byte)*(unsigned int *)(this + 0x2c)) {
    bVar1 = param_2;
  }
  if ((char)param_2 < '\0') {
    bVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010044f19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x50))(this,param_1,bVar1,*(code **)(*(long *)this + 0x50));
  return;
}

LEDsV1::~LEDsV1() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
