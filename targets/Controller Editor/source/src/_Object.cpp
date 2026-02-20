#include <ni/controller_editor/_Object.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::details {

void _Object::as_object() const {
return this + 8;
}

_Object::~_Object() {
void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  *(void ***)this = &PTR__copy_value_101b1cd50;
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x10);
    pvVar4 = pvVar1;
    if (*(void **)(this + 0x10) != pvVar1) {
      do {
        plVar2 = *(long **)((long)pvVar3 + -8);
        *(unsigned long long *)((long)pvVar3 + -8) = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0xc0))();
        }
        pvVar4 = (void *)((long)pvVar3 + -0x20);
        if ((*(byte *)((long)pvVar3 + -0x20) & 1) != 0) {
          delete(*(void **)((long)pvVar3 + -0x10));
        }
        pvVar3 = pvVar4;
      } while (pvVar1 != pvVar4);
      pvVar4 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar4);
  }
  delete(this);
  return;
}
}
