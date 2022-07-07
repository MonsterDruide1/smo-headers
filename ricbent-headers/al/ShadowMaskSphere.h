#pragma once

namespace al { 

class ShadowMaskSphere
{
public:
    ShadowMaskSphere(char const*);
    declare(al::ShadowMaskDrawCategory);
    calcShadowMatrix(sead::Matrix34<float>*);
    update();
    updateMulti();
    addMulti();
    ~ShadowMaskSphere();
    getShadowMaskType() const;
};

} 
