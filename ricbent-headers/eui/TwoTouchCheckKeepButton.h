#pragma once

namespace eui { 

class TwoTouchCheckKeepButton
{
public:
    getClassName() const;
    TwoTouchCheckKeepButton();
    TwoTouchCheckKeepButton(eui::TwoTouchCheckKeepButton const&, eui::LayoutEx*, sead::Heap*);
    IsTouchOnce() const;
    HitTest(sead::Vector2<float> const&) const;
    ForceSetTouchOnce(bool);
    ActivateByBoxCursor();
    InactivateByBoxCursor();
    BuildStateAnim(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    ProcessCancel();
    StartDown();
    UpdateDown();
    FinishDown();
    StartCancel();
    UpdateCancel();
    FinishCancel();
    GetRuntimeTypeInfo() const;
    ~TwoTouchCheckKeepButton();
};

} 
