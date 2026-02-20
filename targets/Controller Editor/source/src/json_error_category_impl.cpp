#include <ni/controller_editor/json_error_category_impl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::details {

json_error_category_impl::~json_error_category_impl() {
// std code
  delete(this);
  return;
}
}
