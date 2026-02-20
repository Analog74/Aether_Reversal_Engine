#include <ni/controller_editor/set_exception_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx {
namespace task_completion_event {

void set_exception(std::exception_ptr) const {
bool bVar1;
  unsigned int uVar2;
  unsigned char local_50 [8];
  void *local_48;
  void *pvStack_40;
  unsigned long long local_38;
  exception_ptr local_30 [8];
  exception_ptr local_28 [8];
  
  // std code
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  // std code
  bVar1 = _StoreException<// std code
  // std code
  if (bVar1) {
    uVar2 = _CancelInternal(this);
  }
  else {
    uVar2 = 0;
  }
  if (local_48 != (void *)0x0) {
    pvStack_40 = local_48;
    delete(local_48);
  }
  // std code
  return uVar2;
}
}
