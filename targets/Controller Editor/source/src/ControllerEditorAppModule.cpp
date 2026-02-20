#include <ni/controller_editor/ControllerEditorAppModule.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void ControllerEditorAppModule::openTraceStream() {
int iVar1;
  string *psVar2;
  FILE *pFVar3;
  char *pcVar4;
  string local_30;
  char local_2f [7];
  long local_28;
  char *local_20;
  
  psVar2 = (string *)NHL2::findOrCreateCommonLogFileDirectory();
  // std code
  if (((byte)local_30 & 1) == 0) {
    if ((byte)local_30 >> 1 == 0) return;
  }
  else if (local_28 == 0) return;
  // boost code
  iVar1 = (int)(this + 0x18);
  if (*(long *)(this + 0x98) == 0) {
    pcVar4 = local_20;
    if (((byte)local_30 & 1) == 0) {
      pcVar4 = local_2f;
    }
    pFVar3 = _fopen(pcVar4,"w");
    *(FILE **)(this + 0x98) = pFVar3;
    if (pFVar3 != (FILE *)0x0) {
      *(unsigned int *)(this + 0x1a8) = 0x10;
      // std code
      return;
    }
  }
  // std code
  if (((byte)local_30 & 1) != 0) {
    delete(local_20);
  }
  return;
}

ControllerEditorAppModule::~ControllerEditorAppModule() {
void *puVar1;
  
  *(void ***)this = &PTR__ControllerEditorAppModule_101ab4a90;
  puVar1 = PTR_vtable_101ab4588;
  *(void **)(this + 0x18) = (char*)PTR_vtable_101ab4588 + 0x18;
  *(void **)(this + 0x1b8) = puVar1 + 0x40;
  // std code
  // std code
  // std code
  UIA::AppModule::~AppModule((AppModule *)this);
  delete(this);
  return;
}
}
