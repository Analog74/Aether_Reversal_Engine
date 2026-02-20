#pragma once
namespace NI {
class IListSupport {
public:
    virtual void checkActivatePagesScrollbar();
    virtual void onPagesScrollbarChange() [clone .cold.2];
    virtual ~IListSupport();
};
}
