#include <ni/controller_editor/IPCReceivePort.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

IPCReceivePort::~IPCReceivePort() {
~IPCReceivePort(this);
  delete(this);
  return;
}
}
