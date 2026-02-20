#pragma once
namespace NI::NHL2 {
class MotorJogwheelControl {
public:
    virtual void getJogwheelTension() const;
    virtual void getState(unsigned char const*);
    virtual void initParameters(float);
    MotorJogwheelControl(float) [clone .cold.2];
    virtual void processLedRing(unsigned int, float);
    virtual void setJogwheelAdjustmentOn(unsigned int, bool);
    virtual void setJogwheelDefaultSpeedRPM(unsigned int, float);
    virtual void setJogwheelHapticTicks(unsigned int, unsigned int);
    virtual void setJogwheelLedColor(unsigned int, unsigned int);
    virtual void setJogwheelMotorOn(unsigned int, bool);
    virtual void setJogwheelSpeedRPM(unsigned int, float);
    virtual void setJogwheelTimelineActive(unsigned int, bool);
    virtual void setJogwheelTimelinePlaying(unsigned int, bool);
    virtual void setJogwheelTimelinePosition(unsigned int, float);
    virtual void setJogwheelTimelineSyncFactor(unsigned int, float);
    virtual void triggerJogwheelTurntableMotorOffEmulation(unsigned int);
    virtual ~MotorJogwheelControl();
};
}
