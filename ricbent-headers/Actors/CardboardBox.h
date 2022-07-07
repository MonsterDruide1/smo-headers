#pragma once

class CardboardBox
{
public:
    CardboardBox(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    checkNeighbors();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isActive() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    propagateWaitForCollapsing();
    dealWithHit(float, float, al::HitSensor*, al::HitSensor*);
    exeWait();
    exePressDown();
    exeShake();
    propagateUpShake() const;
    exeHit();
    exeFall();
    exeBounce();
    exeVanish();
    propagateUpHit(sead::Vector3<float> const&, float, float) const;
    setHitSpeed(float, float);
};
