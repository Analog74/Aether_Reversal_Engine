#include <ni/controller_editor/RegularAllocatorBase.hpp>
namespace NI::GP::DETAIL {

RegularAllocatorBase::~RegularAllocatorBase() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
