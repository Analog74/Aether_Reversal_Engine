#pragma once
namespace NI::NHL2::SERVER {
class USBController {
public:
    virtual void disconnectDevice();
    virtual ~USBController();
};
}
