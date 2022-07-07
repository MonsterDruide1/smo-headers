#pragma once

namespace agl { namespace lght { namespace LightPrePass { namespace PointLightMgr {

initPrepareImpl_(sead::Heap*);
initImpl_(agl::lght::LightPrePass::PointLight&, sead::Heap*);
destroyFinishImpl_();
initViewUboImpl_(agl::UniformBlock*, sead::Heap*);
calcViewImpl_(agl::lght::LightPrePass::PointLight&, int, agl::lght::LightPrePass::Context const&);
updateUBO_(agl::lght::LightPrePass::PointLight const&, int, agl::lght::LightPrePass::Context const&) const;
drawImpl_(agl::DrawContext*, agl::lght::LightPrePass::PointLight const&, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
drawDebugImpl_(agl::DrawContext*, agl::lght::LightPrePass::PointLight const&, int, agl::lght::LightPrePass::Context const&) const;
drawDebugTestImpl_(agl::DrawContext*, agl::lght::LightPrePass::PointLight const&, int, agl::lght::LightPrePass::Context const&) const;
genMessageImpl_(sead::hostio::Context*, agl::lght::LightPrePass::PointLight&, int);
checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
getRuntimeTypeInfo() const;
getLightType() const;
getLabel() const;

} } } } 
