#pragma once

class PlayerStateHipDrop
{
public:
    PlayerStateHipDrop(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerAnimator*, PlayerTrigger*);
    appear();
    attackHipDropKnockDown(al::HitSensor*, al::HitSensor*);
    isEnableHeadSliding() const;
    isEnableHipDropAttack() const;
    isEnableLandCancel() const;
    isEnableMove() const;
    isEnableInWater() const;
    isEnableIK() const;
    isLandTrigger() const;
    exeStart();
    exeFall();
    exeLand();
    ~PlayerStateHipDrop();
};
