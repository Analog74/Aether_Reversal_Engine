#pragma once
namespace NI::UIA {
class External {
public:
    virtual void launchApplication(char const*, char const*);
    virtual void openPreprocessedURL(char const*);
    virtual void openURL(char const*);
};
}
