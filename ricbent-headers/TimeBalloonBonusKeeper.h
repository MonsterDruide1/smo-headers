#pragma once

class TimeBalloonBonusKeeper
{
public:
    TimeBalloonBonusKeeper(al::IUseMessageSystem const*);
    setBonusNum(float);
    setResultBonusNum(float);
    applyBonus();
    clear();
    setParam(int, float, float);
};
