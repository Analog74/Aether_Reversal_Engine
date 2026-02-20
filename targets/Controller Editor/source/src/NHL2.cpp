#include <ni/controller_editor/NHL2.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Traktor::KontrolS8::MapHandler::updateVisualisationLEDs(NI {

void NHL2::ControllerMap*) {
byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  unsigned long uVar9;
  long lVar10;
  unsigned long uVar11;
  unsigned long long uVar12;
  
  plVar7 = (long *)(**(code **)(**(long **)(this + 0x110) + 0x10))();
  uVar11 = 0;
  lVar8 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,0,0);
  lVar10 = *(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8);
  if (lVar10 != 0) {
    uVar11 = lVar10 >> 3;
    uVar9 = 1;
    if (uVar11 != 0) {
      uVar9 = uVar11;
    }
    uVar11 = 0;
    do {
      if (*(long *)(lVar8 + 0x38) == *(long *)(*(long *)(lVar8 + 8) + uVar11 * 8)) {
        if ((uVar11 & 1) == 0) return;
        lVar8 = *plVar7;
        uVar12 = 2;
        return;
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
    uVar11 = 0;
  }
  lVar8 = *plVar7;
  uVar12 = 0;
  bVar1 = (**(code **)(lVar8 + 0x10))(plVar7,0x37,uVar12);
  if (uVar11 < 2) {
    bVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,0x36,2);
    lVar8 = *plVar7;
    uVar12 = 0x35;
  }
  else {
    bVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,0x35,2);
    lVar8 = *plVar7;
    uVar12 = 0x36;
  }
  bVar3 = (**(code **)(lVar8 + 0x18))(plVar7,uVar12);
  uVar11 = 0;
  lVar8 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,0,2);
  lVar10 = *(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8);
  if (lVar10 != 0) {
    uVar11 = lVar10 >> 3;
    uVar9 = 1;
    if (uVar11 != 0) {
      uVar9 = uVar11;
    }
    uVar11 = 0;
    do {
      if (*(long *)(lVar8 + 0x38) == *(long *)(*(long *)(lVar8 + 8) + uVar11 * 8)) {
        if ((uVar11 & 1) == 0) return;
        lVar8 = *plVar7;
        uVar12 = 2;
        return;
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
    uVar11 = 0;
  }
  lVar8 = *plVar7;
  uVar12 = 0;
  bVar4 = (**(code **)(lVar8 + 0x10))(plVar7,0xad,uVar12);
  if (uVar11 < 2) {
    bVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0xac,2);
    lVar8 = *plVar7;
    uVar12 = 0xab;
  }
  else {
    bVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0xab,2);
    lVar8 = *plVar7;
    uVar12 = 0xac;
  }
  bVar6 = (**(code **)(lVar8 + 0x18))(plVar7,uVar12);
  return bVar6 | bVar3 | bVar1 | bVar2 | bVar4 | bVar5;
}
}
