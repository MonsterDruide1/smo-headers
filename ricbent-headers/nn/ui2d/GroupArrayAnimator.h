#pragma once

namespace nn { namespace ui2d { 

class GroupArrayAnimator
{
public:
    Setup(nn::ui2d::AnimResource const&, nn::ui2d::GroupContainer*, nn::ui2d::Group**, bool);
    Unbind();
    GetRuntimeTypeInfo() const;
    ~GroupArrayAnimator();
};

} } 
