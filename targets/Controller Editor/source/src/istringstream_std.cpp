#include <ni/controller_editor/istringstream_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::istringstream {

void istringstream(1 param_1, std::string const&, unsigned int {
void *puVar1;
  
  puVar1 = PTR_construction_vtable_101ab4168;
  *(void **)this = (char*)PTR_construction_vtable_101ab4168 + 0x18;
  *(void **)(this + 0x78) = puVar1 + 0x40;
  *(unsigned long long *)(this + 8) = 0;
  // std code
  *(unsigned long long *)(this + 0x100) = 0;
  *(unsigned int *)(this + 0x108) = 0xffffffff;
  puVar1 = PTR_vtable_101ab45b8;
  *(void **)this = (char*)PTR_vtable_101ab45b8 + 0x18;
  *(void **)(this + 0x78) = puVar1 + 0x40;
  // std code
  *(void **)(this + 0x10) = (char*)PTR_vtable_101ab4590 + 0x10;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned int *)(this + 0x70) = 8;
  stringbuf::str((stringbuf *)(this + 0x10),param_1);
  return;
}
}
