#pragma once
namespace NI::GP {
class GetTextLoader {
public:
    virtual void getLoadedText(char const*);
    virtual void getLocale();
    virtual void initLocale(char const*);
    virtual void loadLocaleDomain(char const*, char const*);
};
}
