#include <ni/controller_editor/invalid_config_file_syntax.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

void invalid_config_file_syntax::tokens() const {
long lVar1;
  long in_RSI;
  string *in_RDI;
  string local_28;
  unsigned long long local_27;
  unsigned int local_1f;
  unsigned char local_1b;
  void *local_18;
  
  local_28 = (string)0x18;
  local_27 = 0x5f64696c61766e69;
  local_1f = 0x656e696c;
  local_1b = 0;
  lVar1 = // std code
          __tree<// std code
          ::find<// std code
                               *)(in_RSI + 0x18),&local_28);
  // std code
  if (((byte)local_28 & 1) != 0) {
    delete(local_18);
  }
  return;
}

invalid_config_file_syntax::~invalid_config_file_syntax() {
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
