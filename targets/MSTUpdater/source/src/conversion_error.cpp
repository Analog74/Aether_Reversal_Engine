#include <ni/controller_editor/conversion_error.hpp>
namespace boost::locale::conv {

conversion_error::~conversion_error() {
// std code
  delete(this);
  return;
}
}
