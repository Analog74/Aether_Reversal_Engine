#pragma once
namespace NI::NHL2 {
class IMapDeviceSectionSupport {
public:
    virtual void getOtherSectionNeedsUpdate() const;
    virtual void selectDeviceSection(unsigned int);
    virtual void setOtherSectionNeedsUpdate(bool);
};
}
