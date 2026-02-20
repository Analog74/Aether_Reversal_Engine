#include <ni/controller_editor/AnyRpcException.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

AnyRpcException::~AnyRpcException() {
// FIXED: if ((byte)this[8] & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x18));
  return;
}
}
