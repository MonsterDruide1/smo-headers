#pragma once

namespace al { 

class ShadowMaskCube
{
public:
    ShadowMaskCube(char const*);
    ~ShadowMaskCube();
    tryInitTexture(char const*);
    declare(al::ShadowMaskDrawCategory);
    update();
    updateMulti();
    addMulti();
    calcShadowMatrix(sead::Matrix34<float>*);
    getShadowMaskType() const;
};

} 
