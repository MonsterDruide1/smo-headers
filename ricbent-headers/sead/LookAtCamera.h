#pragma once

namespace sead { 

class LookAtCamera
{
public:
    LookAtCamera(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    ~LookAtCamera();
    doUpdateMatrix(sead::Matrix34<float>*) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
