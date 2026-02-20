#include <ni/controller_editor/DragDropEventTarget.hpp>
namespace NI::NWL {

DragDropEventTarget::~DragDropEventTarget() {
~DragDropEventTarget(this);
  delete(this);
  return;
}
}
