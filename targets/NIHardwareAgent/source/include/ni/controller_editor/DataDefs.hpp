#pragma once
namespace NI::NHL2::Display {
class DataDefs {
public:
    virtual void areScreenshotsEnabled();
    virtual void getBarValueForMidi(int, bool);
};
}
