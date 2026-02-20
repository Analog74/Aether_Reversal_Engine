#include <ni/controller_editor/keyword.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::robot::detail {

keyword::~keyword() {
keyword kVar1;
  keyword *pkVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pkVar2 = *(keyword **)(this + 0x70);
  if (this + 0x50 == pkVar2) {
    (**(code **)(*(long *)pkVar2 + 0x20))();
    pvVar3 = *(void **)(this + 0x30);
  }
  else {
    if (pkVar2 != (keyword *)0x0) {
      (**(code **)(*(long *)pkVar2 + 0x28))();
    }
    pvVar3 = *(void **)(this + 0x30);
  }
  if (pvVar3 == (void *)0x0) {
    pvVar3 = *(void **)(this + 0x18);
  }
  else {
    pvVar4 = *(void **)(this + 0x38);
    pvVar5 = pvVar3;
    if (*(void **)(this + 0x38) != pvVar3) {
      do {
        pvVar5 = (void *)((long)pvVar4 + -0x18);
        if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar4 + -8));
        }
        pvVar4 = pvVar5;
      } while (pvVar3 != pvVar5);
      pvVar5 = *(void **)(this + 0x30);
    }
    *(void **)(this + 0x38) = pvVar3;
    delete(pvVar5);
    pvVar3 = *(void **)(this + 0x18);
  }
  if (pvVar3 == (void *)0x0) {
    kVar1 = *this;
  }
  else {
    pvVar4 = *(void **)(this + 0x20);
    pvVar5 = pvVar3;
    if (*(void **)(this + 0x20) != pvVar3) {
      do {
        pvVar5 = (void *)((long)pvVar4 + -0x18);
        if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar4 + -8));
        }
        pvVar4 = pvVar5;
      } while (pvVar3 != pvVar5);
      pvVar5 = *(void **)(this + 0x18);
    }
    *(void **)(this + 0x20) = pvVar3;
    delete(pvVar5);
    kVar1 = *this;
  }
  if (((byte)kVar1 & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
