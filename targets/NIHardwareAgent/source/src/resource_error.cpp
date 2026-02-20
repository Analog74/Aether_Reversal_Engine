#include <ni/controller_editor/resource_error.hpp>
namespace boost::sync {

resource_error::~resource_error() {
// std code
  delete(this);
  return;
}
}
