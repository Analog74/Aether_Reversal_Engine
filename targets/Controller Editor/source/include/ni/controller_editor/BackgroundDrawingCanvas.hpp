#pragma once
namespace NI::NWL {
class BackgroundDrawingCanvas {
public:
    BackgroundDrawingCanvas();
    virtual void getOrigin() const;
    virtual void getPicture() const;
    virtual void getRawData() const;
    virtual void resetClip();
    virtual void resetOrigin();
    virtual ~BackgroundDrawingCanvas();
};
}
