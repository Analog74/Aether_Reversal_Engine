#include <ni/controller_editor/RegularAllocator.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::DA {

RegularAllocator::~RegularAllocator() {
*(void ***)this = &PTR_allocatePacket_101b31620;
  // std code
  delete(this);
  return;
}
}
