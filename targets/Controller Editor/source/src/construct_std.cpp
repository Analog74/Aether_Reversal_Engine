#include <ni/controller_editor/construct_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail::resolver_service_base {

void construct(1 param_1, std::shared_ptr<void>& {
long *plVar1;
  long lVar2;
  long *plVar3;
  unsigned long long *puVar4;
  
  puVar4 = (unsigned long long *)new char[0x20];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR____shared_ptr_pointer_101b2b6d8;
  puVar4[3] = 0;
  *(unsigned long long *)param_1 = 0;
  plVar3 = *(long **)(param_1 + 8);
  *(unsigned long long **)(param_1 + 8) = puVar4;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      return;
    }
  }
  return;
}
}
