#include <ni/controller_editor/apply_std.hpp>
namespace NI::GP::details::utf_to_utf<char, char16_t, true> {

void apply(std::u16string const&) {
u16string *puVar1;
  ushort uVar2;
  u16string *puVar3;
  u16string *puVar4;
  uint uVar5;
  unsigned long uVar6;
  
  if (((byte)*param_1 & 1) == 0) {
    puVar3 = param_1 + 2;
    uVar6 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar6 = *(unsigned long *)(param_1 + 8);
    puVar3 = *(u16string **)(param_1 + 0x10);
  }
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  // std code
  if (uVar6 != 0) {
    puVar1 = puVar3 + uVar6 * 2;
    do {
      puVar4 = puVar3 + 2;
      uVar2 = *(ushort *)puVar3;
      uVar5 = (uint)uVar2;
      if ((uVar2 & 0xf800) == 0xd800) {
        if ((puVar4 != puVar1) && (uVar2 < 0xdc00)) {
          puVar4 = puVar3 + 4;
          if ((*(ushort *)(puVar3 + 2) & 0xfc00) == 0xdc00) {
            uVar5 = (uVar2 & 0x3ff) * 0x400 + (*(ushort *)(puVar3 + 2) & 0x3ff) + 0x10000;
            goto LAB_1002fba35;
          }
        }
      }
      else {
LAB_1002fba35:
        // boost code
                  (uVar5,this);
      }
      puVar3 = puVar4;
    } while (puVar3 != puVar1);
  }
  return this;
}
}
