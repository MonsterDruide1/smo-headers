#pragma once

namespace al { 

class EffectSystem
{
public:
    getDefaultDataBaseResourcePath();
    getDefaultPtclResourcePath();
    getDefaultPtclPatchResourcePath();
    createSystem(agl::DrawContext*, sead::Heap*);
    createSystemWithPatchResouce(agl::DrawContext*, sead::Heap*);
    loadEffectResource(al::EffectSystem*);
    loadPtclResource(sead::Heap*);
    initializeSystem(agl::DrawContext*, sead::Heap*);
    initializeSystemWithPatchResouce(agl::DrawContext*, sead::Heap*);
    isEnableBatchCompute();
    getPauseForceCalcFrame();
    EffectSystem();
    setDrawContext(agl::DrawContext*);
    addResourcePath(char const*);
    init();
    loadDbResource(sead::Heap*);
    initScene();
    endInit();
    startScene(al::ExecuteDirector*);
    preprocess();
    postprocess();
    endScene();
    setCameraDirector(al::CameraDirector*);
    setMaterialCodeList(al::CollisionCodeList*);
    calcParticle(unsigned long);
    setGraphicsSystemInfo(al::GraphicsSystemInfo const*);
    updateEffect(char const*) const;
    findGroupDrawer(char const*) const;
    calcEffectCompute() const;
    drawEffectWithRenderPathAndCamPos(sead::Matrix44<float> const&, sead::Matrix34<float> const&, sead::Vector3<float> const&, float, float, float, char const*, unsigned int) const;
    drawEffectWithRenderPath(sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float, char const*, unsigned int) const;
    calcShadowClipVolume(agl::sdw::DepthShadow*, char const*, unsigned int) const;
    addCalcEffect(unsigned long);
    isHasRenderingEmitter(unsigned int) const;
    checkCalculateFlag(int);
    calcParticle(int);
    calcChildParticle(int);
};

} 
