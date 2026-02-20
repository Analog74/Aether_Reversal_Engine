#include <ni/controller_editor/removeFirst_std.hpp>
namespace NI::GP::StringUtil {

void removeFirst(std::string&, unsigned long) {
byte bVar1;
  unsigned long uVar2;
  
  bVar1 = (byte)*param_1 & 1;
  uVar2 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar1 != 0) {
    uVar2 = *(unsigned long *)(param_1 + 8);
  }
  if (param_2 < uVar2) {
    if (param_2 != 0) {
      // std code
      return;
    }
  }
  else {
    if (bVar1 != 0) {
      **(unsigned char **)(param_1 + 0x10) = 0;
      *(unsigned long long *)(param_1 + 8) = 0;
      return;
    }
    *(void2 *)param_1 = 0;
  }
  return;
}
}
