#include <ni/controller_editor/RegularAllocator.hpp>
namespace NI::GP::DA {

RegularAllocator::~RegularAllocator() {
*(void ***)this = &PTR_allocatePacket_1009f18e8;
  // std code
  delete(this);
  return;
}
}
