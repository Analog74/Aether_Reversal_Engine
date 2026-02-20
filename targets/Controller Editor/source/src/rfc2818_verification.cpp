#include <ni/controller_editor/rfc2818_verification.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::ssl {

void rfc2818_verification::match_pattern(char const*, unsigned long, char const*) {
char *pcVar1;
  char cVar2;
  __darwin_ct_rune_t _Var3;
  __darwin_ct_rune_t _Var4;
  char *pcVar5;
  
  if (param_2 != 0) {
    pcVar5 = param_1 + param_2;
    do {
      cVar2 = *param_3;
      if (cVar2 == '\0') {
        return false;
      }
      if (*param_1 == 0x2a) {
        while ((cVar2 != '\0' && (cVar2 != '.'))) {
          cVar2 = match_pattern(param_1 + 1,(long)pcVar5 - (long)(param_1 + 1),param_3);
          if (cVar2 != '\0') {
            return true;
          }
          pcVar1 = param_3 + 1;
          param_3 = param_3 + 1;
          cVar2 = *pcVar1;
        }
      }
      else {
        _Var3 = ___tolower((int)*param_1);
        _Var4 = ___tolower((int)*param_3);
        if (_Var3 != _Var4) {
          return false;
        }
        param_3 = param_3 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != pcVar5);
  }
  return *param_3 == '\0';
}
}
