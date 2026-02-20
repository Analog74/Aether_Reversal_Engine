#include <ni/controller_editor/ExchangeData.hpp>
namespace NI::UIA {

ExchangeData::~ExchangeData() {
if (*(long *)this != 0) {
    _CFRelease();
  }
  return;
}
}
