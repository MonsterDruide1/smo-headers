#pragma once

namespace agl { namespace lght { namespace LightPrePassLightMgr<agl::lght::LightPrePass::ProjLight, agl::lght::LightPrePass::Context, agl::lght::LightPrePass::CallbackArg> {

initialize(agl::lght::LightPrePass*, int, int, sead::Heap*);
destroy();
calc();
calcView(int, agl::lght::LightPrePass::Context const&, int);
updateGPU() const;
updateViewGPU(int, agl::lght::LightPrePass::Context const&) const;
draw(agl::DrawContext*, int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
drawDebug(agl::DrawContext*, int, agl::lght::LightPrePass::Context const&) const;
drawDebugTest(agl::DrawContext*, int, agl::lght::LightPrePass::Context const&) const;
setValidNum(int);
getValidNum() const;
getLightMax() const;
getDrawLightNum(int) const;
enableLight(int, bool);
isLightEnabled(int) const;
setVisible(int, int, bool);
setVisibleDirect(int, unsigned int);
setVisibleAll(int, bool);
isVisible(int, int) const;
genMessage(sead::hostio::Context*);
listenPropertyEvent(sead::hostio::PropertyEvent const*);
calcPrepareImpl_();
calcImpl_(agl::lght::LightPrePass::ProjLight&);
updateGpuPrepareImpl_() const;
updateGpuImpl_(agl::lght::LightPrePass::ProjLight const&) const;
updateViewGpuPrepareImpl_(int, agl::lght::LightPrePass::Context const&) const;
updateViewGpuImpl_(agl::lght::LightPrePass::ProjLight const&, int, agl::lght::LightPrePass::Context const&) const;
drawPrepareImpl_(int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
drawDebugTestImpl_(agl::DrawContext*, agl::lght::LightPrePass::ProjLight const&, int, agl::lght::LightPrePass::Context const&) const;
genMessagePrepareImpl_(sead::hostio::Context*);
listenPropertyEventPrepareImpl_(sead::hostio::PropertyEvent const*);

} } } 
