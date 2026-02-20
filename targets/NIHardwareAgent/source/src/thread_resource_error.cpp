#include <ni/controller_editor/thread_resource_error.hpp>
namespace boost {

thread_resource_error::~thread_resource_error() {
// std code
  delete(this);
  return;
}
}
