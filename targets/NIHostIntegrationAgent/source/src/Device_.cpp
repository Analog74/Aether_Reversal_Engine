#include <ni/controller_editor/Device_.hpp>
namespace std::shared_ptr<NI::NHL2::Komplete::KontrolA {

void Device>::~shared_ptr[abi:v15006]() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      return;
    }
  }
  return;
}
}
