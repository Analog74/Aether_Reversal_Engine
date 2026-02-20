#include <ni/controller_editor/AppModule.hpp>
namespace NI::UIA {

AppModule::AppModule() {
*(void ***)this = &PTR__AppModule_10022a230;
  this[8] = (AppModule)0x0;
  *(unsigned long long *)(this + 0x10) = 0;
  if (g_current == (AppModule *)0x0) {
    g_current = this;
  }
  
}

void AppModule::destroyApplication() {
long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,this[8]);
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    *(unsigned long long *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010009eaae. Too many branches */
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

void AppModule::getLocale(bool) const {
char in_DL;
  void7 in_register_00000039;
  AppModule *this;
  
  this = (AppModule *)0(in_register_00000039,param_1);
  if (in_DL == '\0') {
    *(unsigned long long *)(this + 0x10) = 0;
    *(unsigned long long *)(this + 8) = 0;
    *(unsigned long long *)this = 0;
  }
  else {
    getLocaleInRegistry(this);
  }
  return this;
}

void AppModule::getLocaleInRegistry() {
string *psVar1;
  char cVar2;
  string *local_38;
  string *psStack_30;
  unsigned long long local_28;
  
  local_38 = (string *)0x0;
  psStack_30 = (string *)0x0;
  local_28 = 0;
  cVar2 = GP::Registry::get("AppleLanguages",&local_38,2);
  if ((cVar2 == '\0') || (local_38 == psStack_30)) {
    *(unsigned long long *)(this + 0x10) = 0;
    *(unsigned long long *)(this + 8) = 0;
    *(unsigned long long *)this = 0;
  }
  else {
    // std code
  }
  psVar1 = local_38;
  if (local_38 != (string *)0x0) {
    while (psStack_30 != psVar1) {
      psStack_30 = psStack_30 + -0x18;
      // std code
    }
    delete(local_38);
  }
  return this;
}

void AppModule::initRegistry() const {
return 0;
}

AppModule::~AppModule() {
long *plVar1;
  
  *(void ***)this = &PTR__AppModule_10022a230;
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,this[8]);
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    *(unsigned long long *)(this + 0x10) = 0;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  delete(this);
  return;
}
}
