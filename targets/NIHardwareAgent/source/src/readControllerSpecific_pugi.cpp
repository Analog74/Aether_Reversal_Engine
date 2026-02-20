#include <ni/controller_editor/readControllerSpecific_pugi.hpp>
namespace NI::NHL2::MapHandlerUT {

void readControllerSpecific(pugi::xml_node const&) {
unsigned int uVar1;
  
  MapHandlerUpdateThread::readDisplayState(*(MapHandlerUpdateThread **)(this + 0x248),param_1);
  uVar1 = *(unsigned int *)(*(long *)(this + 0x248) + 0x44);
  *(unsigned int *)(this + 600) = uVar1;
  *(unsigned int *)(this + 0x254) = uVar1;
  *(unsigned int *)(this + 0x250) = uVar1;
  return;
}
}
