#pragma once
namespace NI::NHL2::SERVER {
class SleepModeClient {
public:
    virtual void enterSleepMode();
    virtual void leaveSleepMode();
    virtual ~SleepModeClient();
};
}
