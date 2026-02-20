#pragma once
namespace NI {
class MixpanelTracker {
public:
    virtual void attachToModelEditingCallbacks(bool);
    virtual void clearPendingEvents();
    virtual void loadPendingEventsFromLocalStorage(bool);
    virtual void numRequiredMappingOperations(bool);
    virtual void savePendingEventsToLocalStorage(bool);
    virtual void syncLocallyStoredDevices(bool);
    virtual void syncWithMixpanel();
    virtual ~MixpanelTracker();
};
}
