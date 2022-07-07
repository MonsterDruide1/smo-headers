#pragma once

class GiantWanderBossMine
{
public:
    GiantWanderBossMine(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAttach(sead::Matrix34<float> const*, sead::Vector3<float> const*);
    isLaunched() const;
    isEnableLaunch() const;
    isAttach() const;
    startLaunchForOnGlass(sead::Vector3<float> const&);
    startLaunchForFirstPhase();
    startLaunchForEscape();
    startLaunchForLongRange();
    exeAppearAttach();
    exeFlyDown();
    resetPositionByAnim();
    checkCollideAndSendMsg();
    exeFlyParabolic();
    exeSignExplosion();
    exeExplosion();
    exeDie();
};
