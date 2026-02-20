#pragma once
namespace NI {
class IController {
public:
    virtual void getWidgetName() const;
    virtual void recalibrateJogwheelWithId(unsigned int) const;
};
}
