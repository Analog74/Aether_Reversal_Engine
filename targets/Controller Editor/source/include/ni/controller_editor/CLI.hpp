#pragma once
namespace NI::UIA {
class CLI {
public:
    virtual void parseCommandLineArguments(int, char**);
    virtual void setCommandLineArguments(int, char**);
};
}
