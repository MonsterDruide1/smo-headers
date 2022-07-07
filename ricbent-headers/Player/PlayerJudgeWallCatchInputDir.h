#pragma once

class PlayerJudgeWallCatchInputDir
{
public:
    PlayerJudgeWallCatchInputDir(al::LiveActor const*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerCarryKeeper const*, PlayerExternalVelocity const*, PlayerCounterForceRun const*, IUsePlayerHeightCheck const*);
    reset();
    update();
    updateJudgeKids();
    updateJudgeNormal();
    judge() const;
    validateFallJudge();
    updateWallCatchEnviroment();
};
