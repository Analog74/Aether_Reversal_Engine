#include <ni/controller_editor/detail.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail::resolver_service_base::start_resolve_op(boost::asio {

void detail::resolve_op*) {
void *puVar1;
  char cVar2;
  unsigned long long uVar3;
  
  puVar1 = PTR_instance_101ab4088;
  if ((*(uint *)(*(long *)this + 0x10c) & 0xffff0001) != 0xa5100000) {
    start_work_thread(this);
    LOCK();
    *(long *)(*(long *)this + 0xf0) = *(long *)(*(long *)this + 0xf0) + 1;
    UNLOCK();
    this = this + 0x48;
    return;
  }
  if (*(unsigned long *)((char*)PTR_instance_101ab4088 + 8) >> 1 == 0x595588bd12bf6fe8) {
    uVar3 = 3;
  }
  else {
    cVar2 = (**(code **)(*(long *)(char*)PTR_instance_101ab4088 + 0x30))(PTR_instance_101ab4088,0x66);
    uVar3 = 2;
    if (cVar2 != '\0') return;
  }
  *(unsigned long long *)(param_1 + 0x18) = 0x66;
  *(void **)(param_1 + 0x20) = puVar1;
  *(unsigned long long *)(param_1 + 0x28) = uVar3;
  scheduler::post_immediate_completion(*(scheduler **)this,(scheduler_operation *)param_1,false);
  return;
}
}
