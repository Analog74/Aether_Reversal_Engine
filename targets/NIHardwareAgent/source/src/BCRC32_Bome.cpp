#include <ni/controller_editor/BCRC32_Bome.hpp>
namespace Bome::BCRC32 {

void BCRC32(Bome::BString const&) {
byte *pbVar1;
  uint uVar2;
  byte bVar3;
  
  *(unsigned int *)this = 0xffffffff;
  pbVar1 = (byte *)BString::toUTF8(param_1);
  if ((pbVar1 != (byte *)0x0) && (bVar3 = *pbVar1, bVar3 != 0)) {
    uVar2 = *(uint *)this;
    do {
      pbVar1 = pbVar1 + 1;
      uVar2 = uVar2 >> 8 ^ *(uint *)(&crc_32_tab + (unsigned long)(uVar2 & 0xff ^ (uint)bVar3) * 4);
      *(uint *)this = uVar2;
      bVar3 = *pbVar1;
    } while (bVar3 != 0);
  }
  return;
}
}
