#include <ni/controller_editor/NOPDragDropDelegate.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::(anonymous namespace) {

void NOPDragDropDelegate::registerDNDFormat(char const*) const {
return 0;
}

NOPDragDropDelegate::~NOPDragDropDelegate() {
delete(this);
  return;
}
}
