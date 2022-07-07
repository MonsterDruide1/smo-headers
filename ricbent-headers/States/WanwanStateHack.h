#pragma once

class WanwanStateHack
{
public:
    WanwanStateHack(al::LiveActor*, sead::Vector3<float> const*, WanwanStateHackParam const*);
    start(al::HitSensor*, al::HitSensor*);
    appear();
    kill();
    isBack() const;
    control();
    getRootPos() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitCap();
    exeWaitEnterMario();
    updateVelocityGround();
    exeHackStart();
    exeWait();
    updateWait();
    isPullAnimStart() const;
    exePull();
    endPull();
    exeJump();
    updateMove();
    exeDash();
    updateMove(sead::Vector3<float> const&);
    exeDashEnd();
    updatePullPower();
    addMoveVec(sead::Vector3<float> const&);
    exeBack();
    exeSwoon();
    exeDead();
    exeSorry();
    isHackStart() const;
    isSwoon() const;
    isDead() const;
    isSorry() const;
    isDashStart() const;
    ~WanwanStateHack();
};
