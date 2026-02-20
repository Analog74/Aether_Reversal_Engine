#include <ni/controller_editor/MessageReceivePort.hpp>
namespace NI::NHL2 {

MessageReceivePort::~MessageReceivePort() {
~MessageReceivePort(this);
  delete(this);
  return;
}
}
