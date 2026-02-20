#include <ni/controller_editor/StdOutStream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

StdOutStream::~StdOutStream() {
delete(this);
  return;
}
}
