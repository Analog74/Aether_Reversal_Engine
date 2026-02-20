#include <ni/controller_editor/exception.hpp>
namespace NI::GP::Assertion {

exception::~exception() {
// std code
  delete(this);
  return;
}
}
