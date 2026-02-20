#include <ni/controller_editor/FormatSpec.hpp>
namespace fmt {

void FormatSpec::flag(unsigned int) const {
return (*(uint *)(this + 0xc) & param_1) != 0;
}
}
