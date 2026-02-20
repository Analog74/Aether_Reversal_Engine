#include <ni/controller_editor/toAscii_std.hpp>
namespace NI::GP::StringUtil {

void toAscii(std::string const&) {
byte bVar1;
  string *psVar2;
  unsigned long uVar3;
  
  bVar1 = (byte)*param_1 & 1;
  uVar3 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar1 != 0) {
    uVar3 = *(unsigned long *)(param_1 + 8);
  }
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)this = 0;
  if (uVar3 != 0) {
    psVar2 = param_1 + 1;
    if (bVar1 != 0) {
      psVar2 = *(string **)(param_1 + 0x10);
    }
    // std code
    do {
      if (0x7e < (int)(char)*psVar2 - 1U) {
        if (((byte)*this & 1) == 0) {
          *(void2 *)this = 0;
          return this;
        }
        **(unsigned char **)(this + 0x10) = 0;
        *(unsigned long long *)(this + 8) = 0;
        return this;
      }
      // std code
      psVar2 = psVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return this;
}
}
