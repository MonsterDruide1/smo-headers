#pragma once

namespace eui { 

class HoverButton
{
public:
    getClassName() const;
    Initialize(sead::Heap*, nn::ui2d::Pane*, eui::Animator*, eui::LayoutEx*);
    CreateHoverButton(nn::ui2d::Pane*, eui::LayoutEx*, eui::ButtonGroup*);
    Down();
    GetRuntimeTypeInfo() const;
    ~HoverButton();
    GetRuntimeTypeInfoStatic();
};

} 
