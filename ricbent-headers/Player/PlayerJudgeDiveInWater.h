#pragma once

class PlayerJudgeDiveInWater
{
public:
    PlayerJudgeDiveInWater(al::LiveActor const*, PlayerConst const*, IUsePlayerHeightCheck const*, IUsePlayerFallDistanceCheck const*);
    judge() const;
    reset();
    update();
};
