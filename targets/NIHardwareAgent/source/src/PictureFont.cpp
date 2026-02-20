#include <ni/controller_editor/PictureFont.hpp>
namespace NI::NHL2::KORE {

PictureFont::PictureFont() {
UIA::Picture::Picture((Picture *)this);
  ___bzero(this + 0x80,0x808);
  
}

PictureFont::~PictureFont() {
UIA::Picture::~Picture((Picture *)this);
  return;
}
}
