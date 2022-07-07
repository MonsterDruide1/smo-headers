#pragma once

class MapObjStatePlayerHold
{
public:
    MapObjStatePlayerHold(al::LiveActor*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    initUseColliderPush(float);
    initShadowMaskDropLengthCtrl(char const*);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsgNoRelease(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgRelease(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    prepareThrowCollide();
    receiveMsgCancel(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartCarryFront(al::SensorMsg const*, al::HitSensor*);
    tryStartCarryFrontWallKeep(al::SensorMsg const*, al::HitSensor*);
    tryStartCarryUp(al::SensorMsg const*, al::HitSensor*);
    tryCancelHold(al::HitSensor*);
    updateCollider(al::HitSensor*);
    exeHold();
    ~MapObjStatePlayerHold();
};
