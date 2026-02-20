#include <ni/controller_editor/Keys.hpp>
namespace NI::UIA::DETAIL {

void Keys::macOSToUIA(unsigned int, unsigned int&) {
*param_2 = *(uint *)(&s_VKeyToUIAScan + (unsigned long)param_1 * 4);
  return (&s_VKeyToUIA)[param_1];
}
}
