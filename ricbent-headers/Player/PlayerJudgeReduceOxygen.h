#pragma once

class PlayerJudgeReduceOxygen
{
public:
    PlayerJudgeReduceOxygen(PlayerConst const*, al::WaterSurfaceFinder const*);
    judge() const;
    reset();
    update();
};
