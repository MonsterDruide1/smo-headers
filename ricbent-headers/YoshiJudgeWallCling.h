#pragma once

class YoshiJudgeWallCling
{
public:
    YoshiJudgeWallCling(IUsePlayerHack**, al::LiveActor const*, IUsePlayerCollision const*, PlayerWallActionHistory const*, PlayerConst const*);
    update();
    reset();
    judge() const;
};
