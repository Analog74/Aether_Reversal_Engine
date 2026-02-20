#pragma once
namespace NI::NHL2 {
class IMapTemplateAndPagesSupport {
public:
    virtual void checkAndResetMapModificationState() const;
    virtual void needsMapSaving() const;
};
}
