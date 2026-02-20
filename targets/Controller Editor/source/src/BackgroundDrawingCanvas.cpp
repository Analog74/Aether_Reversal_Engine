#include <ni/controller_editor/BackgroundDrawingCanvas.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

BackgroundDrawingCanvas::BackgroundDrawingCanvas() {
BackgroundDrawingCanvas(this);
  
}

void BackgroundDrawingCanvas::getOrigin() const {
float fVar1;
  unsigned long long uVar2;
  unsigned long uVar3;
  long lVar4;
  
  uVar2 = *(unsigned long long *)(this + 0x18);
  fVar1 = *(float *)(this + 0xb0);
  uVar3 = _lroundf((float)(int)uVar2 * (1.0 / fVar1));
  lVar4 = _lroundf((float)(int)((unsigned long)uVar2 >> 0x20) * (1.0 / fVar1));
  return lVar4 << 0x20 | uVar3 & 0xffffffff;
}

void BackgroundDrawingCanvas::getPicture() const {
return *(unsigned long long *)(this + 8);
}

void BackgroundDrawingCanvas::getRawData() const {
return *(unsigned long long *)(*(long *)(this + 8) + 0x30);
}

void BackgroundDrawingCanvas::resetClip() {
UIA::Picture::resetClipRect(*(Picture **)(this + 8));
  return;
}

void BackgroundDrawingCanvas::resetOrigin() {
*(unsigned long long *)(this + 0x18) = 0;
  UIA::Picture::setOrigin(*(Picture **)(this + 8),(Point *)(this + 0x10));
  return;
}

BackgroundDrawingCanvas::~BackgroundDrawingCanvas() {
*(void ***)this = &PTR__BackgroundDrawingCanvas_101b185e8;
  if ((this[0x20] != (BackgroundDrawingCanvas)0x0) && (*(long **)(this + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  UIA::Picture::~Picture((Picture *)(this + 0x30));
  delete(this);
  return;
}
}
