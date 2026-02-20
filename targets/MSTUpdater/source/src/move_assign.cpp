#include <ni/controller_editor/move_assign.hpp>
namespace void eggs::variants::detail {

void move_assign::call<bool>(void*, void*) {
/* WARNING: Load size is inaccurate */
  *(unsigned char *)param_1 = *param_2;
  return;
}

void move_assign::call<float>(void*, void*) {
/* WARNING: Load size is inaccurate */
  *(unsigned int *)param_1 = *param_2;
  return;
}

void move_assign::call<int>(void*, void*) {
/* WARNING: Load size is inaccurate */
  *(unsigned int *)param_1 = *param_2;
  return;
}

void move_assign::call<unsigned int>(void*, void*) {
/* WARNING: Load size is inaccurate */
  *(unsigned int *)param_1 = *param_2;
  return;
}
}
