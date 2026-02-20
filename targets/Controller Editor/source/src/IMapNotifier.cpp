#include <ni/controller_editor/IMapNotifier.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void IMapNotifier::onAnyCapacitiveTouchChanged(bool param_1) {
}

IMapNotifier::~IMapNotifier() {
unsigned long uVar1;
  
  *(void ***)this = &PTR__IMapNotifier_101afebc0;
  uVar1 = *(unsigned long *)(this + 0xe8);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0xf0,this + 0xf0,2);
    }
    *(unsigned long long *)(this + 0xe8) = 0;
  }
  uVar1 = *(unsigned long *)(this + 200);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0xd0,this + 0xd0,2);
    }
    *(unsigned long long *)(this + 200) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0xa8);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0xb0,this + 0xb0,2);
    }
    *(unsigned long long *)(this + 0xa8) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x88);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x90,this + 0x90,2);
    }
    *(unsigned long long *)(this + 0x88) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x68);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x70,this + 0x70,2);
    }
    *(unsigned long long *)(this + 0x68) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x48);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x50,this + 0x50,2);
    }
    *(unsigned long long *)(this + 0x48) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x28);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x30,this + 0x30,2);
    }
    *(unsigned long long *)(this + 0x28) = 0;
  }
  uVar1 = *(unsigned long *)(this + 8);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x10,this + 0x10,2);
    }
    *(unsigned long long *)(this + 8) = 0;
  }
  return;
}
}
