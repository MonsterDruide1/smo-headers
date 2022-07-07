#pragma once

namespace al { 

class EtmTextureRenderer
{
public:
    createEtmMtxUbo() const;
    EtmTextureRenderer(al::GraphicsSystemInfo*);
    ~EtmTextureRenderer();
    finalize();
    prepareModelDraw();
    setUniform(agl::DrawContext*, agl::ShaderProgram const*) const;
    trySetSampler(agl::DrawContext*, agl::ShaderProgram const*) const;
    calcGpu(sead::Vector3<float> const&);
    setEtmMtxUbo(al::UniformBlock*, sead::Matrix34<float> const&, sead::Matrix34<float> const&) const;
    getShadowMtx() const;
    getFetchShadowMtx() const;
    undefAABB();
    extendWithAABB(sead::BoundBox3<float> const&);
    extendWithPoint(sead::Vector3<float> const&);
    getShadowViewMtx() const;
    getShadowProjMtx() const;
};

} 
