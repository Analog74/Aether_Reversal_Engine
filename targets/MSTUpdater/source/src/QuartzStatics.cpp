#include <ni/controller_editor/QuartzStatics.hpp>
namespace NI::UIA::DETAIL {

QuartzStatics::~QuartzStatics() {
if (*(long *)this != 0) {
    _CGColorSpaceRelease();
  }
  return;
}
}
