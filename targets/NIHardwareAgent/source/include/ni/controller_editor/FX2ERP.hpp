#pragma once
namespace NI::NHL2::SERVER {
class FX2ERP {
public:
    virtual void hasChanged(unsigned char, unsigned char);
    virtual void setERPPeaks(short, short);
    virtual void setResolution(unsigned int);
    virtual void setTouchSensitivity(float);
    virtual void setTouchThresholdUC(unsigned char);
    virtual ~FX2ERP();
};
}
