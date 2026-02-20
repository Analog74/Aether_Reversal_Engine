#include <ni/controller_editor/bad_month.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::gregorian {

bad_month::~bad_month() {
// std code
  delete(this);
  return;
}
}
