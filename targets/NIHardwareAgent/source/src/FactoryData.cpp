#include <ni/controller_editor/FactoryData.hpp>
namespace NI::NHL2::Traktor::KontrolS4MK1 {

FactoryData::FactoryData() {
*(unsigned int *)(this + 0x10) = 0xffffffff;
  *(unsigned int *)(this + 0x14) = 0xffffffff;
  *(unsigned int *)(this + 0x18) = 0xffffffff;
  *(unsigned int *)(this + 0x1c) = 0xffffffff;
  *(unsigned int *)this = 0xffffffff;
  *(unsigned int *)(this + 4) = 0xffffffff;
  *(unsigned int *)(this + 8) = 0xffffffff;
  *(unsigned int *)(this + 0xc) = 0xffffffff;
  
}
}
