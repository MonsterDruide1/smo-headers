#pragma once

namespace eui { 

class CheckButton
{
public:
    GetRuntimeTypeInfoStatic();
    getClassName() const;
    CheckButton(eui::CheckButton const&, eui::LayoutEx*, sead::Heap*);
    Build(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    ForceSetChecked(bool);
    StartDown();
    UpdateDown();
    GetRuntimeTypeInfo() const;
    ~CheckButton();
};

} 
