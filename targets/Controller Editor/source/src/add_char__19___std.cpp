#include <ni/controller_editor/add_char__19___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace void web::http::http_headers {

void add<char [19]>(std::string const&, char const (&) [19]) {
long lVar1;
  char *pcVar2;
  unsigned char *puVar3;
  string *local_40;
  details local_38;
  unsigned char uStack_37;
  void6 uStack_36;
  unsigned long long uStack_30;
  unsigned char *local_28;
  
  utility::conversions::details::print_string<char[19]>(&local_38,param_2);
  local_40 = param_1;
  lVar1 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)this,(piecewise_construct_t *)param_1,
                     (tuple *)&// std code
  if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
    if (1 < *(byte *)(lVar1 + 0x38)) {
      pcVar2 = (char *)// std code
      puVar3 = local_28;
      if (((byte)local_38 & 1) == 0) {
        puVar3 = &uStack_37;
      }
      // std code
      if (((byte)local_38 & 1) == 0) {
        return;
      }
      delete(local_28);
      return;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x40) != 0) return;
    delete(*(void **)(lVar1 + 0x48));
  }
  *(unsigned char **)(lVar1 + 0x48) = local_28;
  *(unsigned long *)(lVar1 + 0x38) = CONCAT62(uStack_36,CONCAT11(uStack_37,local_38));
  *(unsigned long long *)(lVar1 + 0x40) = uStack_30;
  return;
}
}
