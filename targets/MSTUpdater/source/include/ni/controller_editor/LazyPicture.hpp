#pragma once
namespace NI::NWL {
class LazyPicture {
public:
    virtual void resolve(float) const;
    virtual ~LazyPicture();
};
}
