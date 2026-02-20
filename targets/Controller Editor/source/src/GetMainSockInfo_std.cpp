#include <ni/controller_editor/GetMainSockInfo_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Server {

void GetMainSockInfo(std::string&, unsigned int&) const {
Socket::GetSockInfo((Socket *)(this + 8),param_1,param_2);
  return;
}
}
