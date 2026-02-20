#include <ni/controller_editor/AppModule.hpp>
namespace NI::UIA {

AppModule::AppModule() {
*(void ***)this = &PTR__AppModule_1009eb408;
  this[8] = (AppModule)0x0;
  *(unsigned long long *)(this + 0x10) = 0;
  if (g_current != (AppModule *)0x0) {
    
  }
  g_current = this;
  
}

void AppModule::getCurrentModule() {
return g_current;
}

void AppModule::getLocale(bool) const {
char in_DL;
  void7 in_register_00000039;
  AppModule *this;
  
  this = (AppModule *)0(in_register_00000039,param_1);
  if (in_DL == '\0') {
    *(unsigned long long *)this = 0;
    *(unsigned long long *)(this + 8) = 0;
    *(unsigned long long *)(this + 0x10) = 0;
  }
  else {
    getLocaleInRegistry(this);
  }
  return this;
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

void AppModule::getModuleFileName() const {
ni::system::get_current_bundle_path();
  return;
}

void AppModule::getVersion() {
path *ppVar1;
  
  ppVar1 = (path *)ni::system::get_current_bundle_path();
  ni::filesystem::file_version(ppVar1);
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
