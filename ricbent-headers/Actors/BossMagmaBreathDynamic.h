#pragma once

class BossMagmaBreathDynamic
{
public:
    BossMagmaBreathDynamic(char const*);
    init(al::ActorInitInfo const&);
    setProjMtx(sead::Matrix44<float> const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    kill();
    start(unsigned int, sead::Vector3<float> const&, sead::Vector3<float> const&);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&);
    end();
    endForce();
    isAlive() const;
    exeStart();
    exeLoop();
    exeEnd();
    control();
    getTouchPlayerSensor() const;
    clearTouchPlayerSensor();
};
