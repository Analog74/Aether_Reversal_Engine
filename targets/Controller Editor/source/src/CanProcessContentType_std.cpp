#include <ni/controller_editor/CanProcessContentType_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::RpcContentHandler {

void CanProcessContentType(std::string) {
byte *pbVar1;
  RpcContentHandler RVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  unsigned long uVar6;
  size_t sVar7;
  byte *pbVar8;
  byte *pbVar9;
  size_t sVar10;
  uint local_34;
  
  if (*(long *)this == 0) {
    return false;
  }
  bVar3 = true;
  if (this[0x38] != (RpcContentHandler)0x0) {
    return true;
  }
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
    uVar6 = (unsigned long)(*param_2 >> 1);
    RVar2 = this[8];
  }
  else {
    uVar6 = *(unsigned long *)(param_2 + 8);
    pbVar9 = *(byte **)(param_2 + 0x10);
    RVar2 = this[8];
  }
  if (((byte)RVar2 & 1) == 0) {
    this = this + 9;
    sVar10 = (size_t)((byte)RVar2 >> 1);
  }
  else {
    sVar10 = *(size_t *)(this + 0x10);
    this = *(RpcContentHandler **)(this + 0x18);
  }
  if (sVar10 != 0) {
    pbVar1 = pbVar9 + uVar6;
    pbVar8 = pbVar1;
    if ((long)sVar10 <= (long)uVar6) {
      RVar2 = *this;
      pbVar5 = pbVar9;
      while (sVar7 = (uVar6 - sVar10) + 1, pbVar8 = pbVar1, sVar7 != 0) {
        local_34 = (uint)(byte)RVar2;
        pbVar5 = (byte *)_memchr(pbVar5,local_34,sVar7);
        if ((pbVar5 == (byte *)0x0) ||
           (iVar4 = _memcmp(pbVar5,this,sVar10), pbVar8 = pbVar5, iVar4 == 0)) break;
        pbVar5 = pbVar5 + 1;
        uVar6 = (long)pbVar1 - (long)pbVar5;
        pbVar8 = pbVar1;
        if ((long)uVar6 < (long)sVar10) break;
      }
    }
    bVar3 = (long)pbVar8 - (long)pbVar9 != -1 && pbVar8 != pbVar1;
  }
  return bVar3;
}
}
