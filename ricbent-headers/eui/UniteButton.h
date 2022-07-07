#pragma once

namespace eui { 

class UniteButton
{
public:
    getClassName() const;
    UniteButton();
    UniteButton(eui::UniteButton const&, eui::LayoutEx*, sead::Heap*);
    SetButtonType(eui::UniteButton::ButtonType);
    Build(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    Uncheck();
    ForceSetChecked(bool);
    StartDrag(sead::Vector2<float> const&);
    UpdateDrag(sead::Vector2<float> const*);
    FinishDrag(sead::Vector2<float> const*);
    HitTest(sead::Vector2<float> const&) const;
    BuildStateAnim(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    StartOn();
    StartDown();
    UpdateDown();
    FinishDown();
    StartCancel();
    UpdateCancel();
    FinishCancel();
    ProcessOn();
    ProcessOff();
    ProcessCancel();
    GetRuntimeTypeInfo() const;
    ~UniteButton();
    GetRuntimeTypeInfoStatic();
};

} 
