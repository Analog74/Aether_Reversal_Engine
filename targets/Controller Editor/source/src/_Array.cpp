#include <ni/controller_editor/_Array.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::details {

void _Array::as_array() const {
return this + 8;
}

void _Array::index(unsigned long param_1) {
long lVar1;
  unsigned long uVar2;
  unsigned long long *puVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  
  uVar4 = param_1 + 1;
  if (uVar4 != 0) {
    lVar1 = *(long *)(this + 8);
    uVar2 = *(long *)(this + 0x10) - lVar1 >> 3;
    uVar5 = uVar4 - uVar2;
    if (uVar2 <= uVar4 && uVar5 != 0) {
      // std code
                ((vector<web::json::value,// std code
      lVar1 = *(long *)(this + 8);
    }
    return lVar1 + param_1 * 8;
  }
  msl::safeint3::SafeIntInternal::SafeIntExceptionHandler<msl::safeint3::SafeIntException>::
  SafeIntOnOverflow();
  puVar3 = *(unsigned long long **)(this + 8);
  if (puVar3 != *(unsigned long long **)(this + 0x10)) {
    do {
      (**(code **)(*(long *)*puVar3 + 0xb0))();
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(unsigned long long **)(this + 0x10));
  }
  // std code
                    /* WARNING: Could not recover jumptable at 0x000100541319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(long *)this + 200))(this,uVar4);
  return lVar1;
}

_Array::~_Array() {
void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  *(void ***)this = &PTR__copy_value_101b1d388;
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x10);
    pvVar4 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        plVar2 = *(long **)((long)pvVar3 + -8);
        *(unsigned long long *)((long)pvVar3 + -8) = 0;
        pvVar3 = (void *)((long)pvVar3 + -8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0xc0))();
        }
      } while (pvVar1 != pvVar3);
      pvVar4 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar4);
  }
  delete(this);
  return;
}
}
