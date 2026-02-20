#include <ni/controller_editor/cubase.hpp>
namespace NI::dawcontrol::cubase::CubaseClient::setPan(unsigned long, NI::dawcontrol {

void cubase::Direction) {
MIDIDevice *pMVar1;
  uchar uVar2;
  
  pMVar1 = (MIDIDevice *)(**(code **)(**(long **)(this + 0x100) + 0x28))();
  uVar2 = '\x7f';
  if (param_3 == 0) {
    uVar2 = '\x01';
  }
  util::sendMIDICommand(pMVar1,param_2 + 'P',uVar2,'\x0f');
  return;
}
}
