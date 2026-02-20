#include <ni/controller_editor/fail_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::robot::detail {

void fail(1 param_1, std::string const& {
Value *pVVar1;
  unsigned long local_38 [2];
  void *local_28;
  
  anyrpc::Value::Value((Value *)this);
  pVVar1 = (Value *)anyrpc::Value::operator[]((Value *)this,"status");
  anyrpc::Value::operator=(pVVar1,"FAIL");
  pVVar1 = (Value *)anyrpc::Value::operator[]((Value *)this,"error");
  anyrpc::Value::operator=(pVVar1,param_1);
  local_38[0] = 0;
  local_38[1] = 0;
  local_28 = (void *)0x0;
  pVVar1 = (Value *)anyrpc::Value::operator[]((Value *)this,"return");
  anyrpc::Value::operator=(pVVar1,(string *)local_38);
  if ((local_38[0] & 1) != 0) {
    delete(local_28);
  }
  return this;
}
}
