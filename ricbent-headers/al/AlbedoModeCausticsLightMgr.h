#pragma once

namespace al { 

class AlbedoModeCausticsLightMgr
{
public:
    setShader(agl::ShaderProgram const*);
    AlbedoModeCausticsLightMgr(al::PrePassLightKeeper*);
    initPrepareImpl_(sead::Heap*);
    initImpl_(al::LppLightDataBase<al::CausticsLightParam>&, sead::Heap*);
    initViewUboImpl_(agl::UniformBlock*, sead::Heap*);
    calcViewImpl_(al::LppLightDataBase<al::CausticsLightParam>&, int, agl::lght::LightPrePass::Context const&);
    updateUBO_(al::LppLightDataBase<al::CausticsLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    drawImpl_(agl::DrawContext*, al::LppLightDataBase<al::CausticsLightParam> const&, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
    drawDebugImpl_(agl::DrawContext*, al::LppLightDataBase<al::CausticsLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getLightType() const;
    getLabel() const;
};

} 
