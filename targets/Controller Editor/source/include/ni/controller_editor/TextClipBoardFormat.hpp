#pragma once
namespace NI::UIA {
class TextClipBoardFormat {
public:
    virtual void fixupReadData();
    virtual void getRawDataSize() const;
    TextClipBoardFormat();
    virtual ~TextClipBoardFormat();
};
}
