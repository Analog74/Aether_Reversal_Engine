#include <ni/controller_editor/HIDController.hpp>
namespace NI::NHL2::SERVER {

HIDController::~HIDController() {
~HIDController(this);
  delete(this);
  return;
}
}
