#include <ni/controller_editor/descriptor_state.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail::kqueue_reactor {

descriptor_state::~descriptor_state() {
long lVar1;
  long *plVar2;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  plVar2 = *(long **)(this + 0x88);
  if (plVar2 != (long *)0x0) {
    do {
      lVar1 = *plVar2;
      *(long *)(this + 0x88) = lVar1;
      if (lVar1 == 0) {
        *(unsigned long long *)(this + 0x90) = 0;
      }
      *plVar2 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      (*(code *)plVar2[1])(0,plVar2,&local_38,0);
      plVar2 = *(long **)(this + 0x88);
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = *(long **)(this + 0x78);
  if (plVar2 != (long *)0x0) {
    do {
      lVar1 = *plVar2;
      *(long *)(this + 0x78) = lVar1;
      if (lVar1 == 0) {
        *(unsigned long long *)(this + 0x80) = 0;
      }
      *plVar2 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      (*(code *)plVar2[1])(0,plVar2,&local_38,0);
      plVar2 = *(long **)(this + 0x78);
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = *(long **)(this + 0x68);
  if (plVar2 != (long *)0x0) {
    do {
      lVar1 = *plVar2;
      *(long *)(this + 0x68) = lVar1;
      if (lVar1 == 0) {
        *(unsigned long long *)(this + 0x70) = 0;
      }
      *plVar2 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      (*(code *)plVar2[1])(0,plVar2,&local_38,0);
      plVar2 = *(long **)(this + 0x68);
    } while (plVar2 != (long *)0x0);
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(this + 0x18));
  return;
}
}
