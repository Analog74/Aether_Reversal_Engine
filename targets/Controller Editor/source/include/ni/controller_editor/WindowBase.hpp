#pragma once
namespace NI::UIA {
class WindowBase {
public:
    virtual void getNSView() const;
    virtual void hasAlphaBlending() const;
    virtual void onImplDestroyed();
    virtual void setAutoDelete(bool);
    virtual void useOffscreenPictureInsteadOfPaintEvent() const;
    WindowBase();
    virtual ~WindowBase();
};
}
