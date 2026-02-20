#pragma once
namespace NI {
class RangeEdit {
public:
    virtual void onMaxValueChanged(int);
    virtual void onMinValueChanged(int);
    virtual ~RangeEdit();
};
}
