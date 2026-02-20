#pragma once
namespace NI::NHL2 {
class MsgDeviceConnect {
public:
    virtual void getInPortName() const;
    virtual void getOutPortName() const;
};
}
