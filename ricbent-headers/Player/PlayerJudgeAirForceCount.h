#pragma once

class PlayerJudgeAirForceCount
{
public:
    PlayerJudgeAirForceCount(al::LiveActor const*, PlayerExternalVelocity const*, IUsePlayerCollision const*);
    reset();
    update();
    judge() const;
};
