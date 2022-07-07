#pragma once

class HackFork
{
public:
    HackFork(char const*);
    init(al::ActorInitInfo const&);
    initBasicPoseInfo();
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryTouch(float, char const*);
    resetCapMtx(al::HitSensor*);
    isNerveHackable() const;
    isHack() const;
    exeWait();
    exeDamping();
    controlSpring();
    exeHackStartWait();
    checkSwing();
    exeHackStart();
    exeHackWait();
    trySwingJump();
    updateInput(sead::Vector3<float>*, sead::Vector3<float>);
    getJumpRange() const;
    exeHackBend();
    bendAndTwist(sead::Vector3<float> const&, sead::Vector3<float> const&);
    exeHackShoot();
    shoot();
    control();
    calcAnim();
    updateCapMtx();
    calcHackDir(al::HitSensor*);
};
