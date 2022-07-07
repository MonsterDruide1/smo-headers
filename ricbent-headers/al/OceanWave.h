#pragma once

namespace al { 

class OceanWave
{
public:
    OceanWave(al::GraphicsSystemInfo*, al::ExecuteDirector*);
    init();
    setHeight(float);
    calcIsInArea(sead::Vector3<float> const&) const;
    tryCalcWaveHeight(float*, sead::Vector3<float> const&) const;
    calcPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcPosFlat(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcDisplacementPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    tryCalcWaveDisplacement(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcNormal(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    tryAddRipple(sead::Vector3<float> const&, float, float);
    tryAddRippleWithRange(sead::Vector3<float> const&, float, float, float, float);
    tryAddQuadRipple(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    setFieldScale(float);
    updateRippleCenterPos(sead::Vector3<float> const&);
    addRipple(sead::Vector3<float> const&, float, float);
    finalize();
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    drawGBufferAfterSky(al::GraphicsRenderInfo const&) const;
    drawMesh(al::GraphicsRenderInfo const&, al::RenderVariables const*, bool, bool) const;
    drawDeferred(al::GraphicsRenderInfo const&) const;
    drawForward(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    drawIndirect(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    calcWindDir(sead::Vector2<float>*) const;
    setAperturePatchLength(float);
    setApertureDisplacementScaleBase(float);
    setApertureLayerNum(int);
    setApertureLodOffset(int);
    setApertureMinGridDivLevel(int);
    setApertureQuadLayerLevel(int);
    setApertureCameraHeightLodLen(float);
    setApertureIsDoubleLod(bool);
    setGridMeshParam(float, float, float, float, int);
    setOceanTextureParam(float, float, float);
    setOceanTextureTexLenScale(float);
    setOceanTextureInitParam(float, float, float, float, float);
    setOceanTextureCoefSmallL(float);
    setCloudSeaParameter();
    tryCalcDepthRate(float*, sead::Vector3<float> const&) const;
    tryCalcHeightDepthAdd(float*, sead::Vector3<float> const&) const;
    tryCalcRippleHeight(float*, sead::Vector3<float> const&) const;
    initRippleGaussian(int);
    getName() const;
    ~OceanWave();
    getTypeName() const;
};

} 
