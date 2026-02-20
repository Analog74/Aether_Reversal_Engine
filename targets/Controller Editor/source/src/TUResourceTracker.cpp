#include <ni/controller_editor/TUResourceTracker.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::DETAIL {

TUResourceTracker::~TUResourceTracker() {
delete(this);
  return;
}
}
