#include <ni/controller_editor/binaryToBase64_boost.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void binaryToBase64(3 param_3, boost::span<unsigned char const, 18446744073709551615ul> {
unsigned long uVar1;
  byte bVar2;
  byte *pbVar3;
  unsigned long uVar4;
  unsigned char auVar5 [16];
  double dVar6;
  char local_40 [8];
  unsigned long long local_38;
  
  auVar5._8_4_ = (int)((unsigned long)param_3 >> 0x20);
  auVar5._0_8_ = param_3;
  auVar5._12_4_ = 0x45300000;
  dVar6 = (((auVar5._8_8_ - 1.9342813113834067e+25) +
           ((double)CONCAT44(0x43300000,(int)param_3) - 4503599627370496.0)) * 4.0) / 3.0;
  uVar4 = (long)dVar6;
  if (9.223372036854776e+18 <= dVar6) {
    uVar4 = (long)(dVar6 - 9.223372036854776e+18) ^ 0x8000000000000000;
  }
  uVar1 = uVar4 + 0x10;
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  local_38 = param_3;
  if (uVar1 < 0x17) {
    *(char *)param_1 = (char)uVar1 * '\x02';
    pbVar3 = (byte *)((long)param_1 + 1);
    if (uVar1 == 0) {
      *pbVar3 = 0;
      bVar2 = (byte)*param_1;
      goto joined_r0x00010071d054;
    }
  }
  else {
    uVar4 = uVar4 + 0x20 & 0xfffffffffffffff0;
    pbVar3 = (byte *)new char[uVar4];
    param_1[2] = (unsigned long)pbVar3;
    *param_1 = uVar4 | 1;
    param_1[1] = uVar1;
  }
  _memset(pbVar3,0x20,uVar1);
  pbVar3[uVar1] = 0;
  bVar2 = (byte)*param_1;
joined_r0x00010071d054:
  if ((bVar2 & 1) == 0) {
    pbVar3 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar3 = (byte *)param_1[2];
  }
  _base64_encode(param_2,local_38,pbVar3,local_40,0);
  // std code
  return param_1;
}
}
