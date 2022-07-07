#pragma once

class BossForestStateRecovery
{
public:
    BossForestStateRecovery(BossForest*, BossForestSatelliteController*);
    appear();
    kill();
    exeAppearSatellites();
    exeWait();
    exeAppearBarrier();
    ~BossForestStateRecovery();
};
