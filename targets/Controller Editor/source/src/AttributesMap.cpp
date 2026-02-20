#include <ni/controller_editor/AttributesMap.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

AttributesMap::~AttributesMap() {
// std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)this,*(__tree_node **)(this + 8));
  return;
}
}
