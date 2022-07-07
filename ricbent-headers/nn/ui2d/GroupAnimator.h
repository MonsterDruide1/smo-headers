#pragma once

namespace nn { namespace ui2d { 

class GroupAnimator
{
public:
    Setup(nn::ui2d::Group*, bool);
    Unbind();
    Setup(nn::ui2d::AnimResource const&, nn::ui2d::GroupContainer*, int, bool);
    GetRuntimeTypeInfo() const;
    ~GroupAnimator();
};

} } 
