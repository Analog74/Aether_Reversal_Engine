#pragma once
namespace NI::NHL2 {
class AnalogControlHandler {
public:
    virtual void queryValues();
    virtual ~AnalogControlHandler();
};
}
