#pragma once

namespace al { 

class ShadowMaskCylinder
{
public:
    ShadowMaskCylinder(char const*);
    declare(al::ShadowMaskDrawCategory);
    calcShadowMatrix(sead::Matrix34<float>*);
    update();
    updateMulti();
    addMulti();
    ~ShadowMaskCylinder();
    getShadowMaskType() const;
};

} 
