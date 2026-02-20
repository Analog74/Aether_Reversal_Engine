#include <ni/controller_editor/setValueString_char_const___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::Registry2::tKey {

void setValueString(char const*, std::string const&) const {
unsigned int uVar1;
  size_t sVar2;
  void *pvVar3;
  unsigned long uVar4;
  unsigned long long local_48;
  size_t local_40;
  void *local_38;
  
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar2 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)sVar2 * '\x02');
    pvVar3 = (void *)((long)&local_48 + 1);
    if (sVar2 == 0) return;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = new char[uVar4];
    local_48 = uVar4 | 1;
    local_40 = sVar2;
    local_38 = pvVar3;
  }
  memcpy(pvVar3,param_1,sVar2);
  *(unsigned char *)((long)pvVar3 + sVar2) = 0;
  uVar1 = DETAIL::Registry2KeyCF::setValue((Registry2KeyCF *)this,(string *)&local_48,param_2);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  return uVar1;
}
}
