#pragma once
namespace ni::uret {
class EventQueueManager {
public:
    virtual void clearQueueAndPrepareCache();
    virtual void pop(unsigned long) [clone .cold.1];
    virtual void restoreCache();
    virtual void storeCache();
    virtual ~EventQueueManager();
};
}
