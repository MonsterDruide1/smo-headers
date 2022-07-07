#pragma once

namespace sead { 

class ControllerWrapperBase
{
public:
    ControllerWrapperBase();
    ~ControllerWrapperBase();
    unregister();
    registerWith(sead::Controller*, bool);
    copyRepeatSetting(sead::Controller const*);
    setEnable(bool);
    setEnableOtherWrappers(bool) const;
    setIdle();
    isIdle_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
