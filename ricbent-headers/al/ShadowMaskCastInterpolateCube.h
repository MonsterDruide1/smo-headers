#pragma once

namespace al { 

class ShadowMaskCastInterpolateCube
{
public:
    ShadowMaskCastInterpolateCube(char const*);
    declare(al::ShadowMaskDrawCategory);
    calcShadowMatrix(sead::Matrix34<float>*);
    update();
    updateMulti();
    addMulti();
    createMtxConnector();
    readParam(al::ByamlIter const&);
    ~ShadowMaskCastInterpolateCube();
    getShadowMaskType() const;
};

} 
