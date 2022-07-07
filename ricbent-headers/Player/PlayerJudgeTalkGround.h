#pragma once

class PlayerJudgeTalkGround
{
public:
    PlayerJudgeTalkGround(al::LiveActor const*, IPlayerModelChanger const*, PlayerHackKeeper const*, PlayerCarryKeeper const*, IUsePlayerCollision const*, PlayerInput const*, PlayerConst const*, PlayerStateWait const*);
    judge() const;
    reset();
    update();
};
