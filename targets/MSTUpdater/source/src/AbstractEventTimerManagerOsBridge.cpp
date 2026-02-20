#include <ni/controller_editor/AbstractEventTimerManagerOsBridge.hpp>
namespace NI::UIA {

void AbstractEventTimerManagerOsBridge::notifySubscribers() {
EventTimerManager::notifySubscribers(*(EventTimerManager **)(this + 8));
  return;
}

AbstractEventTimerManagerOsBridge::~AbstractEventTimerManagerOsBridge() {
delete(this);
  return;
}
}
