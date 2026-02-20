#include <ni/controller_editor/HttpRequest.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::internal {

void HttpRequest::Verify() {
int iVar1;
  
  iVar1 = // std code
  if (iVar1 == 0) {
    if (((byte)this[0x80] & 1) == 0) {
      if ((byte)this[0x80] >> 1 == 0) {
        return 2;
      }
    }
    else if (*(long *)(this + 0x88) == 0) {
      return 2;
    }
  }
  if (*(int *)(this + 0x38) < 0) {
    if (((byte)this[0x50] & 1) == 0) {
      if ((byte)this[0x50] >> 1 != 4) {
        return 0;
      }
    }
    else if (*(long *)(this + 0x58) != 4) {
      return 0;
    }
    iVar1 = // std code
    if (iVar1 == 0) {
      return 2;
    }
  }
  return 0;
}
}
