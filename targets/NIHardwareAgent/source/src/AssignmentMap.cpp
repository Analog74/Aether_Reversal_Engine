#include <ni/controller_editor/AssignmentMap.hpp>
namespace NI::NHL2 {

AssignmentMap::AssignmentMap(char const*, unsigned int) {
void *pvVar1;
  size_t sVar2;
  AssignmentMap *pAVar3;
  unsigned long uVar4;
  
  *(void ***)this = &PTR__IMapAssignmentStorage_1009da7e8;
  pvVar1 = new(0x58);
  *(void **)(this + 0x10) = pvVar1;
  *(unsigned long long *)((long)pvVar1 + 0x10) = 0;
  *(long *)((long)pvVar1 + 0x18) = (long)pvVar1 + 0x10;
  *(long *)((long)pvVar1 + 0x20) = (long)pvVar1 + 0x10;
  *(unsigned long long *)((long)pvVar1 + 0x28) = 0;
  *(long *)((long)pvVar1 + 0x30) = (long)pvVar1 + 0x28;
  *(long *)((long)pvVar1 + 0x38) = (long)pvVar1 + 0x28;
  *(unsigned long long *)((long)pvVar1 + 0x40) = 0;
  *(long *)((long)pvVar1 + 0x48) = (long)pvVar1 + 0x40;
  *(long *)((long)pvVar1 + 0x50) = (long)pvVar1 + 0x40;
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__AssignmentMap_1009d94d8;
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar2 < 0x17) {
    this[0x28] = (AssignmentMap)((char)sVar2 * '\x02');
    pAVar3 = this + 0x29;
    if (sVar2 == 0) goto LAB_1000a3a37;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pAVar3 = (AssignmentMap *)new(uVar4);
    *(AssignmentMap **)(this + 0x38) = pAVar3;
    *(unsigned long *)(this + 0x28) = uVar4 | 1;
    *(size_t *)(this + 0x30) = sVar2;
  }
  memcpy(pAVar3,param_1,sVar2);
LAB_1000a3a37:
  pAVar3[sVar2] = (AssignmentMap)0x0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(uint *)(this + 0x58) = param_2;
  
}

void AssignmentMap::setMIDIChannelForAll(unsigned char) {
unsigned long *puVar1;
  uchar uVar2;
  unsigned long *puVar3;
  unsigned long *puVar4;
  unsigned long *puVar5;
  
  puVar1 = *(unsigned long **)(this + 0x10);
  puVar4 = (unsigned long *)(puVar1[9] - 0x40);
  if (puVar1[9] == 0) {
    puVar4 = (unsigned long *)0x0;
  }
  if (puVar4 != puVar1) {
    uVar2 = '\x0f';
    if (param_1 < 0xf) {
      uVar2 = param_1;
    }
    do {
      *(uchar *)(*puVar4 + 0xa0) = uVar2;
      puVar3 = (unsigned long *)puVar4[10];
      if (puVar3 == (unsigned long *)0x0) {
        puVar3 = puVar4 + 8;
        puVar4 = (unsigned long *)(*puVar3 & 0xfffffffffffffffe);
        if ((unsigned long *)puVar4[2] == puVar3) {
          do {
            puVar3 = puVar4;
            puVar4 = (unsigned long *)(*puVar3 & 0xfffffffffffffffe);
          } while (puVar3 == (unsigned long *)puVar4[2]);
          puVar5 = (unsigned long *)puVar3[2];
        }
        else {
          puVar5 = (unsigned long *)0x0;
        }
        if (puVar5 != puVar4) {
          puVar3 = puVar4;
        }
      }
      else {
        for (puVar4 = (unsigned long *)puVar3[1]; puVar4 != (unsigned long *)0x0; puVar4 = (unsigned long *)puVar4[1]) {
          puVar3 = puVar4;
        }
      }
      puVar4 = puVar3 + -8;
      if (puVar3 == (unsigned long *)0x0) {
        puVar4 = (unsigned long *)0x0;
      }
    } while (puVar4 != puVar1);
  }
  return;
}

AssignmentMap::~AssignmentMap() {
~AssignmentMap(this);
  delete(this);
  return;
}
}
