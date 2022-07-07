#pragma once

namespace al { 

class EffectKeeper
{
public:
    EffectKeeper(al::EffectSystemInfo const*, char const*, sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Matrix34<float> const*);
    update();
    tryUpdateMaterial(char const*);
    updatePrefix(al::EffectPrefixType const&, bool);
    emitEffectCurrentPos(char const*);
    findEffect(char const*) const;
    emitEffect(char const*, sead::Vector3<float> const*);
    tryEmitEffect(char const*, sead::Vector3<float> const*);
    deleteEffect(char const*);
    tryDeleteEffect(char const*);
    tryKillEmitterAndParticleAll();
    deleteEffectAll();
    deleteAndClearEffectAll();
    onCalcAndDraw();
    offCalcAndDraw();
    forceSetStopCalcAndDraw(bool);
    setEmitRatio(char const*, float);
    setEmitterAllScale(char const*, sead::Vector3<float> const&);
    setEmitterVolumeScale(char const*, sead::Vector3<float> const&);
    setParticleScale(char const*, float);
    setParticleScale(char const*, sead::Vector3<float> const&);
    setParticleAlpha(char const*, float);
    setParticleColor(char const*, sead::Color4f const&);
    setParticleLifeScale(char const*, float);
    findMtxPtr(char const*);
    tryFindEffect(char const*) const;
};

} 
