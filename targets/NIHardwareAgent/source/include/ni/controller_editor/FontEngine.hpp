#pragma once
namespace NI::UIA {
class FontEngine {
public:
    FontEngine();
    virtual void handle() const;
    virtual ~FontEngine();
};
}
