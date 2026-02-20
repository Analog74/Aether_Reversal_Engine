#include <ni/controller_editor/setResult_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MessageGetString {

void setResult(1 param_1, std::string const& {
string sVar1;
  uint uVar2;
  MessageGetString *pMVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  long lVar6;
  string *psVar7;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = (uint)((byte)*param_1 >> 1);
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
  }
  uVar5 = 0x200;
  if (uVar2 + 1 < 0x200) {
    uVar5 = (unsigned long)(uVar2 + 1);
  }
  *(int *)(this + 0x18) = (int)uVar5;
  if (((byte)*param_1 & 1) == 0) {
    psVar7 = param_1 + 1;
    sVar1 = *psVar7;
  }
  else {
    psVar7 = *(string **)(param_1 + 0x10);
    sVar1 = *psVar7;
  }
  if (sVar1 == (string)0x0) {
    pMVar3 = this + 0x1c;
  }
  else {
    uVar4 = 1;
    if (uVar5 != 0) {
      uVar4 = uVar5;
    }
    lVar6 = 0;
    do {
      *(string *)(this + lVar6 + 0x1c) = sVar1;
      if (uVar4 - 1 == lVar6) break;
      sVar1 = psVar7[lVar6 + 1];
      lVar6 = lVar6 + 1;
    } while (sVar1 != (string)0x0);
    pMVar3 = this + lVar6 + 0x1c;
  }
  *pMVar3 = (MessageGetString)0x0;
  *(unsigned int *)(this + 4) = 0x18;
  *(int *)(this + 8) = *(int *)(this + 0x18) + 4;
  return;
}
}
