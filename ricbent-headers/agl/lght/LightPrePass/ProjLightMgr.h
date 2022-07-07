#pragma once

namespace agl { namespace lght { namespace LightPrePass { namespace ProjLightMgr {

initPrepareImpl_(sead::Heap*);
initImpl_(agl::lght::LightPrePass::ProjLight&, sead::Heap*);
initViewUboImpl_(agl::UniformBlock*, sead::Heap*);
destroyImpl_(agl::lght::LightPrePass::ProjLight&);
destroyFinishImpl_();
calcViewImpl_(agl::lght::LightPrePass::ProjLight&, int, agl::lght::LightPrePass::Context const&);
updateUBO_(agl::lght::LightPrePass::ProjLight const&, int, agl::lght::LightPrePass::Context const&) const;
drawImpl_(agl::DrawContext*, agl::lght::LightPrePass::ProjLight const&, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
drawDebugImpl_(agl::DrawContext*, agl::lght::LightPrePass::ProjLight const&, int, agl::lght::LightPrePass::Context const&) const;
genMessageImpl_(sead::hostio::Context*, agl::lght::LightPrePass::ProjLight&, int);
listenPropertyEventImpl_(sead::hostio::PropertyEvent const*, agl::lght::LightPrePass::ProjLight&, int);
updateParameters_(agl::lght::LightPrePass::ProjLight&);
loadTextureOR(agl::lght::LightPrePass::ProjLight*);
checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
getRuntimeTypeInfo() const;
getLightType() const;
getLabel() const;

} } } } 
