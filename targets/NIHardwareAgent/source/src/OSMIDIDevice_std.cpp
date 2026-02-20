#include <ni/controller_editor/OSMIDIDevice_std.hpp>
namespace NI::NHL2::SERVER::OSMIDIDevice {

void OSMIDIDevice(std::string const&, bool) {
OSImpl *this_00;
  
  *(unsigned long long *)(this + 0x30) = 0;
  this[0x40] = (OSMIDIDevice)0x0;
  *(void ***)this = &PTR__OSMIDIDevice_1009d8698;
  this_00 = (OSImpl *)new(0x18);
  OSImpl::OSImpl(this_00,this,param_1,param_2);
  *(OSImpl **)(this + 0x48) = this_00;
  return;
}
}
