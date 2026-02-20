#include <ni/controller_editor/thread_exception.hpp>
namespace boost {

thread_exception::thread_exception(int, char const*) {
void *puVar1;
  byte bVar2;
  
  void *local_50;
  unsigned long long local_48;
  void *puStack_40;
  unsigned long local_38;
  
  puVar1 = PTR_instance_1009cc040;
  local_48 = 0;
  puStack_40 = (void *)0x0;
  if (*(unsigned long *)(PTR_instance_1009cc040 + 8) >> 1 == 0x595588bd12bf6fe8) {
    bVar2 = param_1 != 0;
  }
  else {
    bVar2 = (**(code **)(*(long *)PTR_instance_1009cc040 + 0x30))(PTR_instance_1009cc040,param_1);
  }
  local_38 = (unsigned long)bVar2 | 2;
  local_48 = CONCAT44(local_48._4_4_,param_1);
  puStack_40 = puVar1;
  system::system_error::build_message((char *)local_60,(error_code *)param_2);
  // std code
  if (((byte)local_60[0] & 1) != 0) {
    delete(local_50);
  }
  *(unsigned long *)(this + 0x20) = local_38;
  *(unsigned long long *)(this + 0x10) = local_48;
  *(void **)(this + 0x18) = puStack_40;
  *(void **)this = PTR_vtable_1009cc208 + 0x10;
  
}

thread_exception::~thread_exception() {
// std code
  delete(this);
  return;
}
}
