#include <ni/controller_editor/FirmwareUpdaterConfig.hpp>
namespace NI {

FirmwareUpdaterConfig::~FirmwareUpdaterConfig() {
unsigned long uVar1;
  
  uVar1 = *(unsigned long *)(this + 0x230);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x238,this + 0x238,2);
    }
    *(unsigned long long *)(this + 0x230) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x210);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x218,this + 0x218,2);
    }
    *(unsigned long long *)(this + 0x210) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x1f0);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x1f8,this + 0x1f8,2);
    }
    *(unsigned long long *)(this + 0x1f0) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x1d0);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x1d8,this + 0x1d8,2);
    }
    *(unsigned long long *)(this + 0x1d0) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x1b0);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x1b8,this + 0x1b8,2);
    }
    *(unsigned long long *)(this + 0x1b0) = 0;
  }
  uVar1 = *(unsigned long *)(this + 400);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x198,this + 0x198,2);
    }
    *(unsigned long long *)(this + 400) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x170);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x178,this + 0x178,2);
    }
    *(unsigned long long *)(this + 0x170) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x150);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x158,this + 0x158,2);
    }
    *(unsigned long long *)(this + 0x150) = 0;
  }
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  return;
}
}
