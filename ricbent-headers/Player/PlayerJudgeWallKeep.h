#pragma once

class PlayerJudgeWallKeep
{
public:
    PlayerJudgeWallKeep(al::LiveActor const*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, IPlayerModelChanger const*, IUsePlayerHeightCheck const*, PlayerCounterAfterUpperPunch const*, PlayerWallActionHistory const*, PlayerCarryKeeper const*, PlayerTrigger const*, PlayerCounterForceRun const*);
    reset();
    update();
    judge() const;
};
