#include <ni/controller_editor/invalid_service_owner.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio {

invalid_service_owner::~invalid_service_owner() {
// std code
  delete(this);
  return;
}
}
