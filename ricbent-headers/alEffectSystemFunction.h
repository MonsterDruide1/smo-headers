#pragma once

namespace alEffectSystemFunction {

setDrawPathRenderStateSetDrawDepthShadow(al::EffectSystem const*, bool);
calcEffectCompute(al::EffectSystem const*);
drawEffectDeferred(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectForward(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectForwardReduceBuffer(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectForwardReduceBufferHdr(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectForwardAfterFog(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectIndirect(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float, sead::Viewport const*);
drawEffectPostEffect(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectChromakey(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectShadowCaster(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectShadowReceiver(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectShadowCasterWithSilhouette(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectShadowReceiverWithSilhouette(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
drawEffectShadowCasterForShadowMap(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float, sead::Vector3<float> const*);
drawEffectShadowCasterWithSilhouetteForShadowMap(al::EffectSystem const*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float, sead::Vector3<float> const*);
drawEffect2D(al::EffectSystem const*, sead::Viewport const*);
updateEffect2D(al::EffectSystem*);
calcShadowClipVolume(al::EffectSystem const*, agl::sdw::DepthShadow*);
tryDeleteEmitterAndParticleOneTime(al::EffectSystemInfo const*);
setDepthTexture(al::EffectSystem const*, agl::TextureData const*);
isHasRenderingEmitterInReduceBuffer(al::EffectSystem const*);
isHasRenderingEmitterInReduceBufferHdr(al::EffectSystem const*);

} 
