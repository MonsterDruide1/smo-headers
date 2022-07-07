#pragma once

namespace eui { 

class AnimButton
{
public:
    GetRuntimeTypeInfoStatic();
    getClassName() const;
    AnimButton();
    Build(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    SetTouch(bool);
    BuildStateAnim(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    DownOff(bool);
    Down();
    HitTest(sead::Vector2<float> const&) const;
    StartDrag(sead::Vector2<float> const&);
    UpdateDrag(sead::Vector2<float> const*);
    FinishDrag(sead::Vector2<float> const*);
    PlayDisableAnim(bool);
    SetDisableAnimDirect(bool);
    IsPlayDisableAnim() const;
    ActivateByBoxCursor();
    InactivateByBoxCursor();
    ForceOff();
    SelectStateAnim(int);
    ForceOn();
    ForceDown();
    StartOn();
    StartOff();
    StartDown();
    UpdateOn();
    UpdateOff();
    UpdateDown();
    ProcessOn();
    ProcessOff();
    ProcessCancel();
    FinishDown();
    ChangeState(eui::ButtonBase::State);
    ForceChangeState(eui::ButtonBase::State);
    CloneImpl_(eui::AnimButton const&, eui::LayoutEx*, sead::Heap*);
    GetRuntimeTypeInfo() const;
    ~AnimButton();
};

} 
