#include <ni/controller_editor/std_category.hpp>
namespace boost::system::error_category {

std_category::~std_category() {
// std code
  delete(this);
  return;
}
}
