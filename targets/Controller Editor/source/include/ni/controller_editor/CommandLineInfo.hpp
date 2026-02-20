#pragma once
namespace NI::UIA::CLI {
class CommandLineInfo {
public:
    CommandLineInfo();
    virtual void parseParam(char const*, bool, bool);
    virtual ~CommandLineInfo();
};
}
