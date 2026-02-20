#include <ni/controller_editor/Widget___.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Node<std::weak_ptr<NI::NWL {

void Widget> >::~Node() {
long *plVar1;
  long *plVar2;
  
  *(void ***)this = &PTR__Node_101b16168;
  if (*(long *)(this + 0x40) != 0) {
    // std code
  }
  *(void ***)this = &PTR__TreeNodeImpl_101b16230;
  plVar2 = *(long **)(this + 8);
  plVar1 = *(long **)(this + 0x10);
  if (plVar2 == plVar1) {
    *(long **)(this + 0x10) = plVar2;
  }
  else {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
        plVar1 = *(long **)(this + 0x10);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 8);
    *(long **)(this + 0x10) = plVar2;
  }
  if (plVar2 != (long *)0x0) {
    *(long **)(this + 0x10) = plVar2;
    delete(plVar2);
  }
  delete(this);
  return;
}
}
