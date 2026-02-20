#include <ni/controller_editor/StringCropper.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

StringCropper::~StringCropper() {
byte bVar1;
  unsigned long long *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x28);
  if (lVar3 != 0) {
    puVar2 = (unsigned long long *)(*(long *)(this + 0x20) + 0x28);
    do {
      if ((*(byte *)(puVar2 + -2) & 1) == 0) {
        bVar1 = *(byte *)(puVar2 + -5);
      }
      else {
        delete((void *)*puVar2);
        bVar1 = *(byte *)(puVar2 + -5);
      }
      if ((bVar1 & 1) != 0) {
        delete((void *)puVar2[-3]);
      }
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 6;
    } while (lVar3 != 0);
  }
  if (*(long *)(this + 0x30) != 0) {
    delete(*(void **)(this + 0x20));
  }
  // FIXED: if ((byte)this[8] & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x18));
  return;
}
}
