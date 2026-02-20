#include <ni/controller_editor/decodeURI_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::util {

void decodeURI(1 param_1, std::string const& {
string *psVar1;
  void *pvVar2;
  util *puVar3;
  char cVar4;
  string sVar5;
  string *psVar6;
  byte bVar7;
  FILE *pFVar8;
  unsigned long uVar9;
  string *psVar10;
  string *local_88;
  unsigned long local_80;
  unsigned long long local_78;
  void *local_68;
  util *local_60;
  unsigned long local_58;
  unsigned long long uStack_50;
  void *local_48;
  string local_38;
  string local_37;
  unsigned char local_36;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  local_60 = this;
  // std code
  local_36 = 0;
  psVar10 = param_1 + 1;
  uVar9 = 0;
  local_80 = (unsigned long)(byte)*param_1;
  cVar4 = (char)&local_58;
  if (((byte)*param_1 & 1) != 0) return;
  if (local_80 >> 1 <= uVar9) {
    *(void **)(local_60 + 0x10) = local_48;
    *(unsigned long *)local_60 = local_58;
    *(unsigned long long *)(local_60 + 8) = uStack_50;
    return local_60;
  }
  sVar5 = psVar10[uVar9];
  if (sVar5 == (string)0x25) return;
  do {
    if (sVar5 == (string)0x2b) {
      // std code
    }
    else {
      // std code
    }
    uVar9 = uVar9 + 1;
    sVar5 = *param_1;
    while( true ) {
    }
  } while( true );
}
}
