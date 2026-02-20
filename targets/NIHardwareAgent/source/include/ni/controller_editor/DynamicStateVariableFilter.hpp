#pragma once
namespace NI::DSP {
class DynamicStateVariableFilter {
public:
    DynamicStateVariableFilter();
    virtual void processLP(float);
    virtual void setFreqViaMapping(float);
};
}
