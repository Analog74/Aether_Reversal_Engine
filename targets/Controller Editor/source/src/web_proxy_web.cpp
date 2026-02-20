#include <ni/controller_editor/web_proxy_web.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::web_proxy {

void web_proxy(1 param_1, web::web_proxy const& {
// std code
  web::details::uri_components::uri_components
            ((uri_components *)(this + 0x18),(uri_components *)(param_1 + 0x18));
  *(unsigned int *)(this + 0xb0) = *(unsigned int *)(param_1 + 0xb0);
  // std code
  // std code
  return;
}
}
