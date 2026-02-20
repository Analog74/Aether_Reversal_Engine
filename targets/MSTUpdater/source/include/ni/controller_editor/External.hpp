#pragma once
namespace NI::UIA {
class External {
public:
    virtual void openPreprocessedURL(char const*);
    virtual void openURL(char const*);
};
}
