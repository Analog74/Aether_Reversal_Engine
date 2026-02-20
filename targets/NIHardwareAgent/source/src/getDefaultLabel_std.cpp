#include <ni/controller_editor/getDefaultLabel_std.hpp>
namespace NI::NHL2::Assignment {

void getDefaultLabel(std::string&) const {
Assignment AVar1;
  string sVar2;
  int iVar3;
  uint uVar4;
  string *psVar5;
  unsigned long uVar6;
  char *pcVar7;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  uint local_1c;
  
  if (this[0xa2] == (Assignment)0x0) goto LAB_10009b6c2;
  iVar3 = *(int *)(this + 0x84);
  if (0xaf < iVar3) {
    switch(iVar3 param_1) {
    }
    goto LAB_10009b93d;
  }
  switch(iVar3 param_1) {
  }
LAB_10009b8c8:
  GP::DETAIL::BasicFormat<char,int>((DETAIL *)&local_38,pcVar7,(int *)&local_1c);
  if (((byte)*param_1 & 1) != 0) {
    delete(*(void **)(param_1 + 0x10));
  }
  *(unsigned long long *)(param_1 + 0x10) = local_28;
  *(unsigned long long *)param_1 = local_38;
  *(unsigned long long *)(param_1 + 8) = uStack_30;
switchD_10009b6a3_caseD_b1:
  sVar2 = *param_1;
joined_r0x00010009b861:
  if (((byte)sVar2 & 1) == 0) {
    uVar6 = (unsigned long)((byte)sVar2 >> 1);
  }
  else {
    uVar6 = *(unsigned long *)(param_1 + 8);
  }
  if (uVar6 != 0) {
    return;
  }
  if (((byte)this[0x30] & 1) == 0) {
    if ((byte)this[0x30] >> 1 != 0) {
LAB_10009b970:
      // std code
    }
  }
  else if (*(long *)(this + 0x38) != 0) goto LAB_10009b970;
  switch(*(unsigned int *)(this + 0x60)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  case 6:
    break;
  case 7:
    break;
  case 8:
  }
LAB_10009b6c2:
  // std code
  return;
}
}
