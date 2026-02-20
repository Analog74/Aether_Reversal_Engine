#pragma once
namespace NI::dawcontrol::hw::komplete_kontrol::mk2::pages {
class ServerPage {
public:
    virtual void modeControl() const;
    virtual void setUpProperties();
};
}
