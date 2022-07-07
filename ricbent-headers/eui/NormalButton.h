#pragma once

namespace eui { 

class NormalButton
{
public:
    getClassName() const;
    NormalButton(eui::NormalButton const&, eui::LayoutEx*, sead::Heap*);
    GetRuntimeTypeInfo() const;
    ~NormalButton();
    GetRuntimeTypeInfoStatic();
};

} 
