#pragma once
namespace NI::dawcontrol::hw::komplete_kontrol::mk2 {
class KKS2HardwarePageManager {
public:
    virtual void speakCurrentPageMessage();
    virtual void updateMidiSettings();
};
}
