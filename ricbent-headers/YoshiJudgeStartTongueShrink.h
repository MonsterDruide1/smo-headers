#pragma once

class YoshiJudgeStartTongueShrink
{
public:
    YoshiJudgeStartTongueShrink(IUsePlayerHack**, al::LiveActor const*, IUsePlayerCollision const*, YoshiTongue const*, PlayerConst const*);
    update();
    updateJudge();
    isConnectGround() const;
    isConnectWall() const;
    reset();
    judge() const;
};
