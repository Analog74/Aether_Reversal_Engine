#pragma once
namespace NI::UIA {
class CursorManager {
public:
    virtual void destroyDefaultCursors();
    virtual void registerDefaultCursors();
    virtual void resetSystemCursor();
    virtual void setSystemCursor(void*);
};
}
