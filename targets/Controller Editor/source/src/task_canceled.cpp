#include <ni/controller_editor/task_canceled.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx {

task_canceled::~task_canceled() {
*(void ***)this = &PTR__task_canceled_101b20640;
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  // std code
  delete(this);
  return;
}
}
