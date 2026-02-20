#include <ni/controller_editor/InstanceModeClient.hpp>
namespace NI::NHL2::SERVER {

void InstanceModeClient::activate() {
UpdateThread::updateInstances(*(UpdateThread **)(this + 0x78));
  (**(code **)(**(long **)(this + 0x78) + 0x10))();
  ControllerUpdateThread::invalidateDisplays(*(ControllerUpdateThread **)(this + 0x78),0);
  ControllerUpdateThread::performPendingUpdates(*(ControllerUpdateThread **)(this + 0x78));
  return;
}

void InstanceModeClient::deactivate() {
/* WARNING: Could not recover jumptable at 0x000100082e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x78) + 0x10))(*(long **)(this + 0x78),0);
  return;
}

InstanceModeClient::~InstanceModeClient() {
~InstanceModeClient(this);
  delete(this);
  return;
}
}
