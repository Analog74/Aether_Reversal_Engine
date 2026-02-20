#include <ni/controller_editor/ScrollbarExt.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL {

ScrollbarExt::~ScrollbarExt() {
ScrollbarExt *pSVar1;
  
  *(void ***)(this + -0x60) = &PTR__ScrollbarExt_101b146b0;
  *(void ***)this = &PTR__ScrollbarExt_101b14790;
  pSVar1 = *(ScrollbarExt **)(this + 0x650);
  if (this + 0x630 == pSVar1) {
    (**(code **)(*(long *)pSVar1 + 0x20))();
  }
  else if (pSVar1 != (ScrollbarExt *)0x0) {
    (**(code **)(*(long *)pSVar1 + 0x28))();
  }
  Scrollbar::~Scrollbar((Scrollbar *)(this + -0x60));
  delete((Scrollbar *)(this + -0x60));
  return;
}
}
