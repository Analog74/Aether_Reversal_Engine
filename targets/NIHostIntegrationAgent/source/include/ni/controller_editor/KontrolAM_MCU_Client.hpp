#pragma once
namespace NI::dawcontrol::mcu {
class KontrolAM_MCU_Client {
public:
    virtual void controller();
    virtual void getProperties();
    virtual void onDeviceAvailable(bool);
    virtual ~KontrolAM_MCU_Client();
};
}
