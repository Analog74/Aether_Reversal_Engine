#include <ni/controller_editor/ParameterHelper.hpp>
namespace NI::dawcontrol::hw::gui {

void ParameterHelper::screenButtonId(unsigned long) {
unsigned long *puVar1;
  void *puVar2;
  byte local_48 [16];
  void *local_38;
  unsigned long long local_30;
  unsigned long local_28;
  unsigned long uStack_20;
  void *local_18;
  
  // std code
  puVar2 = 0;
  if ((parameter::screen_button & 1) == 0) {
    puVar2 = &0;
  }
  puVar1 = (unsigned long *)// std code
  local_18 = (void *)puVar1[2];
  local_28 = *puVar1;
  uStack_20 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  ni::symbol::symbol((symbol *)&local_30,(string *)&local_28);
  if ((local_28 & 1) != 0) {
    delete(local_18);
  }
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  return local_30;
}

void ParameterHelper::screenEncoderId(unsigned long) {
unsigned long *puVar1;
  void *puVar2;
  byte local_48 [16];
  void *local_38;
  unsigned long long local_30;
  unsigned long local_28;
  unsigned long uStack_20;
  void *local_18;
  
  // std code
  puVar2 = 0;
  if ((parameter::screen_encoder & 1) == 0) {
    puVar2 = &0;
  }
  puVar1 = (unsigned long *)// std code
  local_18 = (void *)puVar1[2];
  local_28 = *puVar1;
  uStack_20 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  ni::symbol::symbol((symbol *)&local_30,(string *)&local_28);
  if ((local_28 & 1) != 0) {
    delete(local_18);
  }
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  return local_30;
}
}
