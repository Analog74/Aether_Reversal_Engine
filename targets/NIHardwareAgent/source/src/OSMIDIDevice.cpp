#include <ni/controller_editor/OSMIDIDevice.hpp>
namespace NI::NHL2::SERVER {

OSMIDIDevice::~OSMIDIDevice() {
~OSMIDIDevice(this);
  delete(this);
  return;
}
}
