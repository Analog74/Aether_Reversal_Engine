#include <ni/controller_editor/clone_base.hpp>
namespace boost::exception_detail {

clone_base::~clone_base() {
delete(this);
  return;
}
}
