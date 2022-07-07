#pragma once

class PlayerJudgeWaterSurfaceRun
{
public:
    PlayerJudgeWaterSurfaceRun(al::LiveActor const*, PlayerConst const*, al::WaterSurfaceFinder const*, PlayerCounterForceRun const*);
    getBorderSpeedH() const;
    update();
    reset();
    judge() const;
};
