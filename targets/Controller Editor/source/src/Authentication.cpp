#include <ni/controller_editor/Authentication.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void Authentication::isAuthenticationNeeded() {
return s_bProcessElevated == '\0';
}
}
