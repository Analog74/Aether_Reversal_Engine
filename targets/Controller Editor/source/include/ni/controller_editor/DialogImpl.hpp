#pragma once
namespace NI::UIA::COCOA {
class DialogImpl {
public:
    virtual void abortModal();
    virtual void stopModal();
    virtual ~DialogImpl();
};
}
