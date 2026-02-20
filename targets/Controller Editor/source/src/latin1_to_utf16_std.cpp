#include <ni/controller_editor/latin1_to_utf16_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace utility::conversions {

void latin1_to_utf16(1 param_1, std::string const& {
conversions cVar1;
  string *psVar2;
  unsigned long uVar3;
  conversions *pcVar4;
  
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar3 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar3 = *(unsigned long *)(param_1 + 8);
  }
  if (uVar3 == 0) {
    *(void2 *)(this + 2) = 0;
    *this = (conversions)((char)uVar3 * '\x02');
  }
  else {
    if ((uVar3 < 0xb) ||
       (// std code
    {
      pcVar4 = this + 2;
    }
    else {
      pcVar4 = *(conversions **)(this + 0x10);
    }
    ___bzero(pcVar4);
    if (((byte)*this & 1) == 0) {
      *this = (conversions)((char)uVar3 * '\x02');
    }
    else {
      *(unsigned long *)(this + 8) = uVar3;
    }
    *(void2 *)(pcVar4 + uVar3 * 2) = 0;
  }
  uVar3 = 0;
  do {
    if (((byte)*param_1 & 1) == 0) {
      if ((byte)*param_1 >> 1 <= uVar3) {
        return this;
      }
      cVar1 = *this;
      psVar2 = param_1 + 1;
    }
    else {
      if (*(unsigned long *)(param_1 + 8) <= uVar3) {
        return this;
      }
      cVar1 = *this;
      psVar2 = *(string **)(param_1 + 0x10);
    }
    pcVar4 = this + 2;
    if (((byte)cVar1 & 1) != 0) {
      pcVar4 = *(conversions **)(this + 0x10);
    }
    *(ushort *)(pcVar4 + uVar3 * 2) = (ushort)(byte)psVar2[uVar3];
    uVar3 = uVar3 + 1;
  } while( true );
}
}
