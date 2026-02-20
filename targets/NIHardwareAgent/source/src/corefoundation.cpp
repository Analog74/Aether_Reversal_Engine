#include <ni/controller_editor/corefoundation.hpp>
namespace ni {

void corefoundation::utf8String(__CFString const*) {
char cVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  corefoundation *pcVar5;
  unsigned long uVar6;
  
  pcVar2 = (char *)_CFStringGetCStringPtr(param_1,0x8000100);
  if (pcVar2 != (char *)0x0) {
    sVar3 = strlen(pcVar2);
    if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (sVar3 < 0x17) {
      *this = (corefoundation)((char)sVar3 * '\x02');
      pcVar5 = this + 1;
      if (sVar3 == 0) goto LAB_10030c91f;
    }
    else {
      uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
      pcVar5 = (corefoundation *)new(uVar6);
      *(corefoundation **)(this + 0x10) = pcVar5;
      *(unsigned long *)this = uVar6 | 1;
      *(size_t *)(this + 8) = sVar3;
    }
    memcpy(pcVar5,pcVar2,sVar3);
LAB_10030c91f:
    pcVar5[sVar3] = (corefoundation)0x0;
    return this;
  }
  lVar4 = _CFStringGetLength(param_1);
  sVar3 = lVar4 * 4 + 1;
  pcVar2 = (char *)_malloc(sVar3);
  cVar1 = _CFStringGetCString(param_1,pcVar2,sVar3,0x8000100);
  if (cVar1 == '\0') {
    *(void2 *)this = 0;
    goto LAB_10030c96f;
  }
  sVar3 = strlen(pcVar2);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar3 < 0x17) {
    *this = (corefoundation)((char)sVar3 * '\x02');
    pcVar5 = this + 1;
    if (sVar3 != 0) goto LAB_10030c957;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pcVar5 = (corefoundation *)new(uVar6);
    *(corefoundation **)(this + 0x10) = pcVar5;
    *(unsigned long *)this = uVar6 | 1;
    *(size_t *)(this + 8) = sVar3;
LAB_10030c957:
    memcpy(pcVar5,pcVar2,sVar3);
  }
  pcVar5[sVar3] = (corefoundation)0x0;
LAB_10030c96f:
  _free(pcVar2);
  return this;
}
}
