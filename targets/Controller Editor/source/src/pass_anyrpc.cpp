#include <ni/controller_editor/pass_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::robot::detail {

void pass(2 param_2, anyrpc::Value {
Value *pVVar1;
  Value local_30 [24];
  
  anyrpc::Value::Value((Value *)this);
  pVVar1 = (Value *)anyrpc::Value::operator[]((Value *)this,"status");
  anyrpc::Value::operator=(pVVar1,"PASS");
  if (*(int *)(param_2 + 0x10) == 0) {
    anyrpc::Value::Value(local_30,"",true);
  }
  else {
    anyrpc::Value::Value(local_30,param_2);
  }
  pVVar1 = (Value *)anyrpc::Value::operator[]((Value *)this,"return");
  anyrpc::Value::operator=(pVVar1,local_30);
  anyrpc::Value::~Value(local_30);
  return this;
}
}
