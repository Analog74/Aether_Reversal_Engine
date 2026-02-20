#include <ni/controller_editor/ControllerCallback.hpp>
namespace NI::NHL2 {

void ControllerCallback::onEncoderEvent(unsigned int, int) {
return 0;
}

void ControllerCallback::onPedalEvent(unsigned int, float) {
return 0;
}

void ControllerCallback::onPotiEvent(unsigned int, float) {
return 0;
}

void ControllerCallback::onSwitchEvent(unsigned int, bool) {
return 0;
}

void ControllerCallback::onUpdateStates() {
return;
}
}
