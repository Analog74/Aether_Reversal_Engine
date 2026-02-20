#include <ni/controller_editor/USB.hpp>
namespace NI::NHL2::USB::Descriptor::getNext(NI::NHL2 {

void USB::DescriptorHeader const*, unsigned int&) {
DescriptorHeader DVar1;
  uint uVar2;
  uint uVar3;
  unsigned long uVar4;
  
  if (param_1 != (DescriptorHeader *)0x0) {
    DVar1 = *param_1;
    uVar4 = (unsigned long)(byte)DVar1;
    uVar2 = *param_2;
    if ((DVar1 != (DescriptorHeader)0x0) && (uVar3 = uVar2 - (byte)DVar1, (byte)DVar1 <= uVar2)) {
      *param_2 = uVar3;
      if (uVar3 == 0) {
        return (DescriptorHeader *)0x0;
      }
      if ((byte)param_1[uVar4] <= uVar3) {
        return param_1 + uVar4;
      }
      _printf("invalid descriptor size: pNext->bLength = %d, uRemainingSize = %d\n",
              (unsigned long)(uint)(byte)param_1[uVar4]);
      *param_2 = 0;
      return (DescriptorHeader *)0x0;
    }
    _printf("invalid descriptor size: pStart->bLength = %d, uRemainingSize = %d\n",uVar4,
            (unsigned long)uVar2);
  }
  return (DescriptorHeader *)0x0;
}
}
