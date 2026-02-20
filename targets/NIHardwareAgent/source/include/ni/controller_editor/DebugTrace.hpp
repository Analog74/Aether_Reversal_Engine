#pragma once
namespace NI::GP {
class DebugTrace {
public:
    virtual void clearGroupFilter();
    virtual void isGroupEnabled(char const*);
};
}
