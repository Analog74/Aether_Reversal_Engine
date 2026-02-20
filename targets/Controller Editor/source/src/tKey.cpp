#include <ni/controller_editor/tKey.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::Registry2 {

void tKey::createData() {
*(unsigned long long *)(this + 0x19) = 0;
  *(unsigned long long *)(this + 0x21) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  return;
}

void tKey::disposeData() {
DETAIL::Registry2KeyCF::~Registry2KeyCF((Registry2KeyCF *)this);
  *(unsigned long long *)(this + 0xf0) = 0;
  *(unsigned long long *)(this + 0xf8) = 0;
  *(unsigned long long *)(this + 0xe0) = 0;
  *(unsigned long long *)(this + 0xe8) = 0;
  *(unsigned long long *)(this + 0xd0) = 0;
  *(unsigned long long *)(this + 0xd8) = 0;
  *(unsigned long long *)(this + 0xc0) = 0;
  *(unsigned long long *)(this + 200) = 0;
  *(unsigned long long *)(this + 0xb0) = 0;
  *(unsigned long long *)(this + 0xb8) = 0;
  *(unsigned long long *)(this + 0xa0) = 0;
  *(unsigned long long *)(this + 0xa8) = 0;
  *(unsigned long long *)(this + 0x90) = 0;
  *(unsigned long long *)(this + 0x98) = 0;
  *(unsigned long long *)(this + 0x80) = 0;
  *(unsigned long long *)(this + 0x88) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  return;
}

void tKey::getValueBool(char const*, bool&) const {
unsigned int uVar1;
  size_t sVar2;
  void *pvVar3;
  unsigned long uVar4;
  unsigned long long local_50;
  size_t local_48;
  void *local_40;
  int local_34;
  
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar2 < 0x17) {
    local_50 = 0(local_50._1_7_,(char)sVar2 * '\x02');
    pvVar3 = (void *)((long)&local_50 + 1);
    if (sVar2 == 0) return;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = new char[uVar4];
    local_50 = uVar4 | 1;
    local_48 = sVar2;
    local_40 = pvVar3;
  }
  memcpy(pvVar3,param_1,sVar2);
  *(unsigned char *)((long)pvVar3 + sVar2) = 0;
  uVar1 = DETAIL::Registry2KeyCF::getValue((Registry2KeyCF *)this,(string *)&local_50,&local_34);
  if ((char)uVar1 != '\0') {
    *param_2 = local_34 != 0;
  }
  if ((local_50 & 1) != 0) {
    delete(local_40);
  }
  return uVar1;
}
}
