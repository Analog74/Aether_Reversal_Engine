#include <ni/controller_editor/WindowingDragDropDelegate.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::(anonymous namespace) {

WindowingDragDropDelegate::~WindowingDragDropDelegate() {
IDragDropDelegate::~IDragDropDelegate((IDragDropDelegate *)this);
  delete(this);
  return;
}
}
