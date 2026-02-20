#include <ni/controller_editor/uuids.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace char* boost::uuids::to_chars<char*>(boost {

void uuids::uuid const&, char*) {
char cVar1;
  char cVar2;
  
  cVar1 = 'W';
  if ((byte)*param_1 < 0xa0) {
    cVar1 = '0';
  }
  *param_2 = cVar1 + ((byte)*param_1 >> 4);
  cVar1 = 'W';
  if (((byte)*param_1 & 0xf) < 10) {
    cVar1 = '0';
  }
  param_2[1] = cVar1 + ((byte)*param_1 & 0xf);
  cVar2 = '0';
  cVar1 = 'W';
  if ((byte)param_1[1] < 0xa0) {
    cVar1 = '0';
  }
  param_2[2] = cVar1 + ((byte)param_1[1] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[1] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[3] = cVar1 + ((byte)param_1[1] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[2] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[4] = cVar1 + ((byte)param_1[2] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[2] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[5] = cVar1 + ((byte)param_1[2] & 0xf);
  cVar2 = '0';
  cVar1 = 'W';
  if ((byte)param_1[3] < 0xa0) {
    cVar1 = '0';
  }
  param_2[6] = cVar1 + ((byte)param_1[3] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[3] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[7] = cVar1 + ((byte)param_1[3] & 0xf);
  param_2[8] = '-';
  cVar1 = 'W';
  if ((byte)param_1[4] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[9] = cVar1 + ((byte)param_1[4] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[4] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[10] = cVar1 + ((byte)param_1[4] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[5] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0xb] = cVar1 + ((byte)param_1[5] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[5] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0xc] = cVar1 + ((byte)param_1[5] & 0xf);
  param_2[0xd] = '-';
  cVar1 = 'W';
  if ((byte)param_1[6] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0xe] = cVar1 + ((byte)param_1[6] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[6] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0xf] = cVar1 + ((byte)param_1[6] & 0xf);
  cVar2 = '0';
  cVar1 = 'W';
  if ((byte)param_1[7] < 0xa0) {
    cVar1 = '0';
  }
  param_2[0x10] = cVar1 + ((byte)param_1[7] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[7] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x11] = cVar1 + ((byte)param_1[7] & 0xf);
  param_2[0x12] = '-';
  cVar1 = 'W';
  if ((byte)param_1[8] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0x13] = cVar1 + ((byte)param_1[8] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[8] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x14] = cVar1 + ((byte)param_1[8] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[9] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0x15] = cVar1 + ((byte)param_1[9] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[9] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x16] = cVar1 + ((byte)param_1[9] & 0xf);
  param_2[0x17] = '-';
  cVar1 = 'W';
  if ((byte)param_1[10] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0x18] = cVar1 + ((byte)param_1[10] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[10] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x19] = cVar1 + ((byte)param_1[10] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[0xb] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0x1a] = cVar1 + ((byte)param_1[0xb] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[0xb] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x1b] = cVar1 + ((byte)param_1[0xb] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[0xc] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0x1c] = cVar1 + ((byte)param_1[0xc] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[0xc] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x1d] = cVar1 + ((byte)param_1[0xc] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[0xd] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0x1e] = cVar1 + ((byte)param_1[0xd] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[0xd] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x1f] = cVar1 + ((byte)param_1[0xd] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[0xe] < 0xa0) {
    cVar1 = cVar2;
  }
  param_2[0x20] = cVar1 + ((byte)param_1[0xe] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[0xe] & 0xf) < 10) {
    cVar1 = cVar2;
  }
  param_2[0x21] = cVar1 + ((byte)param_1[0xe] & 0xf);
  cVar1 = 'W';
  if ((byte)param_1[0xf] < 0xa0) {
    cVar1 = '0';
  }
  param_2[0x22] = cVar1 + ((byte)param_1[0xf] >> 4);
  cVar1 = 'W';
  if (((byte)param_1[0xf] & 0xf) < 10) {
    cVar1 = '0';
  }
  param_2[0x23] = cVar1 + ((byte)param_1[0xf] & 0xf);
  return param_2 + 0x24;
}
}
