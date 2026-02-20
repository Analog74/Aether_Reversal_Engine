#include <ni/controller_editor/contentHistoryRegistryKeyForDevice_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void contentHistoryRegistryKeyForDevice(1 param_1, NI::Model const* {
NI *pNVar1;
  byte bVar2;
  NI *pNVar3;
  NI *pNVar4;
  unsigned long uVar5;
  NI *pNVar6;
  NI *pNVar7;
  
  (**(code **)(*(long *)param_1 + 0x180))();
  bVar2 = (byte)*this & 1;
  pNVar7 = *(NI **)(this + 0x10);
  uVar5 = *(unsigned long *)(this + 8);
  pNVar3 = pNVar7;
  if (bVar2 == 0) {
    uVar5 = (unsigned long)((byte)*this >> 1);
    pNVar3 = this + 1;
  }
  pNVar1 = pNVar3 + uVar5;
  if (uVar5 == 0) {
    pNVar4 = pNVar3;
    if ((pNVar3 != pNVar1) && (pNVar6 = pNVar3 + 1, pNVar6 != pNVar1)) {
      do {
        if (*pNVar6 != (NI)0x20) {
          *pNVar3 = *pNVar6;
          pNVar3 = pNVar3 + 1;
        }
        pNVar6 = pNVar6 + 1;
      } while (pNVar1 != pNVar6);
      pNVar7 = *(NI **)(this + 0x10);
      bVar2 = (byte)*this & 1;
      pNVar4 = pNVar3;
    }
  }
  else {
    do {
      if (*pNVar3 == (NI)0x20) return;
      pNVar3 = pNVar3 + 1;
      uVar5 = uVar5 - 1;
      pNVar4 = pNVar1;
    } while (uVar5 != 0);
  }
  pNVar3 = this + 1;
  if (bVar2 != 0) {
    pNVar3 = pNVar7;
  }
  // std code
  // std code
  return this;
}
}
