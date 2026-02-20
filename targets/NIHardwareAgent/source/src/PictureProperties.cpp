#include <ni/controller_editor/PictureProperties.hpp>
namespace NI::UIA::Picture::writeTGA(NI::GP::Stream&, NI::UIA {

void PictureProperties::eOrientation) const {
ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x38);
  uVar2 = *(ushort *)(param_1 + 0x3c);
  GP::Stream::writeS8(param_2,0);
  GP::Stream::writeS8(param_2,0);
  GP::Stream::writeS8(param_2);
  GP::Stream::writeU16(param_2,0);
  GP::Stream::writeU16(param_2,0);
  GP::Stream::writeS8(param_2);
  GP::Stream::writeU16(param_2,0);
  GP::Stream::writeU16(param_2,0);
  GP::Stream::writeU16(param_2,uVar1);
  GP::Stream::writeU16(param_2,uVar2);
  GP::Stream::writeS8(param_2,0x20);
  GP::Stream::writeS8(param_2,0);
  iVar4 = *(int *)(param_1 + 0x38) << 2;
  uVar5 = *(uint *)(param_1 + 0x3c);
  if (0 < (int)uVar5) {
    lVar3 = *(long *)(param_1 + 0x30);
    lVar6 = (unsigned long)uVar5 + 1;
    do {
      uVar5 = uVar5 - 1;
      GP::Stream::writeRaw(param_2,(unsigned long)uVar5 * (long)iVar4 + lVar3);
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
    uVar5 = *(uint *)(param_1 + 0x3c);
    iVar4 = *(int *)(param_1 + 0x38) << 2;
  }
  return iVar4 * uVar5 + 0x12;
}
}
