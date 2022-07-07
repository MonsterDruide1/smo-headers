#pragma once

namespace alEnvTexFunction {

calcMaterialLightType(nn::g3d::ResMaterial const&);
calcSphereMaterialLightType(nn::g3d::ResMaterial const&);
calcProcTexture2DType(nn::g3d::ResMaterial const&);
calcProcTexture3DType(nn::g3d::ResMaterial const&);
isUseMaterialLight(nn::g3d::ResMaterial const&);
isUseSphereMaterialLight(nn::g3d::ResMaterial const&);
isUseCubeMapTex(nn::g3d::ResMaterial const&);
isUseExposureTex(nn::g3d::ResMaterial const&);
isUseMirrorTex(nn::g3d::ResMaterial const&);

} 
