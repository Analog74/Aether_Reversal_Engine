#include <ni/controller_editor/Configuration.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::cfg {

Configuration::~Configuration() {
if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
