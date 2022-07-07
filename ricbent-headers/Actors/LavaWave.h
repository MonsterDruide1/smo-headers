#pragma once

class LavaWave
{
public:
    LavaWave(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    calcCoord(sead::Vector2<int>*, sead::Vector3<float> const&, int) const;
    startEndDemoBossMagma();
    setEndDemoParamBossMagma(sead::Vector3<float> const&, int);
    endEndDemoBossMagma();
    tryKillEmitterAndParticleAll();
    calcIsInArea(sead::Vector3<float> const&) const;
    calcPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcPosFlat(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcNormal(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    tryAddRipple(sead::Vector3<float> const&, float, float);
    tryAddRippleWithRange(sead::Vector3<float> const&, float, float, float, float);
    tryAddQuadRipple(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    getTypeName() const;
};
