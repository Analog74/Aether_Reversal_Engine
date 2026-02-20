#pragma once
namespace NI::NWL::DETAIL {
class MultilineTextEditContentArea {
public:
    virtual void copyToClipboard() const;
    virtual void deleteSelectedTextNoSignalChange();
    virtual void getCursRectInPixel() const;
    virtual void moveCursorHorizontally(int, bool);
    virtual void moveCursorVertically(int, bool);
    MultilineTextEditContentArea();
    virtual void registerDragDropIntegration() [clone .cold.3];
    virtual void updateLineBreaks();
};
}
