#pragma once
namespace NI::NHL2::SERVER::InstanceModeClient {
class UpdateThread {
public:
    virtual void onInstancesUpdated();
    virtual void updateInstances();
    virtual ~UpdateThread();
};
}
