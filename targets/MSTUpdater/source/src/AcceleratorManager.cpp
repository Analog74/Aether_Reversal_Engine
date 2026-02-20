#include <ni/controller_editor/AcceleratorManager.hpp>
namespace NI::UIA {

AcceleratorManager::AcceleratorManager() {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)new(0x20);
  *puVar1 = &PTR__AcceleratorManagerImplMap_100229858;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = puVar1 + 2;
  *(unsigned long long **)this = puVar1;
  
}

AcceleratorManager::~AcceleratorManager() {
long *plVar1;
  
  plVar1 = *(long **)this;
  *(unsigned long long *)this = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000848aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}
}
