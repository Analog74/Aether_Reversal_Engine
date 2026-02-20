#pragma once
namespace NI {
class IAsynchronousEventNotifier {
public:
    virtual void anyCapacitiveTouchChanged(bool) [clone .cold.1];
    virtual void assignmentChanged() [clone .cold.1];
    virtual void controllerTouched(unsigned int) [clone .cold.1];
    virtual void deviceChanged(bool) [clone .cold.1];
    virtual void deviceConflict() [clone .cold.1];
    virtual void focusChanged(bool) [clone .cold.1];
    virtual void midiActivity(unsigned int, unsigned int) [clone .cold.1];
    virtual void selectedPageChanged(unsigned int, bool) [clone .cold.1];
    virtual ~IAsynchronousEventNotifier();
};
}
