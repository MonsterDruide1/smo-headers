#pragma once

namespace al { 

class JointMtxPtr
{
public:
    JointMtxPtr();
    setNull();
    set(sead::Matrix34<float> const*);
    set(al::Matrix43<float> const*);
    getTranslation(sead::Vector3<float>*) const;
    calcMtxScale(sead::Vector3<float>*) const;
    copyTo(sead::Matrix34<float>*) const;
};

} 
