#include <ni/controller_editor/LEDsV1.hpp>
namespace NI::NHL2::Interfaces {

void LEDsV1::getLEDLevelFactors(float&, float&) const {
LEDsV1 LVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = ((float)*(uint *)(this + 0x28) / 100.0) * 0.4;
  fVar3 = ((float)*(uint *)(this + 0x24) * 0.9) / 100.0 + 0.1;
  LVar1 = this[0x2c];
  *param_1 = fVar3 * (float)(byte)LVar1 * fVar2;
  *param_2 = ((1.0 - fVar2) * fVar3 * (float)(byte)LVar1) / 100.0;
  return;
}

void LEDsV1::getLEDLevelFactorsTraktor(float&, float&, float) const {
float fVar1;
  float fVar2;
  LEDsV1 LVar3;
  float *pfVar4;
  float *pfVar5;
  float local_14;
  float local_10;
  float local_c;
  
  local_14 = (float)*(uint *)(this + 0x24) / 100.0;
  local_10 = 0.5;
  pfVar5 = &local_14;
  if (1.0 < local_14) {
    pfVar5 = &local_c;
  }
  local_c = 1.0;
  if (local_14 < 0.5) {
    pfVar5 = &local_10;
  }
  local_14 = (float)*(uint *)(this + 0x28) / 100.0;
  pfVar4 = &local_14;
  if (0.5 < local_14) {
    pfVar4 = &local_c;
  }
  fVar1 = *pfVar5;
  if (local_14 < 0.25) {
    pfVar4 = &local_10;
  }
  local_10 = 0.25;
  local_c = 0.5;
  fVar2 = *pfVar4;
  LVar3 = this[0x2c];
  *param_1 = param_3 * fVar2 * (float)(byte)LVar3 * fVar1;
  *param_2 = ((1.0 - param_3 * fVar2) * (float)(byte)LVar3 * fVar1) / 100.0;
  return;
}

LEDsV1::LEDsV1(unsigned int) {
long lVar1;
  long lVar2;
  uchar local_21;
  
  *(void ***)this = &PTR_setLEDColor_1009e8108;
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
  *(void ***)this = &PTR_setLEDColor_1009e8078;
  *(unsigned long long *)(this + 0x24) = 100;
  this[0x2c] = (LEDsV1)0x7f;
  if (0 < lVar1 - lVar2) {
    ___bzero();
  }
  
}

void LEDsV1::setLEDLevel(unsigned int, float) {
LEDsV1 LVar1;
  float *pfVar2;
  LEDsV1 LVar3;
  float *pfVar4;
  float local_14;
  float local_10;
  float local_c;
  
  local_14 = param_2;
  local_10 = 0.0;
  pfVar4 = &local_14;
  if (1.0 < param_2) {
    pfVar4 = &local_c;
  }
  local_c = 1.0;
  pfVar2 = &local_10;
  if (0.0 <= param_2) {
    pfVar2 = pfVar4;
  }
  LVar3 = this[0x2c];
  LVar1 = SUB41((int)((float)(byte)LVar3 * *pfVar2),0);
  if ((byte)LVar1 <= (byte)LVar3) {
    LVar3 = LVar1;
  }
  if ((char)LVar1 < '\0') {
    LVar3 = LVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001c6720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(this,param_1,LVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0001001c674c. Too many branches */
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
