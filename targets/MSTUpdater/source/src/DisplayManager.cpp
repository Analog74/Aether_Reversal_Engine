#include <ni/controller_editor/DisplayManager.hpp>
namespace NI::UIA {

void DisplayManager::detectVerticalLayout() {
int iVar1;
  int *piVar2;
  unsigned long uVar3;
  int iVar4;
  
  s_bVerticalDisplays = 0;
  if (0 - s_collDisplays != 0) {
    piVar2 = (int *)(s_collDisplays + 8);
    iVar4 = -1;
    uVar3 = 0;
    do {
      iVar1 = piVar2[-2];
      if ((uint)(iVar4 - iVar1) <= (uint)(*piVar2 - iVar1)) {
        s_bVerticalDisplays = 1;
        return;
      }
      iVar4 = (*piVar2 - iVar1 >> 1) + iVar1;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 9;
    } while (uVar3 < (unsigned long)((0 - s_collDisplays >> 2) * -0x71c71c71c71c71c7));
  }
  return;
}
}
