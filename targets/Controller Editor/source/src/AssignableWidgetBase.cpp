#include <ni/controller_editor/AssignableWidgetBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

void AssignableWidgetBase::getTextEdit() {
long lVar1;
  long in_RSI;
  
  lVar1 = *(long *)(in_RSI + 0x28);
  *(unsigned long long *)this = *(unsigned long long *)(in_RSI + 0x20);
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return this;
}

AssignableWidgetBase::~AssignableWidgetBase() {
~AssignableWidgetBase(this + -0x3f0);
  delete(this + -0x3f0);
  return;
}
}
