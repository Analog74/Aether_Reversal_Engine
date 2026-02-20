#include <ni/controller_editor/External.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void External::launchApplication(char const*, char const*) {
int iVar1;
  size_t sVar2;
  void *pvVar3;
  unsigned long long *puVar4;
  unsigned long *puVar5;
  char *pcVar6;
  unsigned long uVar7;
  char *local_78;
  unsigned long long uStack_70;
  char *local_68;
  unsigned long long local_58;
  unsigned long uStack_50;
  char *local_48;
  unsigned long long local_40;
  size_t local_38;
  void *local_30;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar7 = 0;
    return;
  }
  if (param_2 == (char *)0x0) {
    sVar2 = strlen(param_1);
    if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (sVar2 < 0x17) {
      local_40 = 0(local_40._1_7_,(char)sVar2 * '\x02');
      pvVar3 = (void *)((long)&local_40 + 1);
      if (sVar2 != 0) return;
    }
    else {
      uVar7 = sVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = new char[uVar7];
      local_40 = uVar7 | 1;
      local_38 = sVar2;
      local_30 = pvVar3;
      memcpy(pvVar3,param_1,sVar2);
    }
    *(unsigned char *)((long)pvVar3 + sVar2) = 0;
    puVar4 = (unsigned long long *)// std code
    local_68 = (char *)puVar4[2];
    local_78 = (char *)*puVar4;
    uStack_70 = puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar5 = (unsigned long *)// std code
    local_48 = (char *)puVar5[2];
    local_58 = *puVar5;
    uStack_50 = puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    if (((unsigned long)local_78 & 1) != 0) {
      delete(local_68);
    }
    if ((local_40 & 1) != 0) {
      delete(local_30);
    }
  }
  else {
    local_78 = param_1;
    local_68 = param_2;
    fmt::v9::vformat(&local_58,"\'{}\' {} &",9,0xcc,&local_78);
  }
  pcVar6 = local_48;
  if ((local_58 & 1) == 0) {
    pcVar6 = (char *)((long)&local_58 + 1);
  }
  iVar1 = _system(pcVar6);
  uVar7 = 0((int7)((unsigned long)param_1 >> 8),iVar1 == 0);
  if ((local_58 & 1) != 0) {
    delete(local_48);
  }
  return uVar7 & 0xffffffff;
}

void External::openPreprocessedURL(char const*) {
unsigned long long uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(unsigned long long *)PTR__kCFAllocatorDefault_101ab4648;
  lVar3 = _CFStringCreateWithCString(uVar1,param_1,0x8000100);
  lVar4 = _CFURLCreateWithString(uVar1,lVar3,0);
  iVar2 = _LSOpenCFURLRef(lVar4,0);
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return iVar2 == 0;
}

void External::openURL(char const*) {
unsigned long long uVar1;
  
  if (param_1 != (char *)0x0) {
    uVar1 = openPreprocessedURL(param_1);
    return uVar1;
  }
  return 0;
}
}
