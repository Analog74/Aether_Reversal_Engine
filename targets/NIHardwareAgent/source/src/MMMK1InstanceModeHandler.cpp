#include <ni/controller_editor/MMMK1InstanceModeHandler.hpp>
namespace NI::NHL2::SERVER {

MMMK1InstanceModeHandler::~MMMK1InstanceModeHandler() {
MaschineMikro::DisplayDrawer::~DisplayDrawer((DisplayDrawer *)(this + 0x7600));
  InstanceModeClient::UpdateThread::~UpdateThread((UpdateThread *)this);
  delete(this);
  return;
}
}
