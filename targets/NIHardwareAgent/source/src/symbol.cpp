#include <ni/controller_editor/symbol.hpp>
namespace ni {

void symbol::hash() const {
return *(unsigned long long *)(*(long *)this + 0x30);
}

symbol::symbol(char const*, unsigned long) {
symbol(this,param_1,param_2);
  
}
}
