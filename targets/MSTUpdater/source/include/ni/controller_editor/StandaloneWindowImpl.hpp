#pragma once
namespace NI::UIA::COCOA {
class StandaloneWindowImpl {
public:
    virtual void isFullScreenMode() const;
    virtual void resetFullScreenMode();
    virtual ~StandaloneWindowImpl();
};
}
