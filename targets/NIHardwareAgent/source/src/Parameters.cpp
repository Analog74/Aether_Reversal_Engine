#include <ni/controller_editor/Parameters.hpp>
namespace NI::NHL2::JogWheelModel {

Parameters::Parameters() {
*(void2 *)(this + 0x40) = 1;
  *(unsigned int *)(this + 0x5c) = 0x41a00000;
  *(void2 *)(this + 0x60) = 1;
  *(unsigned int *)(this + 0x7c) = 0x42200000;
  *(unsigned long long *)(this + 4) = 0x42480000402ccccd;
  *(unsigned long long *)(this + 0xc) = 0x3be560423d4ccccd;
  *(unsigned long long *)(this + 0x14) = 0x3cd6c0d73db0f063;
  *(unsigned int *)(this + 0x1c) = 0x3e4ccccd;
  *(unsigned long long *)(this + 0x20) = *(unsigned long long *)this;
  *(unsigned long long *)(this + 0x28) = *(unsigned long long *)(this + 8);
  *(unsigned long long *)(this + 0x2c) = *(unsigned long long *)(this + 0xc);
  *(unsigned long long *)(this + 0x34) = *(unsigned long long *)(this + 0x14);
  *(unsigned int *)(this + 0x3c) = 0x3f800000;
  *(unsigned int *)(this + 0xa0) = 0x3da3d70a;
  
}
}
