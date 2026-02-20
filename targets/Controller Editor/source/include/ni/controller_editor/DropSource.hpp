#pragma once
namespace NI::UIA {
class DropSource {
public:
    DropSource();
    virtual void setDragStartTimeout(unsigned int);
    virtual ~DropSource();
};
}
