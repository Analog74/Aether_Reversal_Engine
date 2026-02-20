#include <ni/controller_editor/DisplayManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void DisplayManager::detectVerticalLayout() {
int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  s_bVerticalDisplays = 0;
  if (0 - s_collDisplays != 0) {
    lVar5 = (0 - s_collDisplays >> 2) * -0x71c71c71c71c71c7;
    lVar3 = 1;
    if (lVar5 != 0) {
      lVar3 = lVar5;
    }
    piVar2 = (int *)(s_collDisplays + 8);
    iVar4 = -1;
    do {
      iVar1 = piVar2[-2];
      if ((uint)(iVar4 - iVar1) <= (uint)(*piVar2 - iVar1)) {
        s_bVerticalDisplays = 1;
        return;
      }
      iVar4 = (*piVar2 - iVar1 >> 1) + iVar1;
      piVar2 = piVar2 + 9;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

void DisplayManager::getCurrentActiveDisplay() {
DisplayManager DVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long *puVar4;
  unsigned long long uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  int local_30;
  int local_2c;
  
  if (0 == s_collDisplays) {
    onDisplayChange();
  }
  if (1 < (unsigned long)(((long)0 - (long)s_collDisplays >> 2) * -0x71c71c71c71c71c7)) {
    uVar5 = _objc_autoreleasePoolPush();
    lVar6 = (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSScreen,"mainScreen");
    if (lVar6 == 0) {
      local_48 = 0.0;
      dStack_40 = 0.0;
      local_58 = 0.0;
      dStack_50 = 0.0;
      dVar8 = 0.0;
      dVar7 = 0.0;
    }
    else {
      _objc_msgSend_stret(&local_58,lVar6,"frame");
      dVar7 = (double)((uint)((unsigned long)(long)local_48 >> 1) & 0x7fffffff);
      dVar8 = (double)((uint)((unsigned long)(long)dStack_40 >> 1) & 0x7fffffff);
    }
    local_30 = (int)(dVar7 + local_58);
    local_2c = (int)(dVar8 + dStack_50);
    getDisplayFromPoint(this,(Point *)&local_30);
    DVar1 = this[0x21];
    _objc_autoreleasePoolPop(uVar5);
    if (DVar1 != (DisplayManager)0x0) {
      return this;
    }
  }
  puVar4 = s_collDisplays;
  *(unsigned int *)(this + 0x20) = *(unsigned int *)(s_collDisplays + 4);
  uVar5 = *puVar4;
  uVar2 = puVar4[1];
  uVar3 = puVar4[3];
  *(unsigned long long *)(this + 0x10) = puVar4[2];
  *(unsigned long long *)(this + 0x18) = uVar3;
  *(unsigned long long *)this = uVar5;
  *(unsigned long long *)(this + 8) = uVar2;
  return this;
}
}
