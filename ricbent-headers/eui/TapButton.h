#pragma once

namespace eui { 

class TapButton
{
public:
    getClassName() const;
    Initialize(sead::Heap*, nn::ui2d::Pane*, eui::Animator*, eui::LayoutEx*);
    CreateTapButton(nn::ui2d::Pane*, eui::LayoutEx*, eui::ButtonGroup*);
    On();
    Off();
    ProcessDown();
    FinishDown();
    ForceOff();
    GetRuntimeTypeInfo() const;
    ~TapButton();
    GetRuntimeTypeInfoStatic();
};

} 
