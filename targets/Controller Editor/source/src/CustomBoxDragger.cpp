#include <ni/controller_editor/CustomBoxDragger.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

CustomBoxDragger::~CustomBoxDragger() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)(this + -0x60) = &PTR__BoxDragger_101b147c0;
  *(void ***)this = &PTR__BoxDragger_101b148a0;
  plVar3 = *(long **)(this + 0x3b8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  nod::signal_type<nod::multithread_policy,void(NI::GP::Rect_const&)>::~signal_type
            ((signal_type<nod::multithread_policy,void(NI::GP::Rect_const&)> *)(this + 0x2f0));
  nod::signal_type<nod::multithread_policy,void(NI::GP::Rect_const&)>::~signal_type
            ((signal_type<nod::multithread_policy,void(NI::GP::Rect_const&)> *)(this + 0x230));
  NWL::Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
