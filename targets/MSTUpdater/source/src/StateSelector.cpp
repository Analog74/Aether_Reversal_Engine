#include <ni/controller_editor/StateSelector.hpp>
namespace NI::NWL {

StateSelector::StateSelector() {
*(unsigned int *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)this = 0;
  _memset_pattern16(this,&0,0x1c);
  
}
}
