#pragma once
namespace NI::NWL::DETAIL {
class RelativeMouseDrag {
public:
    virtual void isCaptured() const;
    virtual void onRelease();
    virtual void setFineSensitivityFactor(double);
    virtual void setHideCursorMode(bool);
    virtual void setSensitivity(double);
    virtual ~RelativeMouseDrag();
};
}
