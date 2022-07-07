#pragma once

class PlayerStatePoleClimb
{
public:
    PlayerStatePoleClimb(al::LiveActor*, PlayerConst const*, PlayerInput const*, PlayerTrigger const*, PlayerModelHolder*, IUsePlayerCollision*, PlayerAnimator*, PlayerWallActionHistory*, PlayerJointParamHandLegAngle*, PlayerJudgePreInputJump*, PlayerActionDiveInWater*);
    appear();
    kill();
    isFormPoleClimb() const;
    update();
    setup(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, char const*);
    updatePoleDepth(float, float);
    isAttachPole() const;
    isPoleJump() const;
    isTriggerReaction() const;
    isEnableTrample() const;
    isForceFollowCap() const;
    getPoleFront() const;
    getPoleSensor() const;
    updateLeavePoleTrans() const;
    exeStart();
    followCollision();
    tryStartClimbMove(int, int*);
    exeWait();
    exeUp();
    changeUpMoveSpeed(int, int);
    exeDown();
    exeTurn();
    exeJump();
    exeTopStart();
    exeTopWait();
    tryTurnTopOrClimb();
    exeTopTurn();
    exeTopEnd();
    exeTopJump();
    ~PlayerStatePoleClimb();
};
