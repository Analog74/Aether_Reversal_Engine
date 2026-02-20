#include <ni/controller_editor/TraktorKontrolZ2Widget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

void TraktorKontrolZ2Widget::getModel() {
return *(unsigned long long *)(this + 0x330);
}

void TraktorKontrolZ2Widget::getPageMenu(unsigned int) {
long lVar1;
  unsigned int in_register_00000034;
  
  lVar1 = *(long *)(CONCAT44(in_register_00000034,param_1) + 0x28);
  *(unsigned long long *)this = *(unsigned long long *)(CONCAT44(in_register_00000034,param_1) + 0x20);
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return this;
}

void TraktorKontrolZ2Widget::updatePageEntries(unsigned int) {
updatePageEntries((int)this - 0x6d0);
  return;
}
}
