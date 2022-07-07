#pragma once

class PlayerJudgeGrabCeil
{
public:
    PlayerJudgeGrabCeil(al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerCarryKeeper const*, PlayerExternalVelocity const*);
    reset();
    update();
    judge() const;
};
