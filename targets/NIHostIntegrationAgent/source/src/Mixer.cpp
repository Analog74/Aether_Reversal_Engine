#include <ni/controller_editor/Mixer.hpp>
namespace NI::dawcontrol::cubase::pages {

Mixer::~Mixer() {
hw::komplete_kontrol::mk2::KKS2HardwarePage::~KKS2HardwarePage((KKS2HardwarePage *)this);
  delete(this);
  return;
}
}
