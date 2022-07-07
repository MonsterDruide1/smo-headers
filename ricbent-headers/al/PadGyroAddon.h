#pragma once

namespace al { 

class PadGyroAddon
{
public:
    PadGyroAddon(sead::Controller*, int);
    calc();
    tryUpdateGyroStatus();
    getPose(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~PadGyroAddon();
};

} 
