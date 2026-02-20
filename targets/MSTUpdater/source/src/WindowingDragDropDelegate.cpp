#include <ni/controller_editor/WindowingDragDropDelegate.hpp>
namespace NI::UIA::(anonymous namespace) {

WindowingDragDropDelegate::~WindowingDragDropDelegate() {
IDragDropDelegate::~IDragDropDelegate((IDragDropDelegate *)this);
  delete(this);
  return;
}
}
