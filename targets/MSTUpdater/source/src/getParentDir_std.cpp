#include <ni/controller_editor/getParentDir_std.hpp>
namespace NI::GP::(anonymous namespace) {

void getParentDir(std::string, FSRef&) {
string sVar1;
  int iVar2;
  string *psVar3;
  unsigned long uVar4;
  byte bVar5;
  unsigned char *puVar6;
  string local_38;
  unsigned char local_37 [15];
  unsigned char *local_28;
  char local_19;
  
  sVar1 = *param_1;
  if (((byte)sVar1 & 1) == 0) {
    psVar3 = param_1 + 1;
    uVar4 = (unsigned long)((byte)sVar1 >> 1);
  }
  else {
    uVar4 = *(unsigned long *)(param_1 + 8);
    psVar3 = *(string **)(param_1 + 0x10);
  }
  if (psVar3[uVar4 - 1] == (string)0x2f) {
    if (((byte)sVar1 & 1) == 0) {
      bVar5 = (byte)sVar1 >> 1;
    }
    else {
      bVar5 = (byte)*(unsigned long long *)(param_1 + 8);
    }
    // std code
  }
  uVar4 = // std code
  if (uVar4 == 0xffffffffffffffff) {
    uVar4 = 0;
  }
  else {
    // std code
    puVar6 = local_37;
    if (((byte)local_38 & 1) != 0) {
      puVar6 = local_28;
    }
    iVar2 = _FSPathMakeRef(puVar6,param_2,&local_19);
    uVar4 = 0((int7)((unsigned long)param_1 >> 8),local_19 != '\0' && iVar2 == 0);
    // std code
  }
  return uVar4 & 0xffffffff;
}
}
