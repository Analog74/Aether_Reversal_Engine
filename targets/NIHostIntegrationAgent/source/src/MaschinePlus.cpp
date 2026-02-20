#include <ni/controller_editor/MaschinePlus.hpp>
namespace non-virtual thunk to NI::dawcontrol::hw::maschine {

MaschinePlus::~MaschinePlus() {
MaschineBase<NI::NHL2::SERVER::MaschinePlus>::~MaschineBase
            ((MaschineBase<NI::NHL2::SERVER::MaschinePlus> *)(this + -0xc70));
  delete((MaschineBase<NI::NHL2::SERVER::MaschinePlus> *)(this + -0xc70));
  return;
}
}
