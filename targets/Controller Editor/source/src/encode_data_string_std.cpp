#include <ni/controller_editor/encode_data_string_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::uri {

void encode_data_string(1 param_1, std::string const& {
string sVar1;
  string *psVar2;
  char cVar3;
  
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  sVar1 = *param_1;
  if (((byte)sVar1 & 1) == 0) {
    if ((byte)sVar1 >> 1 == 0) {
      return this;
    }
  }
  else if (*(long *)(param_1 + 8) == 0) {
    return this;
  }
  psVar2 = param_1 + 1;
  if (((byte)sVar1 & 1) != 0) {
    psVar2 = *(string **)(param_1 + 0x10);
  }
  do {
    while( true ) {
    }
  } while (psVar2 != param_1 + 1 + ((byte)*param_1 >> 1));
  return this;
}
}
