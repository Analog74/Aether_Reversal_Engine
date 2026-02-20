#include <ni/controller_editor/iterator.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::filesystem::path {

iterator::~iterator() {
if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
