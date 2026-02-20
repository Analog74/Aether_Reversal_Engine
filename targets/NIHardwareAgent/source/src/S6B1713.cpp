#include <ni/controller_editor/S6B1713.hpp>
namespace NI::NHL2::Display {

S6B1713::S6B1713() {
*(unsigned long long *)this = 0;
  *(unsigned int *)(this + 8) = 0x23;
  this[0xc] = (S6B1713)0x0;
  
}
}
