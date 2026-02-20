#include <ni/controller_editor/monotonic_buffer_resource.hpp>
namespace boost::container::pmr {

monotonic_buffer_resource::~monotonic_buffer_resource() {
long *plVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  
  *(void ***)this = &PTR__monotonic_buffer_resource_1009f2388;
  plVar1 = *(long **)(this + 0x10);
  puVar3 = *(unsigned long long **)(this + 8);
  while (puVar3 != (unsigned long long *)0x0) {
    puVar2 = (unsigned long long *)*puVar3;
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar3,puVar3[1],0x10);
    puVar3 = puVar2;
  }
  delete(this);
  return;
}
}
