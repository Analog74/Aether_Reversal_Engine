#include <ni/controller_editor/CGImageProvider.hpp>
namespace NI::UIA::DETAIL {

CGImageProvider::~CGImageProvider() {
_CGImageRelease(*(unsigned long long *)(this + 0x10));
  _CGDataProviderRelease(*(unsigned long long *)(this + 8));
  return;
}
}
