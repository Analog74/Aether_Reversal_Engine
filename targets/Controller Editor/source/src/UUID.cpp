#include <ni/controller_editor/UUID.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void UUID::generateRandom() {
int local_30 [2];
  unsigned int local_28;
  void2 local_24;
  UUID local_22;
  UUID local_21;
  UUID local_20;
  unsigned int local_1f;
  void2 local_1b;
  UUID local_19;
  
  // boost code
  ;
  // boost code
            ((random_provider_base *)local_30,&local_28,0x10);
  local_20 = (UUID)((byte)local_20 & 0x3f | 0x80);
  local_22 = (UUID)((byte)local_22 & 0xf | 0x40);
  *(unsigned int *)this = local_28;
  *(void2 *)(this + 4) = local_24;
  this[6] = local_22;
  this[7] = local_21;
  this[8] = local_20;
  *(unsigned int *)(this + 9) = local_1f;
  *(void2 *)(this + 0xd) = local_1b;
  this[0xf] = local_19;
  if (-1 < local_30[0]) {
    _close(local_30[0]);
  }
  return;
}

UUID::UUID() {
*(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  
}
}
