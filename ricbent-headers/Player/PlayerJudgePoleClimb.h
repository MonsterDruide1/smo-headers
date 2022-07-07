#pragma once

class PlayerJudgePoleClimb
{
public:
    PlayerJudgePoleClimb(al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerCarryKeeper const*, PlayerExternalVelocity const*, PlayerInput const*, PlayerTrigger const*);
    reset();
    update();
    judge() const;
};
