#include <ni/controller_editor/multiple_occurrences.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

multiple_occurrences::multiple_occurrences() {
ushort local_58 [8];
  void *local_48;
  ushort local_40 [8];
  void *local_30;
  unsigned long local_28;
  unsigned long long uStack_20;
  char *local_18;
  
  local_18 = (char *)new char[0x40];
  local_28 = 0x41;
  uStack_20 = 0x3e;
  builtin_strncpy(local_18,"option \'%canonical_option%\' cannot be specified more than once",0x3f);
  local_58[0] = 0;
  local_40[0] = 0;
  error_with_option_name::error_with_option_name
            ((error_with_option_name *)this,(string *)&local_28,(string *)local_58,
             (string *)local_40,0);
  if ((local_40[0] & 1) != 0) {
    delete(local_30);
  }
  if ((local_58[0] & 1) != 0) {
    delete(local_48);
  }
  if ((local_28 & 1) != 0) {
    delete(local_18);
  }
  *(void **)this = (char*)PTR_vtable_101ab44b0 + 0x10;
  
}

multiple_occurrences::~multiple_occurrences() {
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
  delete(this);
  return;
}
}
