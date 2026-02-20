#include <ni/controller_editor/QuartzStatics.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::DETAIL {

QuartzStatics::~QuartzStatics() {
if (*(long *)this != 0) {
    _CGColorSpaceRelease();
  }
  return;
}
}
