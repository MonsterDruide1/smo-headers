#pragma once

namespace eui { 

class UIController
{
public:
    UIController();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~UIController();
    checkDerivedRuntimeTypeInfoStatic(sead::RuntimeTypeInfo::Interface const*);
};

} 
