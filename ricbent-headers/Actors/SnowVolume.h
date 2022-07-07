#pragma once

class SnowVolume
{
public:
    SnowVolume(char const*);
    init(al::ActorInitInfo const&);
    updateDifferential();
    updateVolume();
    clearModifyFlag();
    initAfterPlacement();
    calcGridPos(sead::Vector3<float>*, int, int, int) const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    calcRemovePoint(sead::Vector3<float> const&, float);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startClipped();
    endClipped();
    control();
    updateRemovePoint();
    updateConnection();
    updateGravity();
    createVolume();
    calcNormal(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    removeSnow(sead::Vector3<float> const&, float, float);
};
