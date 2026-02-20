#include <ni/controller_editor/symbol.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni {

void symbol::hash() const {
return *(unsigned long long *)(*(long *)this + 0x30);
}

void symbol::std_string_view() const {
long lVar1;
  unsigned char auVar2 [16];
  unsigned char auVar3 [16];
  
  lVar1 = *(long *)this;
  if (*(int *)(lVar1 + 0x28) != 0) {
    return *(unsigned char (*) [16])(lVar1 + 8);
  }
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    auVar2._8_8_ = *(unsigned long *)(lVar1 + 0x10) >> 1;
    auVar2._0_8_ = *(unsigned long long *)(lVar1 + 0x20);
    return auVar2;
  }
  auVar3._0_8_ = lVar1 + 0x11;
  auVar3[8] = *(byte *)(lVar1 + 0x10) >> 1;
  auVar3._9_7_ = 0;
  return auVar3;
}
}
