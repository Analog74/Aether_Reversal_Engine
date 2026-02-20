#include <ni/controller_editor/scoped_connection.hpp>
namespace nod {

scoped_connection::~scoped_connection() {
disconnect(this);
  if (*(long *)(this + 8) != 0) {
    // std code
    return;
  }
  return;
}
}
