#pragma once
namespace anyrpc {
class Reader {
public:
    virtual void IsWhiteSpace(char);
    virtual ~Reader();
};
}
