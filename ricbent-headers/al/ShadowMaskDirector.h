#pragma once

namespace al { 

class ShadowMaskDirector
{
public:
    ShadowMaskDirector(unsigned char, al::GraphicsSystemInfo*);
    ~ShadowMaskDirector();
    endInit();
    initialize(unsigned int, unsigned char);
    clear();
    updateShadowMask();
    updateMultiCore(int);
    updateGpuBufferMultiCore(int);
    setUniformSphere(agl::UniformBlock*, al::ShadowMaskDirector::PrimInfo const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    setUniformCylinder(agl::UniformBlock*, al::ShadowMaskDirector::PrimInfo const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    setUniformCube(agl::UniformBlock*, al::ShadowMaskDirector::PrimInfo const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    registerShadowMask(al::ShadowMaskBase*);
    registerUpdateShadowMask(al::ShadowMaskBase*);
    removeUpdateShadowMask(al::ShadowMaskBase*);
    init();
    initShader(al::ShaderHolder*);
    addSphere(sead::Matrix34<float> const&, sead::Color4f const&, float, int);
    addCylinder(sead::Matrix34<float> const&, sead::Color4f const&, float, float, float, bool, int);
    addCastOvalCylinder(sead::Matrix34<float> const&, sead::Color4f const&, float, float, float, bool, int);
    addCube(sead::Matrix34<float> const&, sead::Matrix34<float> const&, sead::Matrix34<float> const&, sead::Color4f const&, sead::Vector3<float> const&, float, bool, int, agl::TextureSampler*, bool, bool, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&, int);
    addCastInterpolateCube(sead::Matrix34<float> const&, sead::Color4f const&, sead::Vector3<float> const&, float, bool, int);
    setUniformCommon(int, int, int);
    updateGpuBuffer(int, sead::Matrix34<float> const*, sead::Matrix44<float> const*);
    flushUbo(int);
    swapGpuBuffer();
    drawPrimSphere(int, al::ShadowMaskDirector::Context&, agl::ShaderProgram const*, agl::TextureData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, int, bool);
    drawPrimCylinder(int, al::ShadowMaskDirector::Context&, agl::ShaderProgram const*, agl::TextureData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, int, bool);
    drawPrimCube(int, al::ShadowMaskDirector::Context&, agl::ShaderProgram const*, agl::TextureData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, int, bool);
    drawPrimTexCube(int, al::ShadowMaskDirector::Context&, agl::ShaderProgram const*, agl::TextureData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, int, bool);
    setViewInfo(int, al::GBufferArray*, agl::sdw::ShadowPrePass*, sead::Matrix34<float> const*, sead::Matrix44<float> const*);
    isExistDrawShadowMask() const;
    isExistDrawShadowMaskCategory(int) const;
    draw(int, agl::ShaderProgram const*, agl::TextureData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, int);
    drawShadowMask(agl::DrawContext*, int, agl::RenderTargetDepth const*, agl::RenderTargetDepth const*, agl::TextureData const*) const;
};

} 
