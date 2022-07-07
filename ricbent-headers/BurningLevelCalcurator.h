#pragma once

class BurningLevelCalcurator
{
public:
    BurningLevelCalcurator(float, float);
    changeAttackTime(float);
    changeReleaseTime(float);
    changeTarget(float, bool);
    update();
};
