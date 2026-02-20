#include <ni/controller_editor/PadGroup.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MaschineMikroMK1 {

PadGroup::~PadGroup() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
