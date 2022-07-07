#pragma once

class PlayerJudgeStartSwimJump
{
public:
    PlayerJudgeStartSwimJump(PlayerInput const*, PlayerConst const*, al::WaterSurfaceFinder const*);
    reset();
    update();
    judge() const;
};
