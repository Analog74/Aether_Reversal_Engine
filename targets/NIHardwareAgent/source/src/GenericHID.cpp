#include <ni/controller_editor/GenericHID.hpp>
namespace NI::NHL2::Display {

void GenericHID::disconnectBulkInterface() {
if ((*(long **)(this + 0x28) != (long *)0x0) && (this[0x30] != (GenericHID)0x0)) {
    this[0x30] = (GenericHID)0x0;
    (**(code **)(**(long **)(this + 0x28) + 0x10))();
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
  }
  *(unsigned long long *)(this + 0x28) = 0;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    delete__(*(void **)(this + 0x38));
  }
  *(unsigned long long *)(this + 0x38) = 0;
  return;
}

GenericHID::GenericHID(unsigned char) {
*this = (GenericHID)param_1;
  *(unsigned long long *)(this + 8) = 0;
  HIDReport::HIDReport((HIDReport *)(this + 0x10),0x108,param_1 + 0xe0);
  *(unsigned long long *)(this + 0x28) = 0;
  this[0x30] = (GenericHID)0x0;
  *(unsigned long long *)(this + 0x38) = 0;
  HIDReport::HIDReport((HIDReport *)(this + 0x40),10,param_1 + 0xf8);
  *(unsigned int *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x80) = 0;
  *(unsigned char *)(*(long *)(this + 0x40) + 9) = 0x32;
  
}

void GenericHID::isBulkInterfaceAvailable() {
long lVar1;
  
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 != 0) {
    return 0((int7)((unsigned long)lVar1 >> 8),*(char *)(lVar1 + 0x10) != '\0');
  }
  return 0;
}

void GenericHID::setBacklight(unsigned int) {
long *plVar1;
  unsigned long long in_RDX;
  unsigned char in_SIL;
  unsigned int in_register_0000003c;
  long lVar2;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  *(unsigned char *)(*(long *)(lVar2 + 0x40) + 8) = in_SIL;
  plVar1 = *(long **)(lVar2 + 8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001aba77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,lVar2 + 0x40,in_RDX,*(code **)(*plVar1 + 0x50));
    return;
  }
  return;
}

GenericHID::~GenericHID() {
~GenericHID(this);
  return;
}
}
