#pragma once

namespace eui { 

class CheckKeepButton
{
public:
    getClassName() const;
    CheckKeepButton(eui::CheckKeepButton const&, eui::LayoutEx*, sead::Heap*);
    Uncheck();
    StartDown();
    GetRuntimeTypeInfo() const;
    ~CheckKeepButton();
};

} 
