#include <ni/controller_editor/CreateData.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::Font {

CreateData::~CreateData() {
if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
