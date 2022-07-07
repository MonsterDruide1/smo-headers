#pragma once

namespace al { 

class DepthShadowDrawer
{
public:
    DepthShadowDrawer();
    setNearFarInit();
    ~DepthShadowDrawer();
    cleanupDepthShadow() const;
    setNearFar(float, float, float, float);
    init(int, al::GraphicsSystemInfo*, al::ExecuteDirector const*, al::EffectSystem const*, al::PlayerHolder const*);
    drawToDepthShadowCallback(agl::sdw::DepthShadow::CallbackArg const&) const;
    getShadowMapTextureData() const;
    executeDrawDepthShadow() const;
    executeDrawEffectDepthShadow(sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float) const;
    setupShaderProgram(agl::DrawContext*, int, agl::ShaderProgram const*);
    setupShaderProgramCubeMap(agl::DrawContext*, int);
    setupShaderProgramDummy(agl::DrawContext*, int, agl::ShaderProgram const*);
    allocAndDrawToDepthShadow(agl::DrawContext*) const;
    calcRenderingShadowMatrix(sead::Matrix44<float>*, int, int) const;
    setupDepthShadow(int) const;
    updateDepthShadow(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
};

} 
