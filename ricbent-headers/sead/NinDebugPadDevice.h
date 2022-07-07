#pragma once

namespace sead { 

class NinDebugPadDevice
{
public:
    NinDebugPadDevice(sead::ControllerMgr*);
    ~NinDebugPadDevice();
    calc();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
