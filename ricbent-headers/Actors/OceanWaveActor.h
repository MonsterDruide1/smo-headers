#pragma once

class OceanWaveActor
{
public:
    OceanWaveActor(char const*);
    init(al::ActorInitInfo const&);
    initOceanPreset();
    initCloudPreset();
    onSnapShotMode();
    offSnapShotMode();
    tryLoadPreset();
    initAfterPlacement();
    makeActorAlive();
    makeActorDead();
    control();
    isSodaOcean() const;
    calcIsInArea(sead::Vector3<float> const&) const;
    calcPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcNormal(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcVelocity(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};
