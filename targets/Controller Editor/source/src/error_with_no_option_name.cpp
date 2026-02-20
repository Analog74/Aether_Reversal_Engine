#include <ni/controller_editor/error_with_no_option_name.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

error_with_no_option_name::~error_with_no_option_name() {
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
