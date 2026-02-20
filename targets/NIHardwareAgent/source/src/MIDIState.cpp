#include <ni/controller_editor/MIDIState.hpp>
namespace NI::NHL2::SERVER::ControllerBase {

MIDIState::MIDIState() [clone .cold.1] {
if (this != (MIDIState *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  
}

MIDIState::~MIDIState() {
void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  MIDIState *pMVar5;
  
  pvVar1 = *(void **)(this + 0xb8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0xc0);
    pvVar4 = pvVar1;
    if (*(void **)(this + 0xc0) != pvVar1) {
      do {
        pvVar4 = (void *)((long)pvVar3 + -0x20);
        pvVar2 = *(void **)((long)pvVar3 + -0x18);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x10) = pvVar2;
          delete(pvVar2);
        }
        pvVar3 = pvVar4;
      } while (pvVar1 != pvVar4);
      pvVar4 = *(void **)(this + 0xb8);
    }
    *(void **)(this + 0xc0) = pvVar1;
    delete(pvVar4);
  }
  pvVar1 = *(void **)(this + 0xa0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    delete(pvVar1);
  }
  pMVar5 = *(MIDIState **)(this + 0x60);
  if (this + 0x40 == pMVar5) {
    (**(code **)(*(long *)pMVar5 + 0x20))();
    pMVar5 = *(MIDIState **)(this + 0x30);
    if (this + 0x10 == pMVar5) goto LAB_10006cec0;
  }
  else {
    if (pMVar5 != (MIDIState *)0x0) {
      (**(code **)(*(long *)pMVar5 + 0x28))();
    }
    pMVar5 = *(MIDIState **)(this + 0x30);
    if (this + 0x10 == pMVar5) {
LAB_10006cec0:
                    /* WARNING: Could not recover jumptable at 0x00010006cecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pMVar5 + 0x20))();
      return;
    }
  }
  if (pMVar5 == (MIDIState *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006ceaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pMVar5 + 0x28))();
  return;
}
}
