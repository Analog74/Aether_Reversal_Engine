#include <ni/controller_editor/addPage_unsigned_int__unsigned_int__std.hpp>
namespace NI::NHL2::ControllerMap {

void addPage(unsigned int, unsigned int, std::string const&, bool) {
AssignmentMapCollBase *this_00;
  unsigned int in_register_00000014;
  unsigned int in_register_00000034;
  
  this_00 = (AssignmentMapCollBase *)
            (**(code **)(*(long *)this + 0xc0))
                      (this,CONCAT44(in_register_00000034,param_1),
                       CONCAT44(in_register_00000014,param_2));
  if (this_00 != (AssignmentMapCollBase *)0x0) {
    AssignmentMapCollBase::add(this_00,param_3,param_4,0);
    return;
  }
  return;
}
}
