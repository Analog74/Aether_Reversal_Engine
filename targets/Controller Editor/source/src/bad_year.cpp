#include <ni/controller_editor/bad_year.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::gregorian {

bad_year::~bad_year() {
// std code
  delete(this);
  return;
}
}
