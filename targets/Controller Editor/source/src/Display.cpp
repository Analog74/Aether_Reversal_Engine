#include <ni/controller_editor/Display.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Display::renderPixel(unsigned int, NI::NHL2 {

void Display::DataFormat, unsigned char*&) {
unsigned char *puVar1;
  byte bVar2;
  unsigned char uVar3;
  byte bVar4;
  byte *pbVar6;
  byte bVar5;
  
  bVar2 = (byte)param_1;
  uVar3 = (unsigned char)(param_1 >> 8);
  bVar4 = (byte)(param_1 >> 0x10);
  bVar5 = (byte)(param_1 >> 0x18);
  switch(param_2 & 0xbf) {
  case 0x10:
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = 0xff;
    return;
  case 0x11:
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = uVar3;
    return;
  case 0x12:
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar5;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = uVar3;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = (char)param_1;
    return;
  case 0x13:
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = uVar3;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar2;
    return;
  case 0x14:
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = 0xff;
    return;
  case 0x15:
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar2;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = uVar3;
    param_1 = param_1 >> 0x10;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = (char)param_1;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = 0xff;
    return;
  case 0x16:
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar5;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar2;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = uVar3;
    param_1 = param_1 >> 0x10;
    return;
  case 0x17:
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar2;
    puVar1 = (unsigned char *)*param_3;
    *param_3 = (long)(puVar1 + 1);
    *puVar1 = uVar3;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    param_1 = param_1 >> 0x18;
    return;
  case 0x18:
    *(byte *)*param_3 = (byte)(param_1 >> 0x11) & 0x7c;
    return;
  case 0x19:
    *(byte *)*param_3 = bVar4 & 0xf8;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xd) & 7;
    *(byte *)*param_3 = (byte)(param_1 >> 5) & 0xc0;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    bVar2 = bVar2 >> 2;
    break;
  case 0x1a:
    *(byte *)*param_3 = bVar5 & 0x80;
    *(byte *)*param_3 = *(byte *)*param_3 | (byte)(param_1 >> 0x11) & 0x7c;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xe) & 3;
    bVar4 = (byte)(param_1 >> 6);
    *(byte *)*param_3 = bVar4 & 0xe0;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    bVar2 = bVar2 >> 3;
    break;
  case 0x1b:
    *(byte *)*param_3 = bVar4 & 0xf8;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xd) & 7;
    *(byte *)*param_3 = (byte)(param_1 >> 5) & 0xc0;
    *(byte *)*param_3 = *(byte *)*param_3 | bVar2 >> 2;
    return;
  case 0x1c:
    *(byte *)*param_3 = bVar2 >> 1 & 0x7c;
    return;
  case 0x1d:
    *(byte *)*param_3 = bVar2 & 0xf8;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xd) & 7;
    *(byte *)*param_3 = (byte)(param_1 >> 5) & 0xc0;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    bVar2 = (byte)(param_1 >> 0x12) & 0x3f;
    break;
  case 0x1e:
    *(byte *)*param_3 = bVar5 & 0x80;
    *(byte *)*param_3 = *(byte *)*param_3 | bVar2 >> 1 & 0x7c;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xe) & 3;
    bVar2 = (byte)(param_1 >> 6);
    *(byte *)*param_3 = bVar2 & 0xe0;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    bVar2 = (byte)(param_1 >> 0x13) & 0x1f;
    break;
  case 0x1f:
    *(byte *)*param_3 = bVar2 & 0xf8;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xd) & 7;
    *(byte *)*param_3 = (byte)(param_1 >> 5) & 0xc0;
    *(byte *)*param_3 = *(byte *)*param_3 | (byte)(param_1 >> 0x12) & 0x3f;
    bVar2 = bVar5 >> 7;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    break;
  case 0x20:
    *(byte *)*param_3 = bVar4 & 0xf8;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xd) & 7;
    bVar4 = (byte)(param_1 >> 5);
    return;
  case 0x21:
    *(byte *)*param_3 = bVar2 & 0xf8;
    pbVar6 = (byte *)*param_3;
    *param_3 = (long)(pbVar6 + 1);
    *pbVar6 = *pbVar6 | (byte)(param_1 >> 0xd) & 7;
    bVar2 = (byte)(param_1 >> 5);
    return;
  default:
    goto switchD_10043fbda_default;
  }
  *pbVar6 = *pbVar6 | bVar2;
switchD_10043fbda_default:
  return;
}
}
