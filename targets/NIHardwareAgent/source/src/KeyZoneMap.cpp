#include <ni/controller_editor/KeyZoneMap.hpp>
namespace NI::NHL2::Komplete::KontrolMK1 {

void KeyZoneMap::createInitialKeyZone() [clone .cold.1] {
long in_RDX;
  byte *in_RSI;
  byte *in_RDI;
  
  if ((*in_RDI & 1) != 0) {
    delete(*(void **)(in_RDX + 0x28));
  }
  if ((*in_RSI & 1) != 0) {
    delete(*(void **)(in_RDX + 0x10));
  }
  return;
}

void KeyZoneMap::isKeyZoneDefinitionConsistent() const {
KeyZoneMap *pKVar1;
  long lVar2;
  long lVar3;
  KeyZoneMap *pKVar4;
  KeyZoneMap *pKVar5;
  KeyZoneMap *pKVar6;
  KeyZoneMap *pKVar7;
  uint uVar8;
  
  pKVar4 = *(KeyZoneMap **)this;
  if (*(int *)(pKVar4 + 0x74) == 0) {
    pKVar7 = this + 8;
    if (pKVar4 == pKVar7) {
LAB_1000beb2b:
      lVar2 = *(long *)pKVar7;
      if (*(long *)pKVar7 != 0) {
        do {
          lVar3 = lVar2;
          lVar2 = *(long *)(lVar3 + 8);
        } while (lVar2 != 0);
        return (unsigned long)(*(int *)(lVar3 + 0x78) == 0x7f);
      }
      pKVar4 = this + 0x18;
      if ((KeyZoneMap *)**(unsigned long long **)(this + 0x18) == pKVar7) {
        do {
          lVar2 = *(long *)pKVar4;
          pKVar4 = (KeyZoneMap *)(lVar2 + 0x10);
        } while (**(long **)(lVar2 + 0x10) == lVar2);
      }
      return 0((int7)((unsigned long)pKVar4 >> 8),*(int *)(*(long *)pKVar4 + 0x78) == 0x7f);
    }
    uVar8 = *(uint *)(pKVar4 + 0x78);
    do {
      pKVar1 = *(KeyZoneMap **)(pKVar4 + 8);
      pKVar6 = pKVar1;
      if (pKVar1 == (KeyZoneMap *)0x0) {
        pKVar5 = *(KeyZoneMap **)(pKVar4 + 0x10);
        pKVar6 = pKVar4;
        if (*(KeyZoneMap **)pKVar5 != pKVar4) {
          do {
            pKVar6 = *(KeyZoneMap **)(pKVar6 + 0x10);
            pKVar5 = *(KeyZoneMap **)(pKVar6 + 0x10);
          } while (*(KeyZoneMap **)pKVar5 != pKVar6);
        }
      }
      else {
        do {
          pKVar5 = pKVar6;
          pKVar6 = *(KeyZoneMap **)pKVar5;
        } while (*(KeyZoneMap **)pKVar5 != (KeyZoneMap *)0x0);
      }
      if ((pKVar5 != pKVar7) && (uVar8 + 1 != *(int *)(pKVar5 + 0x74))) {
        return 0;
      }
      if (pKVar1 == (KeyZoneMap *)0x0) {
        pKVar6 = *(KeyZoneMap **)(pKVar4 + 0x10);
        if (*(KeyZoneMap **)pKVar6 != pKVar4) {
          do {
            pKVar4 = *(KeyZoneMap **)(pKVar4 + 0x10);
            pKVar6 = *(KeyZoneMap **)(pKVar4 + 0x10);
          } while (*(KeyZoneMap **)pKVar6 != pKVar4);
        }
      }
      else {
        do {
          pKVar6 = pKVar1;
          pKVar1 = *(KeyZoneMap **)pKVar6;
        } while (*(KeyZoneMap **)pKVar6 != (KeyZoneMap *)0x0);
      }
      if (pKVar6 == pKVar7) goto LAB_1000beb2b;
      uVar8 = *(uint *)(pKVar6 + 0x78);
      pKVar4 = pKVar6;
    } while (*(uint *)(pKVar6 + 0x74) <= uVar8);
  }
  return 0;
}
}
