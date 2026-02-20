#include <ni/controller_editor/variables_map.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

void variables_map::notify() [clone .cold.1] {
if (((byte)this[0x48] & 1) != 0) {
    delete(*(void **)(this + 0x58));
  }
  return;
}

variables_map::variables_map() {
*(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(variables_map **)(this + 0x10) = this + 0x18;
  *(void ***)this = &PTR__variables_map_101b222d8;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(variables_map **)(this + 0x28) = this + 0x30;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(variables_map **)(this + 0x40) = this + 0x48;
  
}

variables_map::~variables_map() {
*(void ***)this = &PTR__variables_map_101b222d8;
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x40),*(__tree_node **)(this + 0x48));
  // std code
            ((__tree<// std code
             ,*(__tree_node **)(this + 0x30));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x10),*(__tree_node **)(this + 0x18));
  delete(this);
  return;
}
}
