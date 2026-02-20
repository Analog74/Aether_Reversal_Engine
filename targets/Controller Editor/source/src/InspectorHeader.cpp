#include <ni/controller_editor/InspectorHeader.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

InspectorHeader::~InspectorHeader() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)(this + -0x60) = &PTR__InspectorHeader_101af4ab0;
  *(void ***)this = &PTR__InspectorHeader_101af4b90;
  plVar3 = *(long **)(this + 0x478);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  MidiMeter::~MidiMeter((MidiMeter *)(this + -0x60));
  delete((MidiMeter *)(this + -0x60));
  return;
}
}
