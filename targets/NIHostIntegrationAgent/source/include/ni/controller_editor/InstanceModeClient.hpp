#pragma once
namespace NI::dawcontrol::hw::komplete_kontrol::mk2 {
class InstanceModeClient {
public:
    virtual void instances() const;
    virtual void updateInstances();
};
}
