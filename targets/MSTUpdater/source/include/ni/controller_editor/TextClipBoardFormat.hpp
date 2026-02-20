#pragma once
namespace NI::UIA {
class TextClipBoardFormat {
public:
    virtual void fixupReadRawData();
    virtual void getRawDataSize() const;
    virtual void getValue() const;
    TextClipBoardFormat();
    virtual ~TextClipBoardFormat();
};
}
