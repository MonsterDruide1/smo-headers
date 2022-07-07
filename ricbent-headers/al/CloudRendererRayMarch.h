#pragma once

namespace al { 

class CloudRendererRayMarch
{
public:
    CloudRendererRayMarch(char const*, al::GraphicsSystemInfo*);
    storePose(sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&);
    ~CloudRendererRayMarch();
    finalize();
    calcGpu(al::GraphicsCalcGpuInfo const&);
    calcSceneView(int, al::ViewInfo const&);
    storeSceneUbo(al::UniformBlock*, sead::Matrix34<float> const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Matrix44<float> const&);
    drawSphere(agl::DrawContext*, int, al::SimpleModelEnv const*) const;
    drawSphereEtm(agl::DrawContext*) const;
};

} 
