#include <ni/controller_editor/DynamicStateVariableFilter.hpp>
namespace NI::DSP {

DynamicStateVariableFilter::DynamicStateVariableFilter() {
*(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x1c) = 0;
  *(unsigned long long *)(this + 0x24) = 0;
  *(unsigned long long *)(this + 0x54) = 0xbf8000003f800000;
  *(unsigned int *)(this + 0x5c) = 0xbf800000;
  *(unsigned long long *)(this + 0x2c) = 0x3f8000003fb504f3;
  *(unsigned long long *)(this + 8) = 0x3f800000;
  *(unsigned int *)(this + 0x10) = 0;
  *(void2 *)(this + 0x34) = 1;
  this[0x36] = (DynamicStateVariableFilter)0x0;
  *(unsigned long long *)(this + 0x38) = 0x447a000000000000;
  *(unsigned long long *)(this + 0x40) = 0x3f80000000000000;
  *(unsigned long long *)(this + 0x48) = 0x3f8000003f800000;
  
}

void DynamicStateVariableFilter::processLP(float param_1) {
}

void DynamicStateVariableFilter::setFreqViaMapping(float param_1) {
}
}
