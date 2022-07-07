#pragma once

class PlayerStateFallHakoniwa
{
public:
    PlayerStateFallHakoniwa(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerTrigger const*, PlayerAreaChecker const*, IUseDimension const*, PlayerAnimator*);
    appear();
    updateFallTargetArea();
    isValidWallCatch() const;
    exeFall();
    ~PlayerStateFallHakoniwa();
};
