#include <ni/controller_editor/renderHeading_std.hpp>
namespace NI::NHL2::KORE::DisplayDrawer {

void renderHeading(std::string const&) {
unsigned int local_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  local_28 = 2;
  uStack_24 = 0;
  uStack_20 = 0x82;
  uStack_1c = 0xc;
  PictureFont::renderText
            ((PictureFont *)&s_font,(Picture *)(this + 8),&local_28,param_1,0xffffffff,0x1000);
  UIA::Picture::invertAreaUC((Picture *)(this + 8),0,0,0x80,0xc);
  return;
}
}
