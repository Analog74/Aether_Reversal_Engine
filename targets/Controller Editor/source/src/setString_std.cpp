#include <ni/controller_editor/setString_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::__MessageSetUTF16String {

void setString(1 param_1, std::u16string const& {
uint uVar1;
  uint uVar2;
  
  this[0xf] = (__MessageSetUTF16String)0x2;
  if (((byte)*param_1 & 1) == 0) {
    uVar1 = (uint)((byte)*param_1 >> 1);
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
  }
  uVar2 = 0x200;
  if (uVar1 + 1 < 0x200) {
    uVar2 = uVar1 + 1;
  }
  *(uint *)(this + 0x18) = uVar2;
  *(uint *)this = uVar2 * 2 + 0x10;
  if (((byte)*param_1 & 1) != 0) {
    memcpy(this + 0x1c,*(void **)(param_1 + 0x10),(unsigned long)(uVar2 * 2));
    return;
  }
  memcpy(this + 0x1c,param_1 + 2,(unsigned long)(uVar2 * 2));
  return;
}
}
