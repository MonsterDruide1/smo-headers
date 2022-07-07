#pragma once

namespace alGraphicsFunction {

registerGraphicsPreset(char const*, char const*, char const*, al::ActorInitInfo const&, bool);
requestGraphicsPreset(al::LiveActor const*, char const*, int, int, int, sead::Vector3<float> const&);
appearFootPrint(al::LiveActor const*, al::FootPrintRequestInfo*);
disappearFootPrint(al::LiveActor const*, al::FootPrintRequestInfo*);
setRainControl(al::LiveActor const*, float);
setRainUpdateFlag(al::Scene*, bool);
isEnableRain(al::Scene*);
setFogNoiseUpdateFlag(al::Scene*, bool);
getDirectionalLightDir(al::LiveActor const*);
calcDirectionalLightDir(al::LiveActor const*);
getDepthShadowFarLength(al::LiveActor const*);
invalidateCameraBlurSystem(al::Scene*);
validateCameraBlurSystem(al::Scene*);
invalidateOcclusionCullingSystem(al::Scene*);
validateOcclusionCullingSystem(al::Scene*);
isGraphicsQualityModeConsole(al::LiveActor const*);
isGraphicsQualityModeHandheld(al::LiveActor const*);
forceGraphicsQualityModeConsole(al::Scene*);
forceGraphicsQualityModeHandheld(al::Scene*);
forceGraphicsQualityModeSnapShot(al::Scene*);
unforceGraphicsQualityMode(al::Scene*);
validateModelLodAll(al::Scene*);
invalidateModelLodAll(al::Scene*);
setSphereMapUpdateEveryFrame(al::Scene*, sead::Vector3<float> const&);
setMaterialLightUpdateBaseAngleChanged(al::Scene*, bool);
requestChangeShaderVariation(al::LiveActor const*, char const*, char const*, bool);
requestChangeShaderVariation(al::ModelCtrl*, int, al::ModelShaderHolder*, char const*, char const*, bool);
requestChangeShaderVariation(al::ModelCtrl*, al::ModelShaderHolder*, char const*, char const*, bool);
requestChangeShaderVariationWithoutForward(al::LiveActor const*, char const*, char const*, bool);
requestUpdateMaterialInfo(al::Scene*);
validateGpuStressAnalyzer(al::Scene*);
invalidateGpuStressAnalyzer(al::Scene*);
isValidGpuStressAnalyzer(al::Scene*);
getMemoryPoolPtr(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&);
getMemoryPoolSize(NVNmemoryPool const*);
calcMemoryPoolOffset(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&);
getGPUAddressMemoryPool(NVNmemoryPool*);
getGPUAddress(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&);
getGPUAddressMemoryPool(nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&);
getGPUAddress(agl::GPUMemVoidAddr const&);
getGPUAddress(agl::ConstGPUMemVoidAddr const&);
getGPUAddress(NVNbuffer const&);
calcVertexBufferGPUAddress(nn::g3d::ResVertex const&, int);
calcIndexBufferGPUAddress(nn::g3d::ResMesh&);

} 
