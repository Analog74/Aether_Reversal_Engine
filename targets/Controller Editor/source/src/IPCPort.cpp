#include <ni/controller_editor/IPCPort.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

IPCPort::~IPCPort() {
~IPCPort(this);
  delete(this);
  return;
}
}
