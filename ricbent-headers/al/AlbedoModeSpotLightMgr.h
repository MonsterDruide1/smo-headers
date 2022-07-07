#pragma once

namespace al { 

class AlbedoModeSpotLightMgr
{
public:
    setShader(agl::ShaderProgram const*);
    AlbedoModeSpotLightMgr(al::PrePassLightKeeper*);
    initPrepareImpl_(sead::Heap*);
    initImpl_(al::LppLightDataBase<al::SpotLightParam>&, sead::Heap*);
    initViewUboImpl_(agl::UniformBlock*, sead::Heap*);
    calcViewImpl_(al::LppLightDataBase<al::SpotLightParam>&, int, agl::lght::LightPrePass::Context const&);
    updateUBO_(al::LppLightDataBase<al::SpotLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    drawImpl_(agl::DrawContext*, al::LppLightDataBase<al::SpotLightParam> const&, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
    drawDebugImpl_(agl::DrawContext*, al::LppLightDataBase<al::SpotLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getLightType() const;
    getLabel() const;
};

} 
