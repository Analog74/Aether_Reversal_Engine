#pragma once
namespace NI::NHL2 {
class AssignmentMapCollBase {
public:
    AssignmentMapCollBase(char const*);
    virtual void getPageAtIndex(unsigned long) const;
    virtual ~AssignmentMapCollBase();
};
}
