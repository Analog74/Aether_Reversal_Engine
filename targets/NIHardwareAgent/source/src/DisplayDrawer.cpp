#include <ni/controller_editor/DisplayDrawer.hpp>
namespace NI::NHL2::MaschineStudio {

void DisplayDrawer::renderBackground(unsigned int) {
UIA::Picture::fillArea((Picture *)(this + 0x3c8),0,0,0x1e0,param_1,0xff000000);
  UIA::Picture::fillArea((Picture *)(this + 0x3c8),0,param_1,0x1e0,0x110 - param_1,0xff131313);
  UIA::Picture::fillArea((Picture *)(this + 0x448),0,0,0x1e0,param_1,0xff000000);
  UIA::Picture::fillArea((Picture *)(this + 0x448),0,param_1,0x1e0,0x110 - param_1,0xff131313);
  return;
}
}
