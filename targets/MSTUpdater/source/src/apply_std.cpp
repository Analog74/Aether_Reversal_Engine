#include <ni/controller_editor/apply_std.hpp>
namespace NI::GP::details::utf_to_utf<char16_t, char, true> {

void apply(std::string const&) {
byte bVar1;
  uint uVar2;
  string *psVar3;
  unsigned long uVar4;
  string *local_28;
  
  bVar1 = (byte)*param_1 & 1;
  psVar3 = param_1 + 1;
  if (bVar1 != 0) {
    psVar3 = *(string **)(param_1 + 0x10);
  }
  uVar4 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar1 != 0) {
    uVar4 = *(unsigned long *)(param_1 + 8);
  }
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)this = 0;
  local_28 = psVar3;
  // std code
  if (uVar4 != 0) {
    do {
      uVar2 = // boost code
                        ((char **)&local_28,(char *)(psVar3 + uVar4));
      if (uVar2 < 0xfffffffe) {
        // boost code
        encode<// std code
      }
    } while (local_28 != psVar3 + uVar4);
  }
  return this;
}
}
