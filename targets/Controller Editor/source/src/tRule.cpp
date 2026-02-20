#include <ni/controller_editor/tRule.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2 {

tRule::~tRule() {
void *pvVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  unsigned char local_38 [8];
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar6 = *(void **)(this + 0x20);
    pvVar7 = pvVar1;
    if (pvVar6 != pvVar1) {
      do {
        if ((unsigned long)*(uint *)((long)pvVar6 + -0x20) != 0xffffffff) {
          (*(code *)(&
                    PTR___dispatch<// std code
                    )[*(uint *)((long)pvVar6 + -0x20)])(local_38,(long)pvVar6 + -0x70);
        }
        *(unsigned int *)((long)pvVar6 + -0x20) = 0xffffffff;
        pvVar6 = (void *)((long)pvVar6 + -0x70);
      } while (pvVar1 != pvVar6);
      pvVar7 = *(void **)(this + 0x18);
    }
    *(void **)(this + 0x20) = pvVar1;
    delete(pvVar7);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar6 = *(void **)(this + 8);
    pvVar7 = pvVar1;
    if (pvVar6 != pvVar1) {
      do {
        pvVar7 = (void *)((long)pvVar6 + -0x78);
        if (*(long *)((long)pvVar6 + -0x38) != 0) {
          lVar2 = *(long *)((long)pvVar6 + -0x48);
          plVar3 = *(long **)((long)pvVar6 + -0x40);
          lVar4 = *plVar3;
          *(unsigned long long *)(lVar4 + 8) = *(unsigned long long *)(lVar2 + 8);
          **(long **)(lVar2 + 8) = lVar4;
          *(unsigned long long *)((long)pvVar6 + -0x38) = 0;
          while (plVar3 != (long *)((long)pvVar6 + -0x48)) {
            plVar5 = (long *)plVar3[1];
            // std code
            __tree<// std code
            ::destroy((__tree<// std code
                       *)(plVar3 + 5),(__tree_node *)plVar3[6]);
            delete(plVar3);
            plVar3 = plVar5;
          }
        }
        // std code
        __tree<// std code
        ::destroy((__tree<// std code
                   *)((long)pvVar6 + -0x60),*(__tree_node **)((long)pvVar6 + -0x58));
        pvVar6 = pvVar7;
      } while (pvVar7 != pvVar1);
      pvVar7 = *(void **)this;
    }
    *(void **)(this + 8) = pvVar1;
    delete(pvVar7);
  }
  return;
}
}
