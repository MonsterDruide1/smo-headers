#pragma once

namespace al { 

class AlbedoModeProjLightMgr
{
public:
    updateParameters_(al::LppLightDataBase<al::ProjLightParam>&);
    AlbedoModeProjLightMgr(al::PrePassLightKeeper*);
    setShader(agl::ShaderProgram const*);
    initPrepareImpl_(sead::Heap*);
    initImpl_(al::LppLightDataBase<al::ProjLightParam>&, sead::Heap*);
    initViewUboImpl_(agl::UniformBlock*, sead::Heap*);
    calcViewImpl_(al::LppLightDataBase<al::ProjLightParam>&, int, agl::lght::LightPrePass::Context const&);
    updateUBO_(al::LppLightDataBase<al::ProjLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    drawImpl_(agl::DrawContext*, al::LppLightDataBase<al::ProjLightParam> const&, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
    drawDebugImpl_(agl::DrawContext*, al::LppLightDataBase<al::ProjLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getLightType() const;
    getLabel() const;
};

} 
