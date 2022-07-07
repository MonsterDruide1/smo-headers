#pragma once

namespace eui { 

class SelectButton
{
public:
    GetRuntimeTypeInfoStatic();
    getClassName() const;
    SelectButton(eui::SelectButton const&, eui::LayoutEx*, sead::Heap*);
    BuildStateAnim(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    HitTest(sead::Vector2<float> const&) const;
    ProcessOn();
    ProcessOff();
    StartCancel();
    UpdateCancel();
    ProcessCancel();
    FinishDown();
    FinishCancel();
    GetRuntimeTypeInfo() const;
    ~SelectButton();
};

} 
