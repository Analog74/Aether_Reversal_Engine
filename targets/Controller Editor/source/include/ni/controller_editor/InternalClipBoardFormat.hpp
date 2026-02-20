#pragma once
namespace NI::UIA {
class InternalClipBoardFormat {
public:
    virtual void FormatHandle();
    virtual void readRawData(void const*, unsigned long);
    virtual void writeRawData(void*) const;
    virtual ~InternalClipBoardFormat();
};
}
