#include <ni/controller_editor/eMessageType__std.hpp>
namespace NI::NHL2::MessageSetString::MessageSetString(NI::NHL2 {

void eMessageType, std::string const&) {
unsigned long uVar1;
  long lVar2;
  MessageSetString MVar3;
  uint uVar4;
  unsigned long uVar5;
  MessageSetString *pMVar6;
  MessageSetString *pMVar7;
  
  *(unsigned long long *)(this + 4) = 0x10;
  *(uint *)(this + 0xc) = param_2 | 0x3000000;
  pMVar7 = this + 0x1c;
  ___bzero(pMVar7,0x200);
  *(unsigned int *)this = 0x10;
  if ((*param_3 & 1) == 0) {
    uVar4 = (uint)(*param_3 >> 1);
  }
  else {
    uVar4 = *(uint *)(param_3 + 8);
  }
  uVar1 = 0x200;
  if (uVar4 + 1 < 0x200) {
    uVar1 = (unsigned long)(uVar4 + 1);
  }
  *(int *)(this + 0x18) = (int)uVar1;
  *(int *)this = (int)uVar1 + 0x10;
  if ((*param_3 & 1) == 0) {
    pMVar6 = (MessageSetString *)(param_3 + 1);
    MVar3 = *pMVar6;
  }
  else {
    pMVar6 = *(MessageSetString **)(param_3 + 0x10);
    MVar3 = *pMVar6;
  }
  if (MVar3 != (MessageSetString)0x0) {
    uVar5 = 1;
    if (uVar1 != 0) {
      uVar5 = uVar1;
    }
    lVar2 = 0;
    do {
      this[lVar2 + 0x1c] = MVar3;
      if (uVar5 - 1 == lVar2) break;
      MVar3 = pMVar6[lVar2 + 1];
      lVar2 = lVar2 + 1;
    } while (MVar3 != (MessageSetString)0x0);
    pMVar7 = this + lVar2 + 0x1c;
  }
  *pMVar7 = (MessageSetString)0x0;
  return;
}
}
