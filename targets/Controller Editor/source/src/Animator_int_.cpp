#include <ni/controller_editor/Animator_int_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void Animator<int>::Animator() {
*(unsigned int *)this = 1;
  *(unsigned long long *)(this + 4) = 0;
  *(unsigned long long *)(this + 0xc) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  return;
}
}
