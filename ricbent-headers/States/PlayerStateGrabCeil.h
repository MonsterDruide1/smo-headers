#pragma once

class PlayerStateGrabCeil
{
public:
    PlayerStateGrabCeil(al::LiveActor*, PlayerConst const*, PlayerInput const*, PlayerModelHolder const*, PlayerTrigger*, IUsePlayerCollision*, PlayerAnimator*, PlayerJudgePreInputJump*, al::HitSensor*, PlayerJointParamGrab*);
    appear();
    followCollision();
    sendMsgStartGrab();
    kill();
    sendMsgEndGrab();
    setup(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    isFormGrabCeil() const;
    isJump() const;
    isEnableNextGrabCeil() const;
    isEnableSnapForce() const;
    isEnableTrample() const;
    getGrabCeilFront() const;
    exeStart();
    leaveGrabCeil(bool);
    updateWaitSwingFlag(bool, float);
    exeWait();
    exeSwing();
    exeJump();
    ~PlayerStateGrabCeil();
};
