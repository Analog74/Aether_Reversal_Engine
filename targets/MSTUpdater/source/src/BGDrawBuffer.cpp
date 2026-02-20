#include <ni/controller_editor/BGDrawBuffer.hpp>
namespace NI::NWL::BackgroundDrawingCanvas {

BGDrawBuffer::~BGDrawBuffer() {
UIA::Picture::~Picture((Picture *)this);
  delete(this);
  return;
}
}
