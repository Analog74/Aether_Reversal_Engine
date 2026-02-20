#include <ni/controller_editor/StateSelector.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

StateSelector::StateSelector() {
*(unsigned long long *)(this + 0xc) = 0;
  *(unsigned long long *)(this + 0x14) = 0;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  _memset_pattern16(this,&0,0x1c);
  
}
}
