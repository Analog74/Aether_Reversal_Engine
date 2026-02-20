#pragma once
namespace NI::NWL {
class ManagerContainer {
public:
    virtual void getDefaultFontData() const [clone .cold.1];
    virtual void getResourcesLocation() const;
    virtual void getStyleSheetManager();
    ManagerContainer();
    virtual void reloadPictures(float);
    virtual ~ManagerContainer();
};
}
