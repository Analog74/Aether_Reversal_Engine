#include <ni/controller_editor/seekpos_std.hpp>
namespace std::stringbuf {

void seekpos(std::fpos<__mbstate_t>, unsigned int) {
unsigned long long in_stack_00000088;
  
  (**(code **)(*param_2 + 0x20))(this,param_2,in_stack_00000088,0,param_3);
  return this;
}
}
