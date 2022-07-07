#pragma once

namespace eui { 

class DragButton
{
public:
    getClassName() const;
    DragButton();
    DragButton(eui::DragButton const&, eui::LayoutEx*, sead::Heap*);
    Build(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    StartDrag(sead::Vector2<float> const&);
    UpdateDrag(sead::Vector2<float> const*);
    FinishDrag(sead::Vector2<float> const*);
    BuildStateAnim(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    StartCancel();
    FinishCancel();
    GetRuntimeTypeInfo() const;
    ~DragButton();
};

} 
