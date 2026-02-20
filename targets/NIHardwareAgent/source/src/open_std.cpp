#include <ni/controller_editor/open_std.hpp>
namespace NI::GP::Registry2::tKey {

void open(std::string const&, unsigned int) {
DETAIL::Registry2KeyCF::open((Registry2KeyCF *)this,param_1,param_2);
  return;
}
}
