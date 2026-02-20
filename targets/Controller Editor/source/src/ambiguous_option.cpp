#include <ni/controller_editor/ambiguous_option.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

ambiguous_option::~ambiguous_option() {
void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(void ***)this = &PTR__ambiguous_option_101b22300;
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x80);
    pvVar3 = pvVar1;
    if (*(void **)(this + 0x80) != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x18);
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = pvVar3;
      } while (pvVar1 != pvVar3);
      pvVar3 = *(void **)(this + 0x78);
    }
    *(void **)(this + 0x80) = pvVar1;
    delete(pvVar3);
  }
  *(void ***)this = &PTR__error_with_option_name_101b22288;
  if (((byte)this[0x60] & 1) != 0) {
    delete(*(void **)(this + 0x70));
  }
  if (((byte)this[0x48] & 1) != 0) {
    delete(*(void **)(this + 0x58));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x18),*(__tree_node **)(this + 0x20));
  // std code
  return;
}
}
