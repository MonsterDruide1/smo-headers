#pragma once

namespace al { 

class ShadowMaskCastOvalCylinder
{
public:
    ShadowMaskCastOvalCylinder(char const*);
    declare(al::ShadowMaskDrawCategory);
    calcShadowMatrix(sead::Matrix34<float>*);
    calcOvalWrapMtxCylinder(sead::Matrix34<float>*, sead::Matrix34<float>, sead::Vector3<float> const&, float) const;
    update();
    updateMulti();
    addMulti();
    ~ShadowMaskCastOvalCylinder();
    getShadowMaskType() const;
};

} 
