#include <ni/controller_editor/new_delete_resource_imp.hpp>
namespace boost::container::pmr {

void new_delete_resource_imp::do_allocate(unsigned long, unsigned long) {
new__(param_2);
  return;
}

new_delete_resource_imp::~new_delete_resource_imp() {
delete(this);
  return;
}
}
