#pragma once
namespace NI::dawcontrol::hw::komplete_kontrol::mk2::pages {
class InstanceSelection {
public:
    virtual void scheduleSpeakInstance();
    virtual void speakPageMessage();
};
}
