#include <ni/controller_editor/DialogImpl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA {

void DialogImpl::abortModal() {
long lVar1;
  void *puVar2;
  long lVar3;
  
  puVar2 = PTR__NSApp_101ab4018;
  if ((this[0x90] != (DialogImpl)0x0) &&
     (lVar1 = *(long *)(this + 0x20),
     lVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)
                       (*(unsigned long long *)PTR__NSApp_101ab4018,"modalWindow"), lVar3 == lVar1)) {
    this[0x90] = (DialogImpl)0x0;
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(unsigned long long *)puVar2,"abortModal");
    return 1;
  }
  return 0;
}

void DialogImpl::stopModal() {
if (this[0x90] != (DialogImpl)0x0) {
    this[0x90] = (DialogImpl)0x0;
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(unsigned long long *)PTR__NSApp_101ab4018,"stopModal");
    return;
  }
  return;
}

DialogImpl::~DialogImpl() {
WindowImpl::~WindowImpl((WindowImpl *)this);
  delete(this);
  return;
}
}
