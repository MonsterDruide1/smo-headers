#pragma once

class PlayerJudgeStartWaterSurfaceRun
{
public:
    PlayerJudgeStartWaterSurfaceRun(al::LiveActor const*, al::WaterSurfaceFinder const*, PlayerCounterForceRun const*);
    judge() const;
    reset();
    update();
};
