#include <ni/controller_editor/MixerKKS2.hpp>
namespace NI::dawcontrol::generic_daw::pages {

MixerKKS2::~MixerKKS2() {
hw::komplete_kontrol::mk2::KKS2HardwarePage::~KKS2HardwarePage((KKS2HardwarePage *)this);
  delete(this);
  return;
}
}
