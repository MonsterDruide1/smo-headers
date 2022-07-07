#pragma once

class YoshiJudgeStartTongueClingFix
{
public:
    YoshiJudgeStartTongueClingFix(YoshiTongue const*, IUsePlayerCollision const*, PlayerWallActionHistory const*);
    update();
    reset();
    judge() const;
};
