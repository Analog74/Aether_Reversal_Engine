#pragma once
namespace NI::NHL2 {
class HIDDevice {
public:
    HIDDevice();
    virtual void subscribeToInputReports(bool);
    virtual void unsubscribeFromInputReports();
    virtual ~HIDDevice();
};
}
