#include <ni/controller_editor/PadGroup.hpp>
namespace NI::NHL2::MaschineMikroMK1 {

PadGroup::~PadGroup() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
