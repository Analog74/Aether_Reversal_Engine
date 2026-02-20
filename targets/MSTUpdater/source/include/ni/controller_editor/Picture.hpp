#pragma once
namespace NI::UIA {
class Picture {
public:
    virtual void drawLine(int, int, int, int, unsigned int);
    virtual void drawLineAA(float, float, float, float, unsigned int);
    virtual void drawLineH(int, int, int, unsigned int);
    virtual void drawLineUC(int, int, int, int, unsigned int);
    virtual void drawLineV(int, int, int, unsigned int);
    virtual void drawLineVUC(int, int, int, unsigned int);
    virtual void drawRectangle(int, int, int, int, unsigned int);
    virtual void fillArea(int, int, int, int, unsigned int);
    virtual void fillAreaUC(int, int, int, int, unsigned int);
    virtual void getAnimationHeight() const;
    virtual void getAnimationWidth() const;
    virtual void getUseLegacyAlphaCompositing() const;
    virtual void initEmptyAreaFlags();
    virtual void invertArea(int, int, int, int);
    Picture();
    virtual void reallocData(int, int, bool);
    virtual void resetClipRect();
    virtual void setPixelUC(int, int, unsigned int);
    virtual void setSize(int, int, bool);
    virtual void setUseLegacyAlphaCompositing(bool);
    virtual ~Picture();
};
}
