#include <ni/controller_editor/ScopedCFTypeRef___CFString_const__.hpp>
namespace ni::corefoundation::detail {

void ScopedCFTypeRef<__CFString const*>::~ScopedCFTypeRef() {
if (*(long *)this != 0) {
    _CFRelease();
  }
  return;
}
}
