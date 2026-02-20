#include <ni/controller_editor/setFull_std.hpp>
namespace NI::GP::FileName {

void setFull(std::string const&) {
*(unsigned int *)(this + 0x98) = 0;
  // std code
  init(this,true);
  return;
}
}
