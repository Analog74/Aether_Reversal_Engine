#include <ni/controller_editor/MCUDisplay.hpp>
namespace NI::NHL2 {

void MCUDisplay::copyAndSplitTextLineToDisplayBuffers(unsigned long, char*, char*) const {
char cVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  unsigned long uVar4;
  long lVar5;
  unsigned long uVar6;
  bool bVar7;
  
  uVar4 = param_1 * 0x37;
  lVar5 = *(long *)this;
  uVar3 = 0x1c;
  if (uVar4 + 0x1b < (unsigned long)(*(long *)(this + 8) - lVar5)) {
    uVar3 = 0x1c - (unsigned long)(*(char *)(lVar5 + uVar4 + 0x1b) == ' ');
  }
  uVar6 = 0;
  uVar2 = uVar4;
  if (uVar4 < (unsigned long)(*(long *)(this + 8) - lVar5)) {
    do {
      cVar1 = *(char *)(lVar5 + uVar2);
      param_2[uVar6] = cVar1;
      if ((cVar1 == '\0') || (uVar6 = uVar6 + 1, uVar3 <= uVar6)) goto LAB_1000b778f;
      lVar5 = *(long *)this;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (unsigned long)(*(long *)(this + 8) - lVar5));
  }
  param_2[uVar6] = '\0';
LAB_1000b778f:
  param_2[uVar3] = '\0';
  uVar3 = 0;
  do {
    if ((unsigned long)(*(long *)(this + 8) - *(long *)this) <= uVar4 + 0x1c + uVar3) {
      param_3[uVar3] = '\0';
      param_3[0x1b] = '\0';
      return;
    }
    cVar1 = *(char *)(uVar3 + *(long *)this + uVar4 + 0x1c);
    param_3[uVar3] = cVar1;
  } while ((cVar1 != '\0') && (bVar7 = uVar3 < 0x1a, uVar3 = uVar3 + 1, bVar7));
  param_3[0x1b] = '\0';
  return;
}
}
