#pragma once
namespace NI::NWL {
class PanelDrawer {
public:
    virtual void setPaletteColorIndex(unsigned long);
    virtual ~PanelDrawer();
};
}
