#include <ni/controller_editor/VersionNumber.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

VersionNumber::~VersionNumber() {
void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (((byte)this[0x28] & 1) != 0) {
    delete(*(void **)(this + 0x38));
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(this + 0x18);
  pvVar3 = pvVar1;
  if (*(void **)(this + 0x18) != pvVar1) {
    do {
      pvVar3 = (void *)((long)pvVar2 + -0x18);
      if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
        delete(*(void **)((long)pvVar2 + -8));
      }
      pvVar2 = pvVar3;
    } while (pvVar1 != pvVar3);
    pvVar3 = *(void **)(this + 0x10);
  }
  *(void **)(this + 0x18) = pvVar1;
  delete(pvVar3);
  return;
}
}
