#include <ni/controller_editor/NSStringRef.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

NSStringRef::~NSStringRef() {
if (*(long *)this != 0) {
    (*(code *)PTR__objc_release_101ab46e0)();
  }
  return;
}
}
