#include <ni/controller_editor/USBDevice.hpp>
namespace NI::NHL2::USBDevice::statusAsString(NI::NHL2 {

void USBDevice::Status) {
if (param_1 < -0x1fffbfff) {
    switch(param_1 param_1) {
    }
  }
  else if (param_1 < -1) {
    switch(param_1 param_1) {
    }
  }
  else {
    if (param_1 == -1) {
      return "(Minus One: -1)";
    }
    if (param_1 == 0) {
      return "success";
    }
    if (param_1 == 0xbadbabe) {
      return "device not connected";
    }
  }
  return "unknown";
}
}
