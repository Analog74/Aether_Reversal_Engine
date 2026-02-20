#pragma once
namespace NI::UIA {
class JPGErrorManager {
public:
    virtual void errorExitHandler(jpeg_common_struct*);
};
}
