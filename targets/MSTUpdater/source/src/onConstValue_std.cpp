#include <ni/controller_editor/onConstValue_std.hpp>
namespace NI::NWL::StyleGrammar {

void onConstValue(std::string const&) {
StyleParser2::getConstValue((string *)this,(uint)*(unsigned long long *)(param_1 + 0xfe0));
  return this;
}
}
