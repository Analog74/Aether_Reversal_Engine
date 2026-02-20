#include <ni/controller_editor/ResourceFacade.hpp>
namespace NI::UIA {

void ResourceFacade::clearResourceMap() {
__tree<// std code
  *this;
  unsigned long long *puVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  
  puVar3 = g_theResourceMap;
  if (g_theResourceMap != &0) {
    do {
      this = (__tree<// std code
              *)puVar3[5];
      if (this != (__tree<// std code
                   *)0x0) {
        // std code
        __tree<// std code
        ::destroy(this,*(__tree_node **)(this + 8));
        delete(this);
      }
      puVar1 = (unsigned long long *)puVar3[1];
      if ((unsigned long long *)puVar3[1] == (unsigned long long *)0x0) {
        puVar2 = (unsigned long long *)puVar3[2];
        if ((unsigned long long *)*puVar2 != puVar3) {
          do {
            puVar3 = (unsigned long long *)puVar3[2];
            puVar2 = (unsigned long long *)puVar3[2];
          } while ((unsigned long long *)*puVar2 != puVar3);
        }
      }
      else {
        do {
          puVar2 = puVar1;
          puVar1 = (unsigned long long *)*puVar2;
        } while ((unsigned long long *)*puVar2 != (unsigned long long *)0x0);
      }
      puVar3 = puVar2;
    } while (puVar2 != &0);
  }
  GP::
  clearFull<// std code
            ((map *)&g_theResourceMap);
  return;
}
}
