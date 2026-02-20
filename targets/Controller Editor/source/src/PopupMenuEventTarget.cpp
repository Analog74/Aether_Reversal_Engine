#include <ni/controller_editor/PopupMenuEventTarget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::(anonymous namespace) {

PopupMenuEventTarget::~PopupMenuEventTarget() {
EventTarget::~EventTarget((EventTarget *)this);
  delete(this);
  return;
}
}
