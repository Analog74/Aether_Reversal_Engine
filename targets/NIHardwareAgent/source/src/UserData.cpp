#include <ni/controller_editor/UserData.hpp>
namespace NI::NHL2::Traktor::KontrolS4MK2 {

void UserData::prepareForWrite() {
if (((*(uint *)this & 0xffffff00) == 0x13100000) && ((*(uint *)this & 0xfe) != 0)) {
    return;
  }
  *(unsigned int *)this = 0x13100001;
  return;
}

UserData::UserData() {
*(unsigned int *)(this + 0xb0) = 0xffffffff;
  *(unsigned int *)(this + 0xb4) = 0xffffffff;
  *(unsigned int *)(this + 0xb8) = 0xffffffff;
  *(unsigned int *)(this + 0xbc) = 0xffffffff;
  *(unsigned int *)(this + 0xa0) = 0xffffffff;
  *(unsigned int *)(this + 0xa4) = 0xffffffff;
  *(unsigned int *)(this + 0xa8) = 0xffffffff;
  *(unsigned int *)(this + 0xac) = 0xffffffff;
  *(unsigned int *)(this + 0x90) = 0xffffffff;
  *(unsigned int *)(this + 0x94) = 0xffffffff;
  *(unsigned int *)(this + 0x98) = 0xffffffff;
  *(unsigned int *)(this + 0x9c) = 0xffffffff;
  *(unsigned int *)(this + 0x80) = 0xffffffff;
  *(unsigned int *)(this + 0x84) = 0xffffffff;
  *(unsigned int *)(this + 0x88) = 0xffffffff;
  *(unsigned int *)(this + 0x8c) = 0xffffffff;
  *(unsigned int *)(this + 0x70) = 0xffffffff;
  *(unsigned int *)(this + 0x74) = 0xffffffff;
  *(unsigned int *)(this + 0x78) = 0xffffffff;
  *(unsigned int *)(this + 0x7c) = 0xffffffff;
  *(unsigned int *)(this + 0x60) = 0xffffffff;
  *(unsigned int *)(this + 100) = 0xffffffff;
  *(unsigned int *)(this + 0x68) = 0xffffffff;
  *(unsigned int *)(this + 0x6c) = 0xffffffff;
  *(unsigned int *)(this + 0x50) = 0xffffffff;
  *(unsigned int *)(this + 0x54) = 0xffffffff;
  *(unsigned int *)(this + 0x58) = 0xffffffff;
  *(unsigned int *)(this + 0x5c) = 0xffffffff;
  *(unsigned int *)(this + 0x40) = 0xffffffff;
  *(unsigned int *)(this + 0x44) = 0xffffffff;
  *(unsigned int *)(this + 0x48) = 0xffffffff;
  *(unsigned int *)(this + 0x4c) = 0xffffffff;
  *(unsigned int *)(this + 0x30) = 0xffffffff;
  *(unsigned int *)(this + 0x34) = 0xffffffff;
  *(unsigned int *)(this + 0x38) = 0xffffffff;
  *(unsigned int *)(this + 0x3c) = 0xffffffff;
  *(unsigned int *)(this + 0x20) = 0xffffffff;
  *(unsigned int *)(this + 0x24) = 0xffffffff;
  *(unsigned int *)(this + 0x28) = 0xffffffff;
  *(unsigned int *)(this + 0x2c) = 0xffffffff;
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
