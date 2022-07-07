#pragma once

namespace nn { namespace ui2d { 

class AnimResource
{
public:
    AnimResource();
    Initialize();
    CheckResource() const;
    Set(void const*);
    GetTagOrder() const;
    GetTagName() const;
    GetGroupCount() const;
    GetGroupArray() const;
    GetExtUserDataList() const;
    IsDescendingBind() const;
    GetAnimationShareInfoCount() const;
    GetAnimationShareInfoArray() const;
    CalculateAnimationCount(nn::ui2d::Pane*, bool) const;
    CalculateAnimationCount(nn::ui2d::Material*) const;
    CalculateAnimationCount(nn::ui2d::Group*, bool) const;
};

} } 
