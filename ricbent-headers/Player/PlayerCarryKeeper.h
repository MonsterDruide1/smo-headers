#pragma once

class PlayerCarryKeeper
{
public:
    PlayerCarryKeeper(al::LiveActor const*, al::HitSensor*, PlayerAnimator*, IPlayerModelChanger const*, IUsePlayerCeilingCheck const*, PlayerJointParamHandLegAngle*);
    update();
    updateCollideLockUp(IUsePlayerCollision const*, PlayerPushReceiver const*);
    startCarry(al::HitSensor*);
    startThrow(bool);
    startCancelAndRelease();
    startRelease();
    startReleaseDemo();
    startReleaseDamage();
    startReleaseDead();
    startDemoKeepCarry();
    startDemoShineGet();
    endDemoShineGet();
    getCarryStartAnimName() const;
    startCameraSubjective();
    endCameraSubjective();
    sendPlayerWarp();
    isCarry() const;
    isCarryWallKeep() const;
    isCarryFront() const;
    isCarryUp() const;
    isThrow() const;
    isThrowHandR() const;
    getCarryThrowAnimName() const;
    isThrowHold() const;
    getThrowReleaseFrame() const;
    isThrowRelease() const;
    exeWait();
    exeStart();
    updateHandJointAngle();
    exeCarry();
    getCarryAnimName() const;
    exeThrow();
    exeRelease();
    ~PlayerCarryKeeper();
};
