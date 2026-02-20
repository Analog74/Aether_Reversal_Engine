#include <ni/controller_editor/NHL2.hpp>
namespace NI::NHL2::FX2Device::writeConfiguration(NI {

void NHL2::FX2DeviceConfiguration const&) {
int iVar1;
  unsigned long long local_10;
  
  local_10 = 0x20;
  iVar1 = _IOConnectCallMethod
                    (*(unsigned int *)(*(long *)(this + 0x70) + 0x6c),10,&local_10,1,param_1,0x20,0,0,
                     0,0);
  return iVar1 == 0;
}
}
