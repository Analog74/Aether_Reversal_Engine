#include <ni/controller_editor/StyleSheet.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

StyleSheet::~StyleSheet() {
unsigned long long *puVar1;
  void *pvVar2;
  unsigned long long *puVar3;
  
  puVar3 = *(unsigned long long **)(this + 0x60);
  while (puVar3 != (unsigned long long *)0x0) {
    puVar1 = (unsigned long long *)*puVar3;
    // std code
    __tree<// std code
    ::destroy((__tree<// std code
               *)(puVar3 + 3),(__tree_node *)puVar3[4]);
    delete(puVar3);
    puVar3 = puVar1;
  }
  pvVar2 = *(void **)(this + 0x50);
  *(unsigned long long *)(this + 0x50) = 0;
  if (pvVar2 != (void *)0x0) {
    delete(pvVar2);
  }
  // std code
            ((__tree<// std code
             ,*(__tree_node **)(this + 0x40));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}
}
