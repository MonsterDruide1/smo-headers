#pragma once

class Tsukkun
{
public:
    Tsukkun(char const*);
    init(al::ActorInitInfo const&);
    validateSensors();
    setAnimHackOff();
    start();
    setAnimHackOn();
    setBend(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    clearBend();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnableAttack() const;
    isEnablePush() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableDamage() const;
    isStateEnemy() const;
    deathAndReset();
    isEnableCapLockOn() const;
    startHack(al::HitSensor*, al::HitSensor*);
    isEnableCap() const;
    isEnableCapAttack() const;
    blowDownCap(al::HitSensor*);
    control();
    calcCenterPos(sead::Vector3<float>*) const;
    calcBeakPos(sead::Vector3<float>*) const;
    calcStickPos(sead::Vector3<float>*, sead::Vector3<float>*) const;
    appearBall(sead::Vector3<float> const&, sead::Vector3<float> const&);
    appearCap();
    exeStandBy();
    exeRevive();
    exeAppear();
    exeAppearBall();
    updateVelocity(float, float);
    exeAppearBallEnd();
    updateGround();
    exeWait();
    exeFind();
    exeMove();
    addMoveAccel(sead::Vector3<float> const&);
    setMoveActionRate(float);
    exeThrustSign();
    exeThrust();
    checkHitBeak(al::ArrowHitInfo const**, sead::Vector3<float>*) const;
    exeThrustLoop();
    exeThrustEnd();
    exeThrustCancel();
    exeDamageCap();
    exeSwoon();
    exeHack();
    exeTrampleDown();
    exeBlowDown();
    exeReset();
    updateVelocity();
};
