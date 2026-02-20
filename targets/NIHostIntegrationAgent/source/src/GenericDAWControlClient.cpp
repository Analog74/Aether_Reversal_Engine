#include <ni/controller_editor/GenericDAWControlClient.hpp>
namespace NI::dawcontrol::generic_daw {

GenericDAWControlClient::~GenericDAWControlClient() {
long *plVar1;
  
  plVar1 = *(long **)(this + 0x128);
  *(unsigned long long *)(this + 0x128) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x120);
  *(unsigned long long *)(this + 0x120) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  DAWControlClient::~DAWControlClient((DAWControlClient *)this);
  delete(this);
  return;
}
}
