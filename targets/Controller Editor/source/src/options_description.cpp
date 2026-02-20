#include <ni/controller_editor/options_description.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

void options_description::add_options() {
return this;
}

options_description::~options_description() {
long *plVar1;
  int *piVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar3 = *(void **)(this + 0x50);
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)(this + 0x58);
    pvVar6 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        plVar4 = *(long **)((long)pvVar5 + -8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            LOCK();
            piVar2 = (int *)((long)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
          }
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar3 != pvVar5);
      pvVar6 = *(void **)(this + 0x50);
    }
    *(void **)(this + 0x58) = pvVar3;
    delete(pvVar6);
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    delete(*(void **)(this + 0x38));
  }
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)(this + 0x28);
    pvVar6 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        plVar4 = *(long **)((long)pvVar5 + -8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            LOCK();
            piVar2 = (int *)((long)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
          }
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar3 != pvVar5);
      pvVar6 = *(void **)(this + 0x20);
    }
    *(void **)(this + 0x28) = pvVar3;
    delete(pvVar6);
  }
  if (((byte)*this & 1) != 0) {
    delete(*(void **)(this + 0x10));
    return;
  }
  return;
}
}
