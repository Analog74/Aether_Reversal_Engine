#include <ni/controller_editor/Authentication.hpp>
namespace NI::GP {

void Authentication::isAuthenticationNeeded() {
return s_bProcessElevated == '\0';
}
}
