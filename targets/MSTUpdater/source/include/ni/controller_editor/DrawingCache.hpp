#pragma once
namespace NI::NWL {
class DrawingCache {
public:
    virtual void rebuildCache();
    virtual ~DrawingCache();
};
}
