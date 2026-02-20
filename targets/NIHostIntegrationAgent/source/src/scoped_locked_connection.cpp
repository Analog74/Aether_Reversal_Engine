#include <ni/controller_editor/scoped_locked_connection.hpp>
namespace NI::dawcontrol {

scoped_locked_connection::~scoped_locked_connection() {
disconnect(this);
  nod::scoped_connection::disconnect((scoped_connection *)(this + 0x10));
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
