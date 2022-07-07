#pragma once

class YoshiStateHack
{
public:
    YoshiStateHack(al::ActorInitInfo const&, al::LiveActor*, al::LiveActor*, CapTargetInfo const*, PlayerConst const*, al::WaterSurfaceFinder const*, PlayerTrigger*, PlayerModelChangerYoshi*, PlayerAnimator*, IUsePlayerCollision*, PlayerEffect*, PlayerJumpMessageRequest*);
    appear();
    updatePrevMovement();
    updateAfterMovement();
    isEnableUpdateCollider() const;
    isActiveHeadCorrection() const;
    isCollisionShapeTongueJump() const;
    tryGetLookAtTonguePos(sead::Vector3<float>*) const;
    tryCalcTonguePullForce(float*, sead::Vector3<float>*) const;
    calcGroundPoseRate(float*, float*) const;
    startFruitShineGetDemo();
    exeLockOn();
    exeDemo();
    exeDemoHackStart();
    exeHack();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgSetNerveState(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgEndState(bool*, al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    prepareEndHack();
    reactionCollidedCollisionCode();
    ~YoshiStateHack();
};
