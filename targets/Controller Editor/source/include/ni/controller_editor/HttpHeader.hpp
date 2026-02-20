#pragma once
namespace anyrpc::internal {
class HttpHeader {
public:
    HttpHeader();
    virtual void Initialize();
    virtual void ProcessHeaderData(char const*, unsigned long, bool);
    virtual ~HttpHeader();
};
}
