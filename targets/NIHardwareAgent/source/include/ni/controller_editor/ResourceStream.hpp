#pragma once
namespace NI::GP {
class ResourceStream {
public:
    virtual void initWithCompiledResource(unsigned int, char const*);
    ResourceStream();
    virtual ~ResourceStream();
};
}
