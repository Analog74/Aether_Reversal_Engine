#include <ni/controller_editor/MMMK2InstanceModeHandler.hpp>
namespace NI::NHL2::SERVER {

MMMK2InstanceModeHandler::~MMMK2InstanceModeHandler() {
MaschineMikro::DisplayDrawer::~DisplayDrawer((DisplayDrawer *)(this + 0x7600));
  InstanceModeClient::UpdateThread::~UpdateThread((UpdateThread *)this);
  delete(this);
  return;
}
}
