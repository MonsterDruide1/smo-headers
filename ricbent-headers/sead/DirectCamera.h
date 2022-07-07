#pragma once

namespace sead { 

class DirectCamera
{
public:
    ~DirectCamera();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    doUpdateMatrix(sead::Matrix34<float>*) const;
};

} 
