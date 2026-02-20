#include <ni/controller_editor/LEDs.hpp>
namespace NI::NHL2::Interfaces {

LEDs::LEDs(unsigned int) {
uchar local_21;
  
  *(void ***)this = &PTR_setLEDColor_1009e8108;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  this[0x20] = (LEDs)0x1;
  if (param_1 != 0) {
    // std code
              ((vector<unsigned_char,// std code
               &local_21);
  }
  
}

void LEDs::setAllLEDsOff() {
char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = *(char **)(this + 8);
  pcVar1 = *(char **)(this + 0x10);
  if (pcVar2 != pcVar1) {
    bVar3 = false;
    do {
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        bVar3 = true;
      }
      pcVar2 = pcVar2 + 1;
    } while (pcVar1 != pcVar2);
    if (bVar3) {
      LOCK();
      this[0x20] = (LEDs)0x1;
      UNLOCK();
      return 0((int7)((unsigned long)pcVar2 >> 8),1);
    }
  }
  return 0;
}

void LEDs::setLEDOff(unsigned int) {
/* WARNING: Could not recover jumptable at 0x0001001c725e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x50))(this,param_1,0);
  return;
}

void LEDs::setRawLEDByte(unsigned int, unsigned char) {
uchar uVar1;
  
  uVar1 = *(uchar *)(*(long *)(this + 8) + (unsigned long)param_1);
  if (uVar1 != param_2) {
    *(uchar *)(*(long *)(this + 8) + (unsigned long)param_1) = param_2;
    LOCK();
    this[0x20] = (LEDs)0x1;
    UNLOCK();
  }
  return uVar1 != param_2;
}

LEDs::~LEDs() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
