#pragma once
namespace NI {
class IControllerWidget {
public:
    virtual void emitSwitchToAssignmentView();
    virtual void getAssignablePageElementsForPageSet(unsigned int, unsigned int);
    virtual void getAssignablePageMenuForPageSet(unsigned int, unsigned int);
    virtual ~IControllerWidget();
};
}
