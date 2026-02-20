#include <ni/controller_editor/Parameter.hpp>
namespace ni::pic {

Parameter::~Parameter() {
long *plVar1;
  long lVar2;
  Parameter PVar3;
  long *plVar4;
  
  if (((byte)this[0x58] & 1) == 0) {
    PVar3 = this[0x40];
  }
  else {
    delete(*(void **)(this + 0x68));
    PVar3 = this[0x40];
  }
  if (((byte)PVar3 & 1) == 0) {
    plVar4 = *(long **)(this + 0x30);
  }
  else {
    delete(*(void **)(this + 0x50));
    plVar4 = *(long **)(this + 0x30);
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
      return;
    }
  }
  return;
}
}
