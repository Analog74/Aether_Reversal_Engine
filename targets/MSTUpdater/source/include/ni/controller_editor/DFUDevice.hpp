#pragma once
namespace NI::NHL2 {
class DFUDevice {
public:
    virtual void getCustomImageVersion(unsigned char, unsigned int&);
    virtual void getDFUState(unsigned char&);
    virtual void queryDFUInfo();
    virtual void reconnectInDFUMode();
    virtual void returnToAPPMode();
    virtual void sendDFUAbort();
    virtual void sendDFUDetach();
    virtual void sendXMOSDFUResetFromDFU();
    virtual void sendXMOSDFUResetIntoDFU();
    virtual void writeCustom(unsigned char const*, unsigned int, unsigned char);
    virtual ~DFUDevice();
};
}
