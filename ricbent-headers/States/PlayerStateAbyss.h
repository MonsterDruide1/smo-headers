#pragma once

class PlayerStateAbyss
{
public:
    PlayerStateAbyss(al::LiveActor*, PlayerConst const*, PlayerRecoverySafetyPoint*, PlayerColliderHakoniwa*, PlayerAnimator*, al::LiveActor*);
    appear();
    kill();
    prepareRecovery();
    isRecovery() const;
    isRecoveryLandFall() const;
    exeFall();
    exeRecovery();
    ~PlayerStateAbyss();
};
