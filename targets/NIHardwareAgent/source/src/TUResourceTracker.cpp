#include <ni/controller_editor/TUResourceTracker.hpp>
namespace NI::GP::DETAIL {

TUResourceTracker::~TUResourceTracker() {
delete(this);
  return;
}
}
