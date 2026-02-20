#pragma once
namespace NI::UIA {
class EventTimerManager {
public:
    EventTimerManager() [clone .cold.1];
    virtual void getMasterTimerTimeout() const;
    virtual void setMasterTimerTimeout(unsigned int);
    virtual ~EventTimerManager();
};
}
