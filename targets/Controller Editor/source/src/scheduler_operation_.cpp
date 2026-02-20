#include <ni/controller_editor/scheduler_operation_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail::op_queue<boost::asio::detail {

void scheduler_operation>::~op_queue() {
long lVar1;
  long *plVar2;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    do {
      lVar1 = *plVar2;
      *(long *)this = lVar1;
      if (lVar1 == 0) {
        *(unsigned long long *)(this + 8) = 0;
      }
      *plVar2 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      (*(code *)plVar2[1])(0,plVar2,&local_38,0);
      plVar2 = *(long **)this;
    } while (plVar2 != (long *)0x0);
  }
  return;
}
}
