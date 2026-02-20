#pragma once
namespace NI::GP {
class VolumeManager {
public:
    virtual void getNumVolumes();
    virtual void rescanInternal();
};
}
