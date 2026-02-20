#pragma once
namespace NI::NWL {
class StyleGrammar {
public:
    virtual void assignErrorHandlers();
    virtual void onProperty();
    virtual void onSelector();
    virtual void setNames();
    virtual ~StyleGrammar();
};
}
