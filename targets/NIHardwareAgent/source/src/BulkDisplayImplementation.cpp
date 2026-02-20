#include <ni/controller_editor/BulkDisplayImplementation.hpp>
namespace NI::NHL2::SERVER {

void BulkDisplayImplementation::resetDisplayContrasts() {
uchar local_9;
  
  local_9 = 0xff;
  // std code
            ((vector<unsigned_char,// std code
             *(long *)(this + 0x40) - *(long *)(this + 0x38),&local_9);
  return;
}

void BulkDisplayImplementation::retrieveDisplayContrasts() {
char cVar1;
  unsigned long uVar2;
  void *local_30;
  long local_28;
  
  if (*(char *)(*(long *)(this + 0x28) + 0x39) == '\0') {
    uVar2 = 0;
  }
  else {
    HIDReport::HIDReport
              ((HIDReport *)&local_30,(*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) * 3,0xf2);
    cVar1 = (**(code **)(**(long **)(this + 0x28) + 0x280))
                      (*(long **)(this + 0x28),(HIDReport *)&local_30);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else if (~(unsigned long)local_30 + local_28 == (*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) * 3)
    {
      uVar2 = 0((int7)((unsigned long)&local_30 >> 8),1);
      // std code
                ((vector<unsigned_char,// std code
                 (uchar *)((long)local_30 + 1),
                 (uchar *)((long)local_30 + ~(unsigned long)local_30 + local_28 + 1));
    }
    else {
      uVar2 = 0;
    }
    if (local_30 != (void *)0x0) {
      delete(local_30);
    }
  }
  return uVar2 & 0xffffffff;
}
}
