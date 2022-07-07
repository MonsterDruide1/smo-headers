#pragma once

namespace al { 

class EnvTexInfo
{
public:
    getCubeMapId() const;
    getMirrorTexId() const;
    getLightMapId() const;
    getSphereLightMapId() const;
    getProcTex2DId() const;
    getProcTex3DId() const;
    getRippleTexId() const;
    EnvTexInfo();
    EnvTexInfo(nn::g3d::ResMaterial const&);
    EnvTexInfo(al::EnvTexId const&);
    clearAll();
};

} 
