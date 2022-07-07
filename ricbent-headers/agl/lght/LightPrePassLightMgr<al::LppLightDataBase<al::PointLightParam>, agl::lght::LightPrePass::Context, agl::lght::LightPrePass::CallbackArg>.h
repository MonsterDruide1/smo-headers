#pragma once

namespace agl { namespace lght { namespace LightPrePassLightMgr<al::LppLightDataBase<al::PointLightParam>, agl::lght::LightPrePass::Context, agl::lght::LightPrePass::CallbackArg> {

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
destroyImpl_(al::LppLightDataBase<al::PointLightParam>&);
destroyFinishImpl_();
calcPrepareImpl_();
calcImpl_(al::LppLightDataBase<al::PointLightParam>&);
updateGpuPrepareImpl_() const;
updateGpuImpl_(al::LppLightDataBase<al::PointLightParam> const&) const;
updateViewGpuPrepareImpl_(int, agl::lght::LightPrePass::Context const&) const;
updateViewGpuImpl_(al::LppLightDataBase<al::PointLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
drawPrepareImpl_(int, agl::lght::LightPrePass::Context const&, agl::lght::LightPrePass::CallbackArg&) const;
drawDebugTestImpl_(agl::DrawContext*, al::LppLightDataBase<al::PointLightParam> const&, int, agl::lght::LightPrePass::Context const&) const;
genMessagePrepareImpl_(sead::hostio::Context*);
genMessageImpl_(sead::hostio::Context*, al::LppLightDataBase<al::PointLightParam>&, int);
listenPropertyEventPrepareImpl_(sead::hostio::PropertyEvent const*);
listenPropertyEventImpl_(sead::hostio::PropertyEvent const*, al::LppLightDataBase<al::PointLightParam>&, int);

} } } 
