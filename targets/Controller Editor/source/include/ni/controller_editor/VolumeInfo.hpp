#pragma once
namespace NI::GP {
class VolumeInfo {
public:
    virtual void getFreeSpace() const;
    virtual void getFreeSpaceInBytes() const;
    virtual void getTotalSpace() const;
    virtual void getTotalSpaceInBytes() const;
};
}
