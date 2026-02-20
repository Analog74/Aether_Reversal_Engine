#include <ni/controller_editor/BString_const___Bome.hpp>
namespace bmidilib::Manager::addPort(Bome::BString const&, Bome {

void BString const&, Bome::BString const&) {
int iVar1;
  Port *this_00;
  Bome local_48 [8];
  BString local_40 [8];
  BString local_38 [8];
  
  this_00 = (Port *)new(0x50);
  Port::Port(this_00,this);
  Bome::BString::operator=((BString *)(this_00 + 0x38),param_1);
  Bome::BString::BString(local_40,param_1);
  Bome::BString::format((char *)local_38,"%04d",(unsigned long)*(uint *)(this_00 + 8));
  Bome::operator+(local_48,local_40,local_38);
  Bome::BString::operator=((BString *)(this_00 + 0x30),(BString *)local_48);
  Bome::BString::~BString((BString *)local_48);
  Bome::BString::~BString(local_38);
  Bome::BString::~BString(local_40);
  Bome::BString::operator=((BString *)(this_00 + 0x40),param_2);
  Bome::BString::operator=((BString *)(this_00 + 0x48),param_3);
  Bome::BList<bmidilib::Port*>::makeRoom((BList<bmidilib::Port*> *)(this + 8));
  iVar1 = *(int *)(this + 0x18);
  *(int *)(this + 0x18) = iVar1 + 1;
  *(Port **)(*(long *)(this + 0x10) + (long)iVar1 * 8) = this_00;
  return this_00;
}
}
