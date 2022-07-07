#pragma once

class PlayerStateHeadSliding
{
public:
    PlayerStateHeadSliding(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerActionDiveInWater const*, PlayerAnimator*);
    appear();
    kill();
    isEnableDiveInWater() const;
    exeDive();
    ~PlayerStateHeadSliding();
};
