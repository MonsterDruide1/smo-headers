#pragma once

namespace al { 

class AlbedoModePointLightMgr
{
public:
    setShader(agl::ShaderProgram const*);
    AlbedoModePointLightMgr(al::PrePassLightKeeper*);
    initPrepareImpl_(sead::Heap*);
    initImpl_(al::LppLightDataBase<al::PointLightParam>&, sead::Heap*);
    initViewUboImpl_(agl::UniformBlock*, sead::Heap*);
    calcViewImpl_(al::LppLightDataBase<al::PointLightParam>&, int, agl::lght::LightPrePass::Context const&);
    updateUBO_(al::LppLightDataBase<al::PointLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    drawImpl_(agl::DrawContext*, al::LppLightDataBase<al::PointLightParam> const&, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
    drawDebugImpl_(agl::DrawContext*, al::LppLightDataBase<al::PointLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getLightType() const;
    getLabel() const;
};

} 
