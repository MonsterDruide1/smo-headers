#pragma once

namespace al { 

class Effect
{
public:
    Effect(al::EffectSystemInfo const*, al::EffectInfo const*, sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Matrix34<float> const*, unsigned long);
    setCameraHolder(al::EffectCameraHolder*);
    setPosPtr(sead::Vector3<float> const*);
    setMtxPtr(sead::Matrix34<float> const*);
    update();
    setFarClip(bool);
    tryUpdateMaterial(char const*, bool const (&) [3]);
    emitEmitter(al::EffectEmitter*, sead::Vector3<float> const*);
    emitEmitters(sead::Vector3<float> const*, bool);
    tryEmitEmitters(sead::Vector3<float> const*, bool);
    tryEmitEmitter(al::EffectEmitter*, sead::Vector3<float> const*);
    tryDeleteEmitters();
    deleteAndClearEmitter();
    isOneTimeFade() const;
    tryKillEmitterAndParticleAll();
    forceSetStopCalcAndDraw(bool);
    setStopCalcAndDraw(bool);
    setActorClip(bool);
    setEmitRatio(float);
    setEmitterAllScale(sead::Vector3<float> const&);
    setEmitterVolumeScale(sead::Vector3<float> const&);
    setParticleScale(float);
    setParticleScale(sead::Vector3<float> const&);
    setParticleAlpha(float);
    setParticleColor(sead::Color4f const&);
    setParticleLifeScale(float);
    getViewMtxPtr() const;
    isLoopOrInfinity() const;
    isEmitterActive() const;
};

} 
