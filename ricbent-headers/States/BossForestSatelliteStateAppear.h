#pragma once

class BossForestSatelliteStateAppear
{
public:
    BossForestSatelliteStateAppear(BossForestSatellite*, sead::Vector3<float>*, bool);
    appear();
    exeAppearCore();
    exeWaitCore();
    exeAppearBlocksPhase1();
    exeAppearBlocksPhase2();
    exeAppearBlocksPhase3();
    exeWaitBlocks();
    ~BossForestSatelliteStateAppear();
};
