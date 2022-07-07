#pragma once

class PlayerJudgeInWater
{
public:
    PlayerJudgeInWater(al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*, PlayerAreaChecker const*, al::WaterSurfaceFinder const*, IUsePlayerHeightCheck const*, PlayerCounterForceRun const*, bool, bool, bool);
    judge() const;
    reset();
    update();
};
