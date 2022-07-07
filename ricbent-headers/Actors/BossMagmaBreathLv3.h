#pragma once

class BossMagmaBreathLv3
{
public:
    BossMagmaBreathLv3(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    kill();
    start(unsigned int, sead::Vector3<float> const&, sead::Vector3<float> const&);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&);
    end();
    endForce();
    isAlive() const;
    exeLoop();
    updateBreath();
    createBreath();
    createModel();
    updateEyeSensor();
    isAllBreathEnd() const;
    setProjMtx(sead::Matrix44<float> const&);
    setStepAppearObserver(al::FunctorBase const&);
    getTouchPlayerSensor() const;
    clearTouchPlayerSensor();
};
