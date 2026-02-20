#pragma once
namespace NI::UIA::(anonymous namespace) {
class NOPDragDropDelegate {
public:
    virtual void registerDNDFormat(char const*) const;
    virtual ~NOPDragDropDelegate();
};
}
