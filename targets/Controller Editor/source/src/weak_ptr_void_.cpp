#include <ni/controller_editor/weak_ptr_void_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

void weak_ptr<void>::~weak_ptr() {
if (*(long *)(this + 8) != 0) {
    // std code
    return;
  }
  return;
}
}
