#include <ni/controller_editor/Dialog_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Window<NI::UIA {

void Dialog>::Window() {
BackgroundDrawingCanvas *this_00;
  
  UIA::Dialog::Dialog((Dialog *)this);
  Pane::Pane((Pane *)(this + 0x30));
  *(void ***)this = &PTR__Window_101b0a8f0;
  *(void ***)(this + 0x30) = &PTR__Window_101b0a948;
  *(unsigned long long *)(this + 0x248) = 0;
  this_00 = (BackgroundDrawingCanvas *)new char[0xb8];
  BackgroundDrawingCanvas::BackgroundDrawingCanvas(this_00);
  *(BackgroundDrawingCanvas **)(this + 0x250) = this_00;
  *(unsigned long long *)(this + 600) = 0;
  *(unsigned long long *)(this + 0x260) = 0;
  *(unsigned long long *)(this + 0x268) = 0;
  *(unsigned long long *)(this + 0x270) = 0;
  *(unsigned int *)(this + 0x278) = 0;
  return;
}
}
