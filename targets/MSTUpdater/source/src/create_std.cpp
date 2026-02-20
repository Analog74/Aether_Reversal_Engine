#include <ni/controller_editor/create_std.hpp>
namespace NI::GP::details::utf_to_utf_chseqref<unsigned short, char, true> {

void create(std::string const&) {
byte bVar1;
  uint uVar2;
  string *psVar3;
  unsigned long uVar4;
  string *local_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  
  bVar1 = (byte)*param_1 & 1;
  psVar3 = param_1 + 1;
  if (bVar1 != 0) {
    psVar3 = *(string **)(param_1 + 0x10);
  }
  uVar4 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar1 != 0) {
    uVar4 = *(unsigned long *)(param_1 + 8);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = psVar3;
  // std code
  ::reserve((basic_string<unsigned_short,// std code
             *)&local_48,uVar4);
  if (uVar4 != 0) {
    do {
      uVar2 = // boost code
                        ((char **)&local_50,(char *)(psVar3 + uVar4));
      if (uVar2 < 0xfffffffe) {
        // boost code
        encode<// std code
                  (uVar2,&local_48);
      }
    } while (local_50 != psVar3 + uVar4);
  }
  *(void2 *)this = 0x101;
  *(unsigned long long *)(this + 0x18) = local_38;
  *(unsigned long long *)(this + 0x10) = uStack_40;
  *(unsigned long long *)(this + 8) = local_48;
  return this;
}
}
