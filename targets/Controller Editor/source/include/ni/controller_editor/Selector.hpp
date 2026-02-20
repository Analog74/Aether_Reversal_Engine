#pragma once
namespace NI::NWL {
class Selector {
public:
    virtual void getDebugString() const;
    virtual void getSourceFile() const;
    virtual void getSpecifity() const;
    virtual void getStartingLine() const;
};
}
