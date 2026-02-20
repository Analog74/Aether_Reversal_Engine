#pragma once
namespace NI::dawcontrol::mcu {
class KontrolS_MK2_MCU_Server {
public:
    virtual void findClientHandle() const;
    virtual void isConnectedToDaw() const;
    virtual void isEnabled() const;
    virtual void registerClient();
    virtual void removeClient();
    virtual ~KontrolS_MK2_MCU_Server();
};
}
