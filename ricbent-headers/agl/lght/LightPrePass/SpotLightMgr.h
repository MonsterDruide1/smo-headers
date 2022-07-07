#pragma once

namespace agl { namespace lght { namespace LightPrePass { namespace SpotLightMgr {

initPrepareImpl_(sead::Heap*);
initImpl_(agl::lght::LightPrePass::SpotLight&, sead::Heap*);
initViewUboImpl_(agl::UniformBlock*, sead::Heap*);
destroyImpl_(agl::lght::LightPrePass::SpotLight&);
destroyFinishImpl_();
calcViewImpl_(agl::lght::LightPrePass::SpotLight&, int, agl::lght::LightPrePass::Context const&);
updateUBO_(agl::lght::LightPrePass::SpotLight const&, int, agl::lght::LightPrePass::Context const&) const;
drawImpl_(agl::DrawContext*, agl::lght::LightPrePass::SpotLight const&, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
drawDebugImpl_(agl::DrawContext*, agl::lght::LightPrePass::SpotLight const&, int, agl::lght::LightPrePass::Context const&) const;
genMessageImpl_(sead::hostio::Context*, agl::lght::LightPrePass::SpotLight&, int);
checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
getRuntimeTypeInfo() const;
getLightType() const;
getLabel() const;

} } } } 
