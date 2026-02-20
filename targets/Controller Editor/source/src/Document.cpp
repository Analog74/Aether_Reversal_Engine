#include <ni/controller_editor/Document.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

Document::~Document() {
void *pvVar1;
  
  *(void ***)this = &PTR__Document_101b830a8;
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    delete(pvVar1);
  }
  Value::Destroy((Value *)(this + 8));
  delete(this);
  return;
}
}
