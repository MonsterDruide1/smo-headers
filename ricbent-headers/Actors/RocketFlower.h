#pragma once

class RocketFlower
{
public:
    RocketFlower(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnableEquip() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    terminateFollow();
    exeWait();
    exeWaitFollow();
    trySyncFlyingCapPos();
    exeFollow();
    appearFlowerSub();
    exeWaitAttach();
    exeAttach();
    setFollowFlowerPose(sead::Quat<float> const&, sead::Vector3<float> const&);
    disappear();
    disappearForce();
    control();
};
