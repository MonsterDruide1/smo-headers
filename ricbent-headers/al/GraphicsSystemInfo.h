#pragma once

namespace al { 

class GraphicsSystemInfo
{
public:
    getModelEnv() const;
    GraphicsSystemInfo();
    ~GraphicsSystemInfo();
    getDrawContext() const;
    getShaderCubeMapKeeper() const;
    getViewIndexedUboArray(char const*) const;
    setViewIndexedUboArray(char const*, sead::PtrArray<al::UniformBlock> const*);
    initAtmosScatter(al::ExecuteDirector*);
    init(al::GraphicsInitArg const&, al::AreaObjDirector*, al::ExecuteDirector*, al::EffectSystem*, al::PlayerHolder*, al::SceneCameraInfo*, al::ShaderHolder*);
    initProjectResource();
    initStageResource(al::Resource const*, char const*, char const*);
    endInit();
    initAfterPlacement();
    initAfterCreateDrawTable();
    setDrawEnv(int, al::GBufferArray*, sead::Camera const*, al::Projection const*);
    clearGraphicsRequest();
    cancelLerp();
    updateGraphics();
    updatePartsGraphics(al::GraphicsUpdateInfo const&);
    preDrawGraphics(al::SceneCameraInfo const*);
    calcGpuPartsGraphics(al::GraphicsCalcGpuInfo const&);
    updateViewGpu(int, sead::Camera const*, al::Projection const*);
    updateViewVolume(sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    clearViewVolume();
    tryGetAtmosLightDir(sead::Vector3<float>*) const;
    tryDirectionalLightInfo(sead::Vector3<float>*) const;
    activateDirLitColorTex() const;
    activateDirLitColorTex(agl::DrawContext*) const;
    registPartsGraphics(al::PartsGraphics*);
    drawSystemPartsGraphics(al::GraphicsRenderInfo const*) const;
    doPartsGraphicsCommandBufferCopy(al::GraphicsCopyInfo const&) const;
    doPartsGraphicsCompute(al::GraphicsComputeInfo const&) const;
    drawPartsGraphics(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    drawPartsGraphicsGBufferAfterSky(al::GraphicsRenderInfo const&) const;
    drawPartsGraphicsDeferred(al::GraphicsRenderInfo const&) const;
    drawPartsGraphicsLdr(al::GraphicsRenderInfo const&) const;
    drawPartsGraphicsIndirect(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    drawPartsGraphicsCubemap(al::GraphicsRenderInfo const&) const;
};

} 
