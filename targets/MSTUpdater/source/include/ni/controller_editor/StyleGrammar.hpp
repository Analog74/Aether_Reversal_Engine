#pragma once
namespace NI::NWL {
class StyleGrammar {
public:
    virtual void assignErrorHandlers();
    virtual void onNextLine();
    virtual void onProperty();
    virtual void onSelector();
    virtual void onSimpleSelector();
    virtual void onStyle();
    virtual void setNames();
    virtual ~StyleGrammar();
};
}
