#include <ni/controller_editor/AppModule.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

AppModule::AppModule() {
*(void ***)this = &PTR__AppModule_101b24278;
  this[8] = (AppModule)0x0;
  *(unsigned long long *)(this + 0x10) = 0;
  if (g_current != (AppModule *)0x0) {
    
  }
  g_current = this;
  
}

void AppModule::destroyApplication() {
long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,this[8]);
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    *(unsigned long long *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001005da27d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}

void AppModule::getApplication() const {
return *(unsigned long long *)(this + 0x10);
}

void AppModule::getCurrentModule() {
return g_current;
}

void AppModule::getLocaleInRegistry() [clone .cold.1] {
void *pvVar1;
  unsigned long long *in_RSI;
  void *in_RDI;
  void *pvVar2;
  
  pvVar1 = (void *)in_RSI[1];
  pvVar2 = in_RDI;
  if ((void *)in_RSI[1] != in_RDI) {
    do {
      pvVar2 = (void *)((long)pvVar1 + -0x18);
      if ((*(byte *)((long)pvVar1 + -0x18) & 1) != 0) {
        delete(*(void **)((long)pvVar1 + -8));
      }
      pvVar1 = pvVar2;
    } while (in_RDI != pvVar2);
    pvVar2 = (void *)*in_RSI;
  }
  in_RSI[1] = in_RDI;
  delete(pvVar2);
  return;
}

void AppModule::initRegistry() const {
return 0;
}

AppModule::~AppModule() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
