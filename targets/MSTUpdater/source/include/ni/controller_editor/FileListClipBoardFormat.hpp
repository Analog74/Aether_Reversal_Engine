#pragma once
namespace NI::UIA {
class FileListClipBoardFormat {
public:
    virtual void addRawData(unsigned char const*, long);
    virtual void canHoldMultipleItems() const;
    virtual ~FileListClipBoardFormat();
};
}
