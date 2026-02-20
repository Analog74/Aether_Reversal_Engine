#include <ni/controller_editor/ControllerEditorSplashScreen.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

ControllerEditorSplashScreen::~ControllerEditorSplashScreen() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)(this + -0x280) = &PTR__ControllerEditorSplashScreen_101af45e8;
  *(void ***)(this + -0x250) = &PTR__ControllerEditorSplashScreen_101af4698;
  *(void ***)this = &PTR__ControllerEditorSplashScreen_101af4780;
  plVar3 = *(long **)(this + 0x110);
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
  NWL::ProgressDialog::~ProgressDialog((ProgressDialog *)(this + -0x280));
  delete((ProgressDialog *)(this + -0x280));
  return;
}
}
