#pragma once

class PlayerStateRecoveryDead
{
public:
    PlayerStateRecoveryDead(al::LiveActor*, PlayerRecoverySafetyPoint*, PlayerColliderHakoniwa*, PlayerAnimator*, PlayerConst const*, al::LiveActor*);
    appear();
    kill();
    isLandFall() const;
    exeStart();
    exeRecovery();
    exeFall();
    ~PlayerStateRecoveryDead();
};
