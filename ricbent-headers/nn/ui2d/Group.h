#pragma once

namespace nn { namespace ui2d { 

class Group
{
public:
    Group();
    Group(char const*);
    Group(nn::ui2d::ResGroup const*, nn::ui2d::Pane*);
    AppendPane(nn::ui2d::Pane*);
    Group(nn::ui2d::Group const&, nn::ui2d::Pane*);
    ~Group();
    CompareCopiedInstanceTest(nn::ui2d::Group const&) const;
};

} } 
