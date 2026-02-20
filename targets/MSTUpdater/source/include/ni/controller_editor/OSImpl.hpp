#pragma once
namespace NI::NHL2::USBDeviceFactory {
class OSImpl {
public:
    virtual void onDeviceAdded(void*, unsigned int);
    virtual void onDeviceRemoved(void*, unsigned int);
};
}
