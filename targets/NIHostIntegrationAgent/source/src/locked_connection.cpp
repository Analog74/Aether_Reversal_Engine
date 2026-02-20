#include <ni/controller_editor/locked_connection.hpp>
namespace NI::dawcontrol {

locked_connection::~locked_connection() {
if (*(long *)(this + 0x18) != 0) {
    // std code
  }
  if (*(long *)(this + 8) != 0) {
    // std code
    return;
  }
  return;
}
}
