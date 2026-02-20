#pragma once
namespace NI {
class TraktorKontrolS4Controller {
public:
    virtual void checkJogwheelCalibrationState(unsigned int) const;
    virtual void recalibrateJogwheel(unsigned int) const;
    virtual ~TraktorKontrolS4Controller();
};
}
