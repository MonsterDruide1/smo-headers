#pragma once

class GiantWanderBossBullet
{
public:
    GiantWanderBossBullet(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAttach(sead::Matrix34<float> const*, sead::Vector3<float> const*, bool);
    startLaunch();
    isLaunched() const;
    exeAppearAttach();
    exeFly();
    resetPositionByAnim();
    checkCollideAndSendMsg();
};
