#include <ni/controller_editor/TURegularAllocatorWT.hpp>
namespace NI::GP::DETAIL {

void TURegularAllocatorWT::allocatePacket(unsigned long) {
new__(param_1);
  return;
}

void TURegularAllocatorWT::deallocatePacket(void* param_1) {
}
}
