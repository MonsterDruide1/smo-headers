#pragma once

namespace nn { namespace ui2d { 

class GroupContainer
{
public:
    ~GroupContainer();
    AppendGroup(nn::ui2d::Group*);
    FindGroupByName(char const*);
    FindGroupByName(char const*) const;
};

} } 
