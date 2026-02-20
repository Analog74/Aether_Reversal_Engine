#include <ni/controller_editor/IPCPort.hpp>
namespace NI::NHL2 {

IPCPort::~IPCPort() {
~IPCPort(this);
  delete(this);
  return;
}
}
