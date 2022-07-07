#pragma once

class GrowPlantSeed
{
public:
    GrowPlantSeed(char const*, bool);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    tryValidateGuide();
    appear();
    kill();
    control();
    killOrRevival();
    exeWait();
    updateWait();
    exeWaitWater();
    exeHold();
    exeThrow();
    exeBeingPushed();
    exeRevival();
    exeDelayedRevival();
    exeWaitBind();
    exeReleaseBind();
    isWaitBind() const;
    isHold() const;
    setupNerveWaitBind();
    setupNerveReleaseBind(bool);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    updateCollider();
    getGuideTrans() const;
    initTrans(sead::Vector3<float> const&);
};
