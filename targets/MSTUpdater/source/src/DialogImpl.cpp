#include <ni/controller_editor/DialogImpl.hpp>
namespace NI::UIA::COCOA {

void DialogImpl::stopModal() {
if (this[0x59] != (DialogImpl)0x0) {
    this[0x59] = (DialogImpl)0x0;
    (*(code *)PTR__objc_msgSend_100227360)(*(unsigned long long *)PTR__NSApp_100227010,"stopModal");
    return;
  }
  return;
}
}
