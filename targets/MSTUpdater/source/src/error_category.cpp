#include <ni/controller_editor/error_category.hpp>
namespace boost::system {

void error_category::default_error_condition(int) const {
unsigned char auVar1 [16];
  
  auVar1._4_4_ = 0;
  auVar1._0_4_ = param_1;
  auVar1._8_8_ = this;
  return auVar1;
}

error_category::~error_category() {
*(void ***)this = &PTR__error_category_10023ac38;
  // std code
  delete(this);
  return;
}
}
