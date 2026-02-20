#pragma once
namespace NI {
class ThreeEqualSectionsNavigationWidget {
public:
    virtual void drawSelectedSection(unsigned int);
    ThreeEqualSectionsNavigationWidget();
    virtual void updateSelectedSectionGraphically();
};
}
