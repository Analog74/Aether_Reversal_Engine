#pragma once
namespace NI::dawcontrol::hw::komplete_kontrol::mk2::pages {
class MidiControl {
public:
    virtual void onPageFocus(bool);
    virtual void setUpParameters();
    virtual void updateLEDs();
};
}
