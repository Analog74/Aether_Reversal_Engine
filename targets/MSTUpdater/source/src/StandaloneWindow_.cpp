#include <ni/controller_editor/StandaloneWindow_.hpp>
namespace NI::NWL::Window<NI::UIA {

void StandaloneWindow>::performRedraw(bool param_1) {
}

void StandaloneWindow>::redrawWholeWindow() {
Region *this_00;
  long lVar1;
  long *plVar2;
  ListItem *pLVar3;
  
  this_00 = (Region *)(this + 0x200);
  Pane::update((Pane *)(this + 0x30),this_00);
  if ((*(long *)(this + 0x200) == 0) &&
     ((*(int *)(this + 0x21c) <= *(int *)(this + 0x214) ||
      (*(int *)(this + 0x220) <= *(int *)(this + 0x218))))) {
    *(unsigned long long *)(this + 0x21c) = 0;
    *(unsigned long long *)(this + 0x214) = 0;
  }
  else {
    UIA::WindowBase::invalidateRegion((Region *)this);
    pLVar3 = *(ListItem **)(this + 0x200);
    *(unsigned long long *)(this + 0x21c) = 0;
    *(unsigned long long *)(this + 0x214) = 0;
    while (pLVar3 != (ListItem *)0x0) {
      lVar1 = *(long *)pLVar3;
      plVar2 = *(long **)(pLVar3 + 8);
      if (lVar1 == 0) {
        *(long **)this_00 = plVar2;
      }
      else {
        *(long **)(lVar1 + 8) = plVar2;
        plVar2 = *(long **)(pLVar3 + 8);
      }
      if (plVar2 == (long *)0x0) {
        *(long *)(this + 0x208) = lVar1;
      }
      else {
        *plVar2 = lVar1;
      }
      GP::Region::implDeleteItem(this_00,pLVar3);
      pLVar3 = *(ListItem **)this_00;
    }
  }
  *(unsigned int *)(this + 0x210) = 0;
  performRedraw(this,true);
  return;
}

void StandaloneWindow>::Window() {
BackgroundDrawingCanvas *this_00;
  
  UIA::StandaloneWindow::StandaloneWindow((StandaloneWindow *)this);
  WindowingPane::WindowingPane((WindowingPane *)(this + 0x30));
  *(void ***)this = &PTR__Window_1002340a8;
  *(void ***)(this + 0x30) = &PTR__Window_100234100;
  *(unsigned long long *)(this + 0x1f0) = 0;
  this_00 = (BackgroundDrawingCanvas *)new(0xb8);
  BackgroundDrawingCanvas::BackgroundDrawingCanvas(this_00);
  *(BackgroundDrawingCanvas **)(this + 0x1f8) = this_00;
  *(unsigned int *)(this + 0x220) = 0;
  *(unsigned long long *)(this + 0x218) = 0;
  *(unsigned long long *)(this + 0x210) = 0;
  *(unsigned long long *)(this + 0x208) = 0;
  *(unsigned long long *)(this + 0x200) = 0;
  return;
}

void StandaloneWindow>::~Window() {
WindowingPane *this_00;
  Region *this_01;
  long lVar1;
  long *plVar2;
  ListItem *pLVar3;
  
  *(void ***)this = &PTR__Window_1002340a8;
  this_00 = (WindowingPane *)(this + 0x30);
  *(void ***)(this + 0x30) = &PTR__Window_100234100;
  if (*(long *)(this + 0x1f0) != 0) {
    UIA::EventTarget::killEventTimer((EventTarget *)this);
    *(unsigned long long *)(this + 0x1f0) = 0;
  }
  if (*(long **)(this + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f8) + 8))();
    *(unsigned long long *)(this + 0x1f8) = 0;
  }
  (**(code **)(*(long *)this_00 + 0x88))(this_00);
  pLVar3 = *(ListItem **)(this + 0x200);
  if (pLVar3 != (ListItem *)0x0) {
    this_01 = (Region *)(this + 0x200);
    do {
      lVar1 = *(long *)pLVar3;
      plVar2 = *(long **)(pLVar3 + 8);
      if (lVar1 == 0) {
        *(long **)this_01 = plVar2;
      }
      else {
        *(long **)(lVar1 + 8) = plVar2;
        plVar2 = *(long **)(pLVar3 + 8);
      }
      if (plVar2 == (long *)0x0) {
        *(long *)(this + 0x208) = lVar1;
      }
      else {
        *plVar2 = lVar1;
      }
      GP::Region::implDeleteItem(this_01,pLVar3);
      pLVar3 = *(ListItem **)this_01;
    } while (pLVar3 != (ListItem *)0x0);
  }
  *(unsigned int *)(this + 0x210) = 0;
  WindowingPane::~WindowingPane(this_00);
  UIA::StandaloneWindow::~StandaloneWindow((StandaloneWindow *)this);
  return;
}
}
