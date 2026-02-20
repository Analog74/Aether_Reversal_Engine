#include <ni/controller_editor/system_error.hpp>
namespace boost::system {

system_error::~system_error() {
// std code
  delete(this);
  return;
}
}
