#include <ni/controller_editor/Registry2KeyCF.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::DETAIL {

Registry2KeyCF::~Registry2KeyCF() {
close(this);
  if (*(long *)(this + 0x18) != 0) {
    _CFRelease();
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
