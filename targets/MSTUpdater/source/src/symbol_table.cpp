#include <ni/controller_editor/symbol_table.hpp>
namespace ni::(anonymous namespace) {

symbol_table::~symbol_table() {
unsigned long uVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  unsigned long long *puVar4;
  unsigned long uVar5;
  
  // std code
  uVar1 = *(unsigned long *)(this + 0x8008);
  if (uVar1 != 0) {
    puVar4 = *(unsigned long long **)(this + 0x8000);
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      puVar3 = (unsigned long long *)*puVar4;
      while (puVar3 != puVar4) {
        puVar2 = (unsigned long long *)*puVar3;
        *puVar3 = 0;
        puVar3 = puVar2;
      }
      *puVar4 = puVar4;
      puVar4 = puVar4 + 1;
      uVar5 = 1;
    }
    if (uVar1 != 1) {
      do {
        puVar3 = (unsigned long long *)*puVar4;
        while (puVar3 != puVar4) {
          puVar2 = (unsigned long long *)*puVar3;
          *puVar3 = 0;
          puVar3 = puVar2;
        }
        *puVar4 = puVar4;
        puVar3 = (unsigned long long *)puVar4[1];
        while (puVar3 != puVar4 + 1) {
          puVar2 = (unsigned long long *)*puVar3;
          *puVar3 = 0;
          puVar3 = puVar2;
        }
        puVar4[1] = puVar4 + 1;
        puVar4 = puVar4 + 2;
        uVar5 = uVar5 + 2;
      } while (uVar5 != uVar1);
    }
  }
  return;
}
}
