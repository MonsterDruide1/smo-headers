#pragma once

class HammerBrosHammer
{
public:
    HammerBrosHammer(char const*, al::LiveActor const*, char const*, bool);
    init(al::ActorInitInfo const&);
    shoot(sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&, bool, int, bool);
    killCollide(al::HitSensor*, sead::Vector3<float> const&, bool);
    killEnemy();
    attach(sead::Matrix34<float> const*, sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
    isBreak() const;
    getBreakStep() const;
    exeAttach();
    exeMove();
    exeBreak();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
