#pragma once
namespace NI::GP {
class Timer {
public:
    virtual void convertTicksToMS(unsigned long long);
    virtual void getCurrentTicks();
};
}
