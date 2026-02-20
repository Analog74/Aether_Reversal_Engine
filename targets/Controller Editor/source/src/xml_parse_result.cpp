#include <ni/controller_editor/xml_parse_result.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pugi {

xml_parse_result::operator bool() const {
return *(int *)this == 0;
}
}
