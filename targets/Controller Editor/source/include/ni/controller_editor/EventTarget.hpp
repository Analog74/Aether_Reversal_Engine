#pragma once
namespace NI::UIA {
class EventTarget {
public:
    EventTarget();
    virtual void setEventTimer(int, int);
    virtual ~EventTarget();
};
}
