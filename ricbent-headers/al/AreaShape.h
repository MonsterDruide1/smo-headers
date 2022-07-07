#pragma once

namespace al { 

class AreaShape
{
public:
    AreaShape();
    setBaseMtxPtr(sead::Matrix34<float> const*);
    setScale(sead::Vector3<float> const&);
    calcLocalPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcWorldPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcWorldDir(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcTrans(sead::Vector3<float>*) const;
};

} 
