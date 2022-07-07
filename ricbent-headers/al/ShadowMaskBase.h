#pragma once

namespace al { 

class ShadowMaskBase
{
public:
    calcShadowMatrix(sead::Matrix34<float>*);
    ShadowMaskBase(char const*);
    initAfterPlacement();
    createMtxConnector();
    setHost(al::LiveActor const*);
    setDrawCategory(char const*);
    readParam(al::ByamlIter const&);
    ~ShadowMaskBase();
};

} 
