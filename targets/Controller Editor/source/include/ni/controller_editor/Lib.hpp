#pragma once
namespace NI::NWL {
class Lib {
public:
    virtual void getAllowHideCursorMode();
    virtual void getSearchSkinDirectory();
    virtual void isFontHintingEnabled();
    virtual void isSetUseLegacyAlphaCompositing();
    virtual void setSearchSkinDirectory(bool);
};
}
