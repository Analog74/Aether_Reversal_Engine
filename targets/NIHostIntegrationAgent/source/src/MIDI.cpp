#include <ni/controller_editor/MIDI.hpp>
namespace NI::dawcontrol::mcu::KontrolAM_MCU_Client::processMidiEvent(NI::NHL2 {

void MIDI::Event const&) {
universal_packet local_20 [16];
  
  local_20 = (universal_packet  [16])util::NHLMidiConverter::from_nhl(param_1,'\0');
  MCUStateConverter::processMidiEvent((MCUStateConverter *)(this + 0x120),local_20);
  return;
}
}
