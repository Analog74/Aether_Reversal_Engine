#include <ni/controller_editor/StyleParser2.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

StyleParser2::~StyleParser2() {
__vector_base<NI::NWL::Selector,// std code
  void *pvVar2;
  __vector_base<NI::NWL::Selector,// std code
  void *pvVar3;
  __vector_base<NI::NWL::Selector,// std code
  void *pvVar5;
  unsigned char local_38 [8];
  
  // std code
            ((__tree<// std code
             ,*(__tree_node **)(this + 0x78));
  if (((byte)this[0x58] & 1) != 0) {
    delete(*(void **)(this + 0x68));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  p_Var1 = *(__vector_base<NI::NWL::Selector,// std code
  if (p_Var1 != (__vector_base<NI::NWL::Selector,// std code
    this_00 = *(__vector_base<NI::NWL::Selector,// std code
    p_Var4 = p_Var1;
    if (this_00 != p_Var1) {
      do {
        pvVar2 = *(void **)(this_00 + -0x20);
        if (pvVar2 != (void *)0x0) {
          pvVar5 = *(void **)(this_00 + -0x18);
          pvVar3 = pvVar2;
          if (pvVar5 != pvVar2) {
            do {
              if ((unsigned long)*(uint *)((long)pvVar5 + -0x20) != 0xffffffff) {
                (*(code *)(&
                          PTR___dispatch<// std code
                          )[*(uint *)((long)pvVar5 + -0x20)])(local_38,(long)pvVar5 + -0x70);
              }
              *(unsigned int *)((long)pvVar5 + -0x20) = 0xffffffff;
              pvVar5 = (void *)((long)pvVar5 + -0x70);
            } while (pvVar2 != pvVar5);
            pvVar3 = *(void **)(this_00 + -0x20);
          }
          *(void **)(this_00 + -0x18) = pvVar2;
          delete(pvVar3);
        }
        this_00 = this_00 + -0x38;
        // std code
                  (this_00);
      } while (this_00 != p_Var1);
      p_Var4 = *(__vector_base<NI::NWL::Selector,// std code
    }
    *(__vector_base<NI::NWL::Selector,// std code
    delete(p_Var4);
  }
  return;
}
}
