#pragma once
namespace pugi {
class xml_document {
public:
    virtual void document_element() const;
    xml_document();
    virtual ~xml_document();
};
}
