#include <ni/controller_editor/LogicServer.hpp>
namespace NI::dawcontrol::logic {

LogicServer::~LogicServer() {
~LogicServer(this);
  delete(this);
  return;
}
}
