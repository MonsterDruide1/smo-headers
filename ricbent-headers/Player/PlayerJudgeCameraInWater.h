#pragma once

class PlayerJudgeCameraInWater
{
public:
    PlayerJudgeCameraInWater(al::LiveActor const*, IJudge const*, al::WaterSurfaceFinder const*);
    judge() const;
    reset();
    update();
};
