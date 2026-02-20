#pragma once
namespace ni::corefoundation::detail {
class ScopedCFTypeRef<__CFString const*> {
public:
    virtual void ~ScopedCFTypeRef();
};
}
