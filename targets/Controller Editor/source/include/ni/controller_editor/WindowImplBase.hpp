#pragma once
namespace NI::UIA::COCOA {
class WindowImplBase {
public:
    virtual void activate();
    virtual void attachDCTo(CGContext*);
    virtual void detachDC();
    virtual void devicePixelRatio() const;
    virtual void getBackingScaleFactor() const;
    virtual void getLastMouseButtonDown() const;
    virtual void getPosition(bool) const;
    virtual void getSize(bool) const;
    virtual void hasViewMovedToWindowListener() const;
    virtual void idealSize();
    virtual void invalidate();
    virtual void isCocoa() const;
    virtual void isIdealSize() const;
    virtual void isMaximized() const;
    virtual void isMinimized() const;
    virtual void isNormalSize() const;
    virtual void isVisible() const;
    virtual void maximize();
    virtual void minimize();
    virtual void normalSize();
    virtual void onViewDestroyed();
    virtual void releaseKeyFocus();
    virtual void resetCursor();
    virtual void setCursor(void*);
    virtual void setKeyFocus();
    virtual void setModified(bool);
    virtual void setTitle(char const*);
    virtual void setTrackMouseGlobal(bool);
    virtual void startRelativeMouseMove();
    virtual void stopRelativeMouseMove();
    virtual void textInputResetMarkedRange();
    virtual void update();
    virtual ~WindowImplBase();
};
}
