#include <ni/controller_editor/entropy_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::uuids {

void entropy_error::errcode() const {
return *(unsigned long long *)(this + 0x10);
}

entropy_error::~entropy_error() {
// std code
  delete(this);
  return;
}
}
