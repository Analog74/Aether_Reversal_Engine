#include <ni/controller_editor/count_utf16_to_utf8_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace utility {

void count_utf16_to_utf8(1 param_1, std::u16string const& {
long lVar1;
  ushort uVar2;
  unsigned long uVar3;
  range_error *this;
  unsigned long uVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  u16string *puVar7;
  
  if (((byte)*param_1 & 1) == 0) {
    puVar7 = param_1 + 2;
    uVar4 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar4 = *(unsigned long *)(param_1 + 8);
    puVar7 = *(u16string **)(param_1 + 0x10);
  }
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = uVar4;
    do {
      uVar2 = *(ushort *)(puVar7 + uVar5 * 2);
      if (uVar2 < 0x800) {
        uVar6 = (unsigned long)(0x7f < uVar2);
      }
      else {
        uVar6 = 2;
        if ((uVar2 & 0xfc00) == 0xd800) {
          if (uVar5 + 1 == uVar4) {
            this = (range_error *)___cxa_allocate_exception(0x10);
            // std code
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(this,PTR_typeinfo_101ab42f8,PTR__range_error_101ab40a8);
          }
          lVar1 = uVar5 * 2;
          uVar5 = uVar5 + 1;
          if ((*(ushort *)(puVar7 + lVar1 + 2) & 0xfc00) != 0xdc00) {
            this = (range_error *)___cxa_allocate_exception(0x10);
            // std code
            return;
          }
        }
      }
      uVar3 = uVar3 + uVar6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return uVar3;
}
}
