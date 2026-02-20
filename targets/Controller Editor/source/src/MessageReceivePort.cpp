#include <ni/controller_editor/MessageReceivePort.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

MessageReceivePort::~MessageReceivePort() {
~MessageReceivePort(this);
  delete(this);
  return;
}
}
