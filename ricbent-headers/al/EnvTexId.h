#pragma once

namespace al { 

class EnvTexId
{
public:
    EnvTexId();
    invalidateAll();
    initForCache();
    isEnableTexId(int);
    change(al::EnvTexId const&);
    checkAndSetReflectCubeMapChange(al::EnvTexInfo const&);
    checkAndSetMirrorTexChange(al::EnvTexInfo const&);
    checkAndSetLightMapChange(al::EnvTexInfo const&);
    checkAndSetSphereLightMapChange(al::EnvTexInfo const&);
    checkAndSetProcTex2DChange(al::EnvTexInfo const&);
    checkAndSetProcTex3DChange(al::EnvTexInfo const&);
    checkAndSetRippleTexChange(al::EnvTexInfo const&);
};

} 
