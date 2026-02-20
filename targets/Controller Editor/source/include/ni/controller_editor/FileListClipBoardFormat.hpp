#pragma once
namespace NI::UIA {
class FileListClipBoardFormat {
public:
    virtual void addItemFromDataBytes(void const*, unsigned long);
    virtual void canAddItemsFromDataBytes() const;
    FileListClipBoardFormat();
    virtual void reserveItems(unsigned long);
    virtual void supportsMultipleItems() const;
    virtual ~FileListClipBoardFormat();
};
}
