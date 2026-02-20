#include <ni/controller_editor/TURegularAllocatorWT.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::DETAIL {

void TURegularAllocatorWT::allocatePacket(unsigned long) {
new__(param_1);
  return;
}

void TURegularAllocatorWT::deallocatePacket(void* param_1) {
}
}
