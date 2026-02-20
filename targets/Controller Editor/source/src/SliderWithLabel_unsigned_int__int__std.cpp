#include <ni/controller_editor/SliderWithLabel_unsigned_int__int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::SliderWithLabel {

void SliderWithLabel(unsigned int, int, std::function<void (unsigned int)>) {
long *plVar1;
  unsigned long long uVar2;
  
  ___bzero(this,0x3f0);
  NWL::Bar::Bar((Bar *)this);
  *(void ***)this = &PTR__SliderWithLabel_101af5010;
  *(void ***)(this + 0x60) = &PTR__SliderWithLabel_101af50f0;
  *(unsigned long long *)(this + 0x3f0) = 0;
  *(unsigned long long *)(this + 0x3f8) = 0;
  *(unsigned long long *)(this + 0x400) = 0;
  *(unsigned long long *)(this + 0x408) = 0;
  plVar1 = (long *)param_4[4];
  if (plVar1 == (long *)0x0) {
    *(unsigned long long *)(this + 0x430) = 0;
  }
  else if(4 param_4, param_4 == plVar1 {
    *(SliderWithLabel **)(this + 0x430) = this + 0x410;
    (**(code **)(*(long *)param_4[4] + 0x18))((long *)param_4[4],this + 0x410);
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(unsigned long long *)(this + 0x430) = uVar2;
  }
  *(unsigned int *)(this + 0x440) = param_1;
  *(unsigned int *)(this + 0x444) = param_2;
  *(unsigned int *)(this + 0x448) = param_1;
  this[0x44c] = (SliderWithLabel)0x0;
  *(unsigned long long *)(this + 0x450) = 0;
  createWidgets(this);
  return;
}
}
