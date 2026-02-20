#include <ni/controller_editor/PopupMenuEventTarget.hpp>
namespace NI::UIA::(anonymous namespace) {

PopupMenuEventTarget::~PopupMenuEventTarget() {
EventTarget::~EventTarget((EventTarget *)this);
  delete(this);
  return;
}
}
