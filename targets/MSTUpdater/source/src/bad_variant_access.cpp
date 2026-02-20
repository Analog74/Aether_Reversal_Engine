#include <ni/controller_editor/bad_variant_access.hpp>
namespace eggs::variants {

bad_variant_access::~bad_variant_access() {
// std code
  delete(this);
  return;
}
}
